#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[100];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    cout << "Enter the size of second array" << endl;
    int m;
    cin>>m;
    int b[100];
    
    for(int i = 0 ; i<m;i++)
    {
        cin>>b[i];
    }
    int ans[100];
    int k=0;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            ans[k++] = a[i++];
        }
        else
        {
            ans[k++]=b[j++];
        }
    }
    while(i<n)
    {
        ans[k++]=a[i++];
    }
    while(j<m)
    {
        ans[k++]=b[j++];
    }
    for(int i=0;i<m+n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
