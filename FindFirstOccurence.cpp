#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int low=0,high=n-1;
    int f=-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x)
        {
            f=mid;
            high=mid-1;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(f==-1) 
    {
        cout << "Element not found" << endl;
    }
    else cout << "Element found at index " << f << endl;
}
