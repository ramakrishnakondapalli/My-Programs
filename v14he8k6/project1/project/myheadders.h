#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
                      int roll;
                      float mark;
                      char name[20];
                      struct student *link;
                      }node;



