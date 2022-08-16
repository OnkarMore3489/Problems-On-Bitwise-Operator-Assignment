// 2. Write a program which accept two numbers from user and display position 
// of common ON bits from that two numbers.
// Input : 10 15 (1010 1111)
// Output : 2 4
// void CommonBits(UINT iNo1, UINT iNo2)
// {
// // Logic
// }
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iMask=0x00000001,iResult1=0,iResult2=0,iCnt=0;
    for(int i=1;i<32;i++)
    {
        iResult1=iNo1&iMask;
        iResult2=iNo2&iMask;
        if(iResult1==iMask && iResult2==iMask)
        {
            printf("%d ",i);
        }
        iMask=iMask<<1;
    }
}
int main()
{
    UINT iValue1=0,iValue2=0;
    printf("Enter the First Number : ");
    scanf("%d",&iValue1);
    printf("Enter the Second Number : ");
    scanf("%d",&iValue2);
    CommonBits(iValue1,iValue2);
    return 0;
}