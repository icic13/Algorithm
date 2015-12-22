#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==0) return 1;
    else return n*factorial(n-1);

}

int main()
{


    int number;
    cout<<"Enter a number to find factorial: "<<endl;
    cin>>number;
    cout<<number<<"! is "<<factorial(number)<<" ."<<endl;

}
