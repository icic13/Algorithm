#include <iostream>

using namespace std;
int arithmatic(int first,int diff, int n)
{
    n--;
    cout<<n<<endl;
    if(n>0)   arithmatic(first,diff,n);
}
int main()
{
    int first,dif,n;
    cout<<"Enter first term and difference: "<<endl;
    cin>>first>>dif;
    cout<<"N th term is "<<arithmatic(first,dif,n)<<endl;



}
