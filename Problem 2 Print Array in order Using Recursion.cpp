#include <iostream>


using namespace std;

void printData(int data[],int n)
{
    static int cnt = n;
    if((n+1)/2>1)
    {
        cout<<" "<<data[cnt-n]<<" "<<data[n-1]<<endl;
        n--;

        printData(data,n);
    }

}

int main()
{
    int n;
    cin>>n;
    int data[n];
    for(int i = 0; i<n; i++)
        cin>>data[i];
    printData(data,n);




}
