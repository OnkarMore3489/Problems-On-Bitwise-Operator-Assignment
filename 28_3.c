// 3. Write a program which accept one number from user and toggle 7th bit of 
// that number. Return modified number.
// Input : 137
// Output : 201

#include<stdio.h>
 typedef unsigned int UINT;
 UINT ToggleBit(UINT iNo)
 {
     UINT iMask=0x00000001,iResult=0;
     iMask=iMask<<6;
     if(iMask==iNo)
     {
       iResult=iMask^iNo;
     }
     else if(iMask!=iNo)
     {
         iResult=iMask^iNo;
     }
     return iResult;
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