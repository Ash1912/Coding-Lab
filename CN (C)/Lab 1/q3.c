// Write a C program to extract each byte from a given number and store them in separate character variables and
// print the content of those variables. 

#include <stdio.h>
  
int main()
{
    int x=0x12345678;
    int a,b,c,d;  
    a=(x&0xFF);            
    b=((x>>8)&0xFF); 
    c=((x>>16)&0xFF); 
    d=((x>>24)&0xFF); 
    printf("a= %02X\n",a);
    printf("b= %02X\n",b);
    printf("c= %02X\n",c);
    printf("d= %02X\n",d);
  
    return 0;
}