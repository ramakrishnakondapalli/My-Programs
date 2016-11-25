#include<stdio.h>
char *myftoa(flaot);
main()
{
float f;int i;char str[10];
printf("Enter float number");
scanf("%f",&f);
str=myftoa(f);
printf("Given float is:%s",str);

}
char *myftoa(float f)
{
  char str[10];int i;
  if(0<f<10)
   {
      f*=10;
       str[i]='.';
      for(i=0;i<2;i+=2)
        {
          str[i]=f/10;
            f/=10;
        }
   }
  else if(10<f<100)
    {
       f*=100;str[2]='.';
       for(i=0;i<3;i++)
         {
              str[i]=f/10;
               f/=10;
         }
    }
  else
    {
       f*=1000;
       

    }

}
