
#include <iostream>

using namespace std;
void insertionSort(int data[],int n){

    int i,j,key;

    for(i = 1; i<n; i++)
    {
        key = data[i];
        j = i - 1;

        while(j>=0&&data[j]>key){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;

    }

}
void printElements(int data[],int n){

   for(int i = 0; i<n; i++)
        cout<<data[i]<<" ";
        cout<<endl;

}

int main(){

    int data[] = {12,32,5,19,23,3,2,9,7};
    int n = sizeof(data)/sizeof(data[0]);
    cout<<"Before sorting: "<<endl;
    printElements(data,n);
    insertionSort(data,n);
    cout<<"After sorting :"<<endl;
    printElements(data,n);






}
