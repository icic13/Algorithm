#include <iostream>

using namespace std;
void FOR(int i,int n)
{

    if(i==n) return;
    cout<<i<<endl;
    FOR(i+1,n);

}
int main()
{
//Prints i to n
    FOR(1,10);




}
