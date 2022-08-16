// 4. Write a program which accept one number from user and toggle 7th and 
// 10th bit of that number. Return modified number.
// Input : 137
// Output : 713

#include<stdio.h>
 typedef unsigned int UINT;
 UINT ToggleBit(UINT iNo)
 {
     UINT iMask1=0x00000001,iMask2=0x00000001,iResult=0,iResult1=0;
     iMask1=iMask1<<6;
     iMask2=iMask2<<9;

     if(iNo==iMask1 && iNo==iMask2)
     {
         iResult=iNo^iMask1;
         iResult1=iResult^iMask2;
     }
     else
     {
          iResult=iNo^iMask1;
         iResult1=iResult^iMask2;
     }
     return iResult1;
 }
 int main()
 {
     UINT iValue=0,iRet=0;
     printf("Enter the Number : ");
     scanf("%d",&iValue);
     iRet=ToggleBit(iValue);
     printf("%d\n",iRet);
     return 0;
 }