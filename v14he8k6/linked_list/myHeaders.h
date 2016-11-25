#include<stdio.h>
#include<sys/resource.h>
#include<signal.h>
typedef struct student{
                        char name[20];
                        int roll_no;
                        float mark;
                        struct student *link;
                       }NODE;

