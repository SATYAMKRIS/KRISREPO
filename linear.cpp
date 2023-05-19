#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int i,arr[100],val,n,pos;
    cout<<"enter the no of elements in array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value for search";
    cin>>val;
    for(i=0;i<n;i++)
    {
        if(val==arr[i])
        {
            cout<<"value found"<<i;
        }
        else
        {
            cout<<"value not found";
            
        }
    }
    return 0;
 }