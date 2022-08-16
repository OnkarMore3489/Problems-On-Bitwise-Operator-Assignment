/*
5. Write a program which checks whether first and last bit is On or 
OFF. First bit means bit number 1 and last bit means bit number 32. 
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask=0x80000001;
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
        printf("1st and 32tt bit is ON\n");
    }
    else
    {
        printf("1st and 32th bit is OFF\n");
    }
    return 0;
}