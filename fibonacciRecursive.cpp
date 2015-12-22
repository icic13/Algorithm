#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==1||n==0) return 1;
    else
        return  fibonacci(n-1)+fibonacci(n-2);

}

int main()
{


    int number;
    cout<<"Enter a number to find fibonacci: "<<endl;
    cin>>number;
    cout<<fibonacci(number)<<endl;

}
