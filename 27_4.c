/*
4. Write a program which checks whether 7th & 8th & 9th bit is On or 
OFF. 
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask=0x000001C0;
    UINT iResult=0;
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
    UINT iValue=0;
    bool bRet=false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        printf(" 7th & 8th & 9th bit is ON\n");
    }
    else
    {
        printf("7th & 8th & 9th bit is OFF\n");
    }
    return 0;
}