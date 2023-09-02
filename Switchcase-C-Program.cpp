#include<iostream>
   int main()
   {
     int e = 20;
     switch(e)
     {
   case 10: printf("10");
       break;
   case 20: printf("20");
       break;
       default: //Will be executed if e dosen't match any cases
          break;
     }
     return 0;
   }
