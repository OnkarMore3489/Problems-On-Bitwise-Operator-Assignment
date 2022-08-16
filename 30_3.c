// 3. Write a program which accept one number from user and check whether 
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE
// BOOL ChkBit(UINT iNo)
// {
// // Logic
// }

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask1=0x00000001,iMask2=0x00000001,iResult=0,iMask;
    iMask1=iMask1<<8;
    iMask2=iMask2<<11;
    iMask=iMask1|iMask2;
    iResult=iNo&iMask;

    if(iResult==iMask1 || iResult==iMask2)
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
    UINT iValue=0;
    bool bRet=false;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        printf("9th or 12th bit is on");
    }
    else
    {
        printf("9th or 12th bit is off");
    }
    return 0;
}