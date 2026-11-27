#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// bi-directional search

bool SearechElement(int Arr[],int  iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    int iStart = 0;
    int iEnd = iLength - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
        {
            bFlag == true;
            break;   // Early exit
        }
        iStart++;
        iEnd--;
    }

    // TIME CMPLEXCITY = O(N/2)

}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(NULL == ptr)    
    {
        printf("Error:unable to alloacate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that you to searech :\n");
    scanf("%d",&iValue);

    bRet = SearechElement(ptr,iSize,iValue);//hybride

    if(bRet == true)
    {
        printf("element is present\n");
    }
    else
    {
        printf("there is no such elemnet\n");
    }

    free(ptr);

    return EXIT_SUCCESS;
}