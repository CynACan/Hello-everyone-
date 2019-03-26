#include<stdio.h>
#include<string.h>


void main(){
int count = 0;
char info[] = "aC09B0167aaf0";  //test morse code
int endstring = strlen(info);

for(count;count<endstring;count++)//walk through test morse code and print
 {
   switch(info[count])
   {
   case 'a':case 'A': printf("10");break;
   case 'b':case 'B': printf("0111");break;
   case 'c':case 'C': printf("0101");break;
   case 'd':case 'D': printf("011");break;
   case 'e':case 'E': printf("1");break;
   case 'f':case 'F': printf("1101");break;
   case '0':printf("00000");break;
   case '1':printf("10000");break;
   case '2':printf("11000");break;
   case '3':printf("11100");break;
   case '4':printf("11110");break;
   case '5':printf("11111");break;
   case '6':printf("01111");break;
   case '7':printf("00111");break;
   case '8':printf("00011");break;
   case '9':printf("00001");break;
   default: printf("not working");break;
   }
 }
return ;
}
