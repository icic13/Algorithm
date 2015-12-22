#include <iostream>

using namespace std;
int fibArray[40];
int fibonacci(int n)
{
    if(n==0||n==1) return 1;
    else if(fibArray[n]==0)
    {
        fibArray[n] = fibonacci(n-1)+fibonacci(n-2);
    }
    return fibArray[n];

}

int main()
{


    int number;
    cout<<"Enter a number to find fibonacci: "<<endl;
    cin>>number;
    cout<<fibonacci(number)<<endl;

}

