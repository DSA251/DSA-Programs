#include <bits/stdc++.h>
using namespace std;
int main() 
{
    cout << "Enter the size of array" << endl;
    int n;
    cin>>n;
    int mx=INT_MIN;
    int a[100];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    cout << mx << endl;
    return 0;
}
