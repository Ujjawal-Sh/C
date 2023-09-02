#include<iostream>
   int main()
   {
     int a=20;
     int *p;
     p=&a;
     printf("Address of a:%x\n",&a);
     printf("Content of p:%x\n",p);
     printf("content of *p:%d\n",*p);
     return 0;	
   }
