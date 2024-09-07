#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n=7;
    int a[100];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[100];
    int k=0;
    for(int j=n-1;j>=0;j--)
    {
        b[k++]=a[j];
    }
    for(int i=0;i<n;i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
