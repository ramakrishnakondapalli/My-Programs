#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<pwd.h>
#include<grp.h>
#include<langinfo.h>
#include<locale.h>
#include<time.h>


main(int a, char **v)
{
        struct stat buf;
        struct passwd *pwd;
        struct group *grp;
        struct tm *tm;
        char datestring[100];
        char hourstring[100];
        char minstring[100];
        if(lstat(v[1],&buf)<0)
        {
                perror("stat");
             return;
        }


/******FILE TYPE*************/

        if(buf.st_mode & (1<<15))
        {
                if(buf.st_mode& (1<<13))
                        printf("l");
                else if(buf.st_mode&(1<<14))
                        printf("s");
                else
                        printf("-");
        }

        else
        {
                if(buf.st_mode& (1<<12))
                        printf("p");
                else if(buf.st_mode & (1<<14))
                {
                        if(buf.st_mode&(1<<13))
                               printf("b");
                        else
                                printf("d");
                }
                else
                        printf("c");
        }
/****************************************************/

/************FILE PERMISSION*****************/
        if(buf.st_mode & S_IRUSR)
                printf("r");
        else
                printf("-");
        if(buf.st_mode & S_IWUSR)
                printf("w");
        else
                printf("-");
        if(buf.st_mode & S_IXUSR)
                printf("x");
        else
                printf("-");
        if(buf.st_mode & S_IRGRP)
         printf("r");
        else
                printf("-");
        if(buf.st_mode & S_IWGRP)
                printf("w");
        else
                printf("-");
        if(buf.st_mode & S_IXGRP)
                printf("x");
        else
                printf("-");

        if(buf.st_mode & S_IROTH)
                printf("r");
        else
                printf("-");
        if(buf.st_mode & S_IWOTH)
                printf("w");
        else
                printf("-");
        if(buf.st_mode & S_IXOTH)
                printf("x");
        else
  printf("-");

/****************************************************/

/*********************Hard LINKs*************/
printf(" %d",buf.st_nlink);
////////////////////////////////////////////////

/*************user and group**************/
        if((pwd=getpwuid(buf.st_uid)))
                printf(" %s",pwd->pw_name);
        else
                printf(" %d",buf.st_gid);

        if((grp=getgrgid(buf.st_gid)))
                printf(" %s",grp->gr_name);
        else
                printf(" %d",buf.st_gid);
/*******************SIZE OF FILE ************************/
        printf(" %u",(unsigned int)buf.st_size);
/*******************************************/

        tm = localtime(&buf.st_mtime);
  printf("-");

/****************************************************/

/*********************Hard LINKs*************/
printf(" %d",buf.st_nlink);
////////////////////////////////////////////////

/*************user and group**************/
        if((pwd=getpwuid(buf.st_uid)))
                printf(" %s",pwd->pw_name);
        else
                printf(" %d",buf.st_gid);

        if((grp=getgrgid(buf.st_gid)))
                printf(" %s",grp->gr_name);
        else
                printf(" %d",buf.st_gid);
/*******************SIZE OF FILE ************************/
        printf(" %u",(unsigned int)buf.st_size);
/*******************************************/

        tm = localtime(&buf.st_mtime);
  printf("-");

/****************************************************/

/*********************Hard LINKs*************/
printf(" %d",buf.st_nlink);
////////////////////////////////////////////////

/*************user and group**************/
        if((pwd=getpwuid(buf.st_uid)))
                printf(" %s",pwd->pw_name);
        else
                printf(" %d",buf.st_gid);

        if((grp=getgrgid(buf.st_gid)))
                printf(" %s",grp->gr_name);
        else
                printf(" %d",buf.st_gid);
/*******************SIZE OF FILE ************************/
        printf(" %u",(unsigned int)buf.st_size);
/*******************************************/

        tm = localtime(&buf.st_mtime);

  printf("-");

/****************************************************/

/*********************Hard LINKs*************/
printf(" %d",buf.st_nlink);
////////////////////////////////////////////////

/*************user and group**************/
        if((pwd=getpwuid(buf.st_uid)))
                printf(" %s",pwd->pw_name);
        else
                printf(" %d",buf.st_gid);

        if((grp=getgrgid(buf.st_gid)))
                printf(" %s",grp->gr_name);
        else
                printf(" %d",buf.st_gid);
/*******************SIZE OF FILE ************************/
        printf(" %u",(unsigned int)buf.st_size);
/*******************************************/

        tm = localtime(&buf.st_mtime);
 strftime(datestring,sizeof(datestring),"%D",tm);
        printf(" %s ",datestring);
        strftime(hourstring,sizeof(hourstring),"%H",tm);
        printf(" %s",hourstring);
        strftime(minstring,sizeof(minstring),"%M",tm);
        printf(":%s ",minstring);

        printf(" %s ",v[1]);


printf("\n");
}
