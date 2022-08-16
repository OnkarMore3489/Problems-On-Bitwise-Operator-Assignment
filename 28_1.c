// 1.Write a program which accept one number from user and off 7th bit of that 
// number if it is on. Return modified number.
// Input : 79
// Output : 15
 #include<stdio.h>
 typedef unsigned int UINT;
 UINT OffBit(UINT iNo)
 {
     UINT iMask=0x00000001;
     iMask=iMask<<6;
     UINT iResult=iMask^iNo;
     return iResult;
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