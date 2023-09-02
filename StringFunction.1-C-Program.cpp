#include<iostream>
#include<string.h>
   int main()
   {
     char s1[30];
     char s2[30];
     gets(s1);
     gets(s2);
     printf("%ld\n",strlen(s1));
     printf("%s\n",strcat(s1,s2));
     printf("%ld\n",strcmp(s1,s2));
     printf("%s\n",strlwr(s1));
     printf("%s\n",strupr(s1));
     printf("%s\n",strcpy(s1,s2));
     return 0;	
   }
