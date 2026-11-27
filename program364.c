#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[],int  iLength)
{
    int iCountEven = 0,iCountOdd = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCountOdd++;
        }
        else
        {
            iCountEven++;
        }
    }
    
    printf("Number of even elements : %d\n odd element : %d\n",iCountEven,iCountOdd);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

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

    EvenOddCount(ptr,iSize);//hybride

    free(ptr);

    return EXIT_SUCCESS;
}