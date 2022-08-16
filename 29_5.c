// 5. Write a program which accept one number from user and toggle contents 
// of first and last nibble of the number. Return modified number. (Nibble is a 
// group of four bits)
// UINT ToggleBit(UINT iNo)
// {
// // Logic
// }

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
  UINT iMask=0xF000000F,iResult=0;
  iResult=iNo^iMask;
  return iResult;
}
int main()
{
    UINT iValue=0,iRet=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
   
    iRet=ToggleNibble(iValue);
    printf("Modified Number is : %d\n",iRet);
    return 0;
}