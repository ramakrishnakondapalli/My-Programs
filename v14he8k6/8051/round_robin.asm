;IMPLEMENTATION OF ROUND ROBIN SCHEDULING USING TIMER INTERUPT

                          ;Task1 ret address save location
 T1RA_LB  EQU  00H
 T1RA_HB  EQU 01H
                       ;Task2 ret address save location
 T2RA_LB  EQU  02H
 T2RA_HB  EQU 03H
                        ;Task3 ret address save location
 T3RA_LB  EQU  04H
 T3RA_HB  EQU 05H
                    ;CPU begins executing from here/default
 cseg at 0
 sjmp SCHEDULAR       ;goto schedular

 cseg at 0BH    ;timer 0 interrupt vector defining for timer0 ISR
 CLR TR0        ;HALT SCHEDULAR's timer

 ;User context saving if required
 ;startscheduling,check current active task
 ;to switch to next task

 JB Acc.0,_TASK2
 JB Acc.1,_TASK3
 JB Acc.2,_TASK1

 _TASK1:           ;saving context of TASK3 From common/Stack areaTo TCB

 POP T3RA_HB
 POP T3RA_LB
 ;redirecting information for PC req
 ;ensure Task T1 Execute Next

 PUSH T1RA_LB
 PUSH T1RA_HB
 MOV A,#1           ;make Task1 again ready,Acc.0=1
 SJMP RST_SCHEDULAR


 _TASK2:            ;saving context of TASK3 From common/Stack area To TCB

 POP T1RA_HB
 POP T1RA_LB
                    ;redirecting information for PC req
 PUSH T2RA_LB
 PUSH T2RA_HB
 MOV A,#2            ;make Task1 again ready,Acc.1=1
 SJMP RST_SCHEDULAR

 _TASK3:
                      ;saving context of TASK3 From common/Stack areaTo TCB
 POP T2RA_HB
 POP T2RA_LB
 ;redirecting information for PC req

 PUSH T3RA_LB
 PUSH T3RA_HB
 MOV A,#4                  ;make Task3 again ready,Acc.2=1
 SJMP RST_SCHEDULAR

  ;reset schedular for next task

   RST_SCHEDULAR:
   MOV TL0,#230  ;re-init time slice,26 units
   SETB TR0  ;Restart schedular timer
   RETI      ;exit schedular,dispatch with next task


;main app of 3 tasks/Threads
 MAIN: 
;begin scheduling from here
SCHEDULAR:
                 ;creating TCB for Task1
MOV T1RA_LB,#TASK1    ;LSB start Address
MOV T1RA_HB,#TASK1>>8 ;MSB

;creating TCB for Task2
MOV T2RA_LB,#TASK2    ;LSB start Address
MOV T2RA_HB,#TASK2>>8 ;MSB

;creating TCB for Task1
MOV T3RA_LB,#TASK3    ;LSB start Address
MOV T3RA_HB,#TASK3>>8 ;MSB


;EA=1   enable global interrupt bit
SETB EA
SETB ET0   ;ET0=1    enable timer0 interrupt
;sel TIMER0 in split timer mode,3
;Timer1Disabled
MOV TMOD,#33H
;CFG RR schedule time slice 26 units
MOV TL0,#230
SETB TR0     ;start schedular TIMER here
MOV A,#1    ;with TASK1

;def for Task1
TASK1:
;INITIALISATION IF REQUIRED
TASK1_LOOP:
      
    INC 30H
 SJMP TASK1_LOOP
 ;def for Task2
TASK2:
;INITIALISATION IF REQUIRED
TASK2_LOOP:
    
      INC 31H
  SJMP TASK2_LOOP
 ;def for Task3
TASK3:
;INITIALISATION IF REQUIRED
TASK3_LOOP:
    
   INC 32H
  SJMP TASK3_LOOP

END

