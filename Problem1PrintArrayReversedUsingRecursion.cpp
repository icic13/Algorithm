#include <iostream>

using namespace std;

void printData(int data[],int n)
{
    if(n>0)
    {
        cout<<data[n-1]<<" ";
        n--;
        printData(data,n);
    }



}

int main()
{
    int data[5] = {69,87,45,21,47};

    printData(data,5);

}
