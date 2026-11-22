#include<iostream>
using namespace std;

class Number
{
    public:
        int *Arr;//pointer
        int iLength;

        Number(int iSize)//constructor
        {
            cout<<"Inside costructor\n";
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Number()//distructor
        {
            cout<<"Inside Distructor\n";
            delete []this->Arr;
        }

        void Accept()//also use seter
        {
            int iCnt = 0;
            cout<<"Enter the elements : \n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }   
        }

        void Display()//also use geter
        {
            int iCnt = 0;
            cout<<"Elements of the array ar : \n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }   
        }
};

int main()
{
    int iSize = 0;
    cout<<"Enter number of elements :\n";
    cin>>iSize;

    //Step1: Allocate the memory
    Number *number1 = new Number(iSize);

    //step2: use memory
    number1->Accept();
    number1->Display();

    //step3: deallocate the memory
    delete number1;

    return EXIT_SUCCESS;
}