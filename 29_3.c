// 3. Write a program which accept one number and position from user and on 
// that bit. Return modified number.
// Input : 10 3
// Output : 14

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo,UINT iPos)
{
   UINT iMask=0x00000001,iResult=0;
   iMask=iMask<<(iPos-1);
   iResult=iNo^iMask;
   return iResult;
}
int main()
{
    UINT iValue=0,iRet=0,iNo;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    printf("Enter the position(bit) : ");
    scanf("%d",&iNo);
   
    iRet=OnBit(iValue,iNo);
    printf("Modified Number is : %d\n",iRet);
    return 0;
}