#include <iostream>
#include <cmath>
using namespace std;
int polynomial(int x,int n)
{

    n--;
    return (n<=0)?1:(int)pow(x,n)+polynomial(x,n);
}

int main()
{

    int n,x,result ;
    cin>>x>>n;
    result =  polynomial(x,n);
    cout<<"Output: \n"<<result<<endl;

}
