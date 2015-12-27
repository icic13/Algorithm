#include <iostream>

using namespace std;

int partition(int data[],int l,int r)
{
    int x = data[r];
    int i = (l-1);


    for(int j = l; j<r; j++)
    {
        if(data[j]<=x)
        {
            i++;
            swap(data[i],data[j]);
        }

    }
    swap(data[i+1],data[r]);

    return (i+1);

}

void quickSort(int data[],int l,int r)
{
    if(l<r)
    {
        int p = partition(data,l,r);
        quickSort(data,l,p-1);
        quickSort(data,p+1,r);


    }



}


void printElements(int data[],int n)
{

    for(int i = 0; i<n; i++)
        cout<<data[i]<<" ";
    cout<<endl;

}

int main()
{

    int data[] = {12,32,5,19,23,3,2,9,7};
    int n = sizeof(data)/sizeof(data[0]);
    cout<<"Before sorting: "<<endl;
    printElements(data,n);
    quickSort(data,0,n);
    cout<<"After sorting :"<<endl;
    printElements(data,n);






}

