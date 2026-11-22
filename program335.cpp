#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    //Step1 : Allocate the memory
    ptr = new int[iSize];

    //Step2 : Use the memory
    cout<<"Enter the elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elementes of the array are :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        cout<<ptr[iCnt]<<endl;
    }

    //step3 : Free the memory
    delete [] ptr;  

    return EXIT_SUCCESS;
}