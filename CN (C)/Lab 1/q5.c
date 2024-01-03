// Write a C program to check whether the Host machine is in Little Endian or Big Endian. Enter a number, print the 
// content of each byte location and Convert the Endianness of the same i.e. Little to Big Endian and vice-versa.
#include<stdio.h>

void printing(char *val,int n){
    int k;
    // for(k=0;k<n;k++){
    //     printf("%.2x  ",val[k]);
    // }
    // if(val[0]=78){
    //     printf("\nLittle Endian");
    // }
    // else
    //     printf("\nBig Endian");
    
    printf("\n"); 
    printf("\nLittle Endian\n");
    for(k=0;k<n;k++){
        printf("%.2x  ",val[k]);
    }
    printf("\nBig Endian\n");
    for(k=n-1;k>-1;k--){
        printf("%.2x  ",val[k]);
    }
}

int main()
{
    int i=0x12345678;
    printing((char*)&i,sizeof(i));  
    getchar();
    return(0);
} 