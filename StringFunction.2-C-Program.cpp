#include<iostream>
#include<stdbool.h>
#include<string.h>
   int main() 
   {
     char s1[20];
     char s2[20];
     gets(s1);
     gets(s2);
     printf("length of string is %d",strlen(s1));
     printf("connection of the strings-%s",strcat(s1,s2));
     printf("lower case-%s",strlwr(s1));
     printf("upper case-%s",strupr(s2));
     	
   }
