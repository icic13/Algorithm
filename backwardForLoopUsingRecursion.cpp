#include <iostream>

using namespace std;
void FOR(int i,int n)
{

    if(i==n) return;

    FOR(i+1,n);
    cout<<i<<endl;

}
int main()
{
//Prints n to i
    FOR(1,10);




}

