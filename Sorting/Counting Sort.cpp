#include <iostream>

using namespace std;


int findMaxForCountingSort(int array[],int size)
{
    int max = 0, i = 0;

    for(i = 0 ; i<size; i++)
    {
        if(array[i]>max)
        {

            max = array[i];
        }
        if(array[i]<0)
            return 0;

    }
    return max;


}
void countingSort(int array[],int sorted[],int size,int max)
{
    int maxArray[max+1];
    int i;
    for(i  = 0; i<max+1; i++)
        maxArray[i] = 0;

    for(i = 0; i<size; i++)
        maxArray[array[i]]++;
    for(i = 1; i<max+1; i++)
        maxArray[i] = maxArray[i] + maxArray[i-1];

    for(i = size-1; i>=0; i--)
    {
        sorted[maxArray[array[i]]-1] = array[i];
        maxArray[array[i]] = maxArray[array[i]] - 1;

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
    int max = findMaxForCountingSort(data,n);
    int result[100];
    countingSort(data,result,n,max);
    cout<<"After sorting :"<<endl;
    printElements(result,n);






}

