#include <iostream>

using namespace std;

//function to find sum using recursion

int sum(int n){

    if(n==0) return 0;
    else
    return sum(n-1)+n;
}

int main(){
int number;
cout<<"Enter a number to find sum of 1 to the number :"<<endl;
cin>>number;

cout<<"The result is "<<sum(number)<<"."<<endl;






}
