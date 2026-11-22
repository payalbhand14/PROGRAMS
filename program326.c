#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)// Arr[] --> pointer
{
    int iCnt = 0;

    printf("Elments of the array are :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    } 

}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of elements you want :\n");
    scanf("%d",&iSize);
    
    //Step1 : Allocated the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

    //step2: Use the memory
    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    //Step3: Free the memory
    free(ptr);

    return EXIT_SUCCESS;
}