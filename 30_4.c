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
bool ChkBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1=0x00000001,iMask2=0x00000001,iResult=0,iMask;
    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);
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
    UINT iValue=0,i=0,j=0;
    bool bRet=false;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    printf("Enter the First position : ");
    scanf("%d",&i);
    printf("Enter the second position :");
    scanf("%d",&j);
    bRet=ChkBit(iValue,i,j);
    if(bRet==true)
    {
        printf("bit is on");
    }
    else
    {
        printf("bit is off");
    }
    return 0;
}