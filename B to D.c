// convert binary to decimal no.

#include<stdio.h>

int main()
{

int d=0, b, base=1, r, n;                        // d = decimal
printf("Enter the no. \n");                      // b= binary
scanf("%d",&b);                                  //r= remainder
 n=b;                                            // n= number  
 while(b!=0)
 {
 	r=b%10;
 	d=d+(r*base);
 	b=b/10;
 	base=base*2;
 }
 printf(" \ndecimal equal to binary no. is %d \n",d);
 return 0;
}
