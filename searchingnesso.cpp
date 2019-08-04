#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    while(n--){


        cin>>x>>y;
        x-=2;
        y-=2;
        int k,m;
        k=x/3;
        m=y/3;
        if(x%3!=0&&y%3!=0){
           k++;
           m++;


    cout<<(k*m)<<endl;
        }
    }





}
