// 1.Write a program which accept one number from user and count number of 
// ON (1) bits in it without using % and / operator
// Input : 11
// Output : 3
// int CountOne(UINT iNo)
// {
// // Logic
// }

#include<stdio.h>
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
    UINT iMask=0x00000001,iCnt=0,i=0,iResult=0;
    for(int i=1;i<32;i++)
    {
        iResult=iNo&iMask;
        if(iResult==iMask)
        {
            iCnt++;
        }
        iMask=iMask<<1;
    }
    return iCnt;
}
int main()
{
    UINT iValue=0,iRet=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    iRet=CountOne(iValue);
    printf("No of ones is : %d\n",iRet);
    return 0;
}