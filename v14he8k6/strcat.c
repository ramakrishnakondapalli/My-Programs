#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
/*char str[20],str1[20],*p,*q,*s;int i;
printf("Enter string1");
scanf("%s",str);
printf("Enter string1");
scanf("%s",str1);
p=str,q=str1,s=str;
while(*p++ );
p--;
while(*q)
*p++=*q++;
*p='\0';
printf("%s",s);
*/
char s[9]="raviteja",*p="tejas12";
strcat(s,p);
printf("%s %c %d\n",s,s[10],strlen(s));


}
