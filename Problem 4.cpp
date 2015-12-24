#include <iostream>

using namespace std;
void polynomial(int n)
{
    if(n>0)
    {
        n--;


        polynomial(n);
        if(n==0)
            cout<<"1 +";
        else if(n==1)
            cout<<" x ";
        else
            cout<<"+ x^"<<n<<" ";
    }



}

int main()
{

    int n;
    cin>>n;
    polynomial(n);


}
