#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4],d;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>d;
    int a[d+1];
    for(int i=0;i<d;i++) a[i]=0;
    for(int i=0;i<4;i++){
        for(int j=1;j*arr[i]<=d;j++){
            a[j*arr[i]-1]=1;
        }
    }
    int c=0;
    for(int i=0;i<d;i++){
        if(a[i]==1)c++;
    }
    cout<<c<<endl;
    return 0;
}
