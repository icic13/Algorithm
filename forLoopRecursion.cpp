#include <iostream>

using namespace std;
void func(int i,int n)
{
if(i<=n){
    func(i+1,n);
    cout<<i<<endl;
}

}
int main()
{
//Prints i to n
    func(1,10);




}
