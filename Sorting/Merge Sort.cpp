
#include <iostream>

using namespace std;

void merge(int data[],int l,int m,int r){
    int n1,n2;
    n1 = m-l+1;
    n2 = r-m;
    int L[n1],R[n2];
    int i,j,k;

    for(i = 0; i<n1; i++)
    L[i] = data[l+i];
    for(j = 0 ; j<n2; j++)
    R[j] = data[m+1+j];

    i = 0;
    j = 0;
    k = l;

    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            data[k] = L[i];
            i++;

        }
        else{
            data[k] = R[j];
            j++;
        }
        k++;


    }
    while(i<n1){
        data[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        data[k] = R[j];
        j++;
        k++;

    }


}

void mergeSort(int data[],int l,int r){
    if(l<r){
        int m = (l+r)/2;

        mergeSort(data,l,m);
        mergeSort(data,m+1,r);
        merge(data,l,m,r);


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
    mergeSort(data,0,n-1);
    cout<<"After sorting :"<<endl;
    printElements(data,n);






}
