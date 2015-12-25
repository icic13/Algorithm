#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int lcs(char *x,char *y,int m,int n){


    if(m==0||n==0)
        return 0;
        if(x[m-1] == y[n-1])
            return 1 + lcs(x,y,m-1,n-1);
            else
            return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));


}

int main(){


    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
    int m = strlen(x);
    int n = strlen(y);
    cout<<"Longest of lcs is "<<endl;
    cout<<lcs(x,y,m,n)<<endl;

}
