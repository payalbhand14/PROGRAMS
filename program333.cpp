#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    //Step1 : Allocate the memory
    ptr = new int[iSize]; //ptr = (int *)malloc(sizeof(int)*iSize);

    //Step2 : Use the memory

    //step3 : Free the memory
    delete ptr; // free(ptr)

    return EXIT_SUCCESS;
}