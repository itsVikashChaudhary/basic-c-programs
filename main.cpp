#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    
     for(int i = 0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxnum = INT_MIN;
    int minNum = INT_MAX;
    for(int i= 0 ;i<n ;i++)
    {
        maxnum=max(maxnum,arr[i]);
        
       minNum=min(minNum,arr[i]);
    }
    cout<<maxnum<<" "<<minNum<<endl;
}   