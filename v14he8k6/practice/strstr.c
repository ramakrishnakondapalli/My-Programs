











char *strstr(const char*str,const char *str1)
   {

    int i;
     for(i=0;i<strlen(str);i++)
     
           if(str[i]==str1[i])
 
              for(j=0;j<strlen(str1);j++)

                       if(str[i+j]==str1[j])



                  if(j==strlen(str1))
                      return str+i;
                  else
                     printf("string not found");
   }
