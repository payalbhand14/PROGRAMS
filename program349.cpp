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
};

int main()
{
    //Step1: Allocate the memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

    //step2: use memory

    //step3: deallocate the memory

    return EXIT_SUCCESS;
}