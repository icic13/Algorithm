
#include <iostream>

using namespace std;
void removeOddInt(int data[],int *n){
    static int i = 0,j = 0;
    if(i==*n){
    *n = j;
    return ;
    }
    if(data[i]%2==0) data[j++] = data[i];
    i++;
    removeOddInt(data,n);

}

int main(){
int n;
cin>>n;
int data[n];
for(int i = 0; i<n; i++)
    cin>>data[i];

removeOddInt(data,&n);
cout<<"Output: "<<endl;
for(int i = 0  ; i<n ;i++)
    cout<<data[i]<<" ";
    cout<<endl;

}
