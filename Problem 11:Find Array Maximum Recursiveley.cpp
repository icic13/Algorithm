#include <iostream>

using namespace std;
int arrayMax(int data[],int n)
{
    int maxNum;
    if(n>0)
    {
//        cout<<"Data "<<data[n-1]<<endl;
        maxNum = -9999999;
        if(data[n-1]>maxNum)
            maxNum = data[n-1];

        cout<<"max "<<data[n-1]<<endl;
        arrayMax(data,n-1);

    }
//    cout<<maxNum<<endl;
    return maxNum;



}

int main()
{
    int n;
    cin>>n;
    int data[n];
    cout<<"Input:"<<endl;
    for(int i = 0; i < n ; i++ )
        cin>>data[i];

    cout<<"Output:"<<endl;
    cout<<arrayMax(data,n)<<endl;



}
