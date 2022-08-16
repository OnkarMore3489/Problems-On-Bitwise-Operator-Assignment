// 2. Write a program which accept one number from user and off 7th and 10th 
// bit of that number. Return modified number.
// Input : 577
// Output : 1
#include<stdio.h>
 typedef unsigned int UINT;
 UINT OffBit(UINT iNo)
 {
     UINT iMask1=0x00000001,iMask2=0x00000001;
     iMask1=iMask1<<6;
     //iMask2=iMask2<<9;
     UINT iResult=iMask1^iNo;
     iMask1=iMask1<<3;
     UINT iResult1=iResult^iMask1;
     return iResult1;
 }
 int main()
 {
     UINT iValue=0,iRet=0;
     printf("Enter the Number : ");
     scanf("%d",&iValue);
     iRet=OffBit(iValue);
     printf("%d\n",iRet);
     return 0;
 }