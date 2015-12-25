#include <iostream>

using namespace std;
int prime(int n)
{

    if(n==1||n==2)
        return 1;
    else
        return prime(n-1)+prime(n-2);
}

int main()
{

    cout<<"Input!:"<<endl;
    int number;
    while(cin>>number)
    {
        cout<<"Output:"<<endl;
        cout<<prime(number)<<endl;
    }

}

