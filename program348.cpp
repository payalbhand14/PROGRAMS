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
    Number number1(5);
    Number number2(7);

    return EXIT_SUCCESS;
}