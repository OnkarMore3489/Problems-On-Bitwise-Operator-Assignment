// 1.Write a program which accept one number and position from user and 
// check whether bit at that position is on or off. If bit is one return TURE 
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x00000001,iResult=0;
    iMask=iMask<<(iPos-1);
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue=0,iNo=0;
    bool bRet=false;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the position(bit) : ");
    scanf("%d",&iNo);
    bRet=ChkBit(iValue,iNo);
    if(bRet==true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }
    return 0;
}