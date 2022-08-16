// 5. Write a program which accept one number from user and range of 
// positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.
// UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
// {
// // Logic
// }
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
    UINT iMask1=0xFFFFFFFF,iMask2=0xFFFFFFFF,iMask=0,iResult=0;

    iMask1=iMask1<<(iStart-1);
    iMask2=iMask2>>(32-iEnd);
    iMask=iMask1&iMask2;
    iResult=iNo^iMask;
    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0,i=0,j=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter starting position : ");
    scanf("%d",&i);
    
    printf("Enter Ending position : ");
    scanf("%d",&j);

    iRet=ToggleRange(iValue,i,j);
    printf("Updated Number is :%d",iRet);

    return 0;
}