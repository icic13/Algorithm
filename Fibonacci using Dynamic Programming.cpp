#include <iostream>

using namespace std;
int dp[20];
int fibonacci(int n)
{
    if(n==0||n==1) return 1;
    else if(dp[n]==0)
    {

        dp[n] = fibonacci(n-1)+fibonacci(n-2);
    }

    return dp[n];

}

int main()
{

    cout<<"Input!:"<<endl;
    int number;
    cin>>number;
    cout<<"Output:"<<endl;
    cout<<fibonacci(number)<<endl;

}
