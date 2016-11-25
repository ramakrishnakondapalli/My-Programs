#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
                        char name[20];
                        int roll_no;
                        float mark;
                       struct student *link;
                      }NODE;
