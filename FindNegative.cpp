#include <iostream>
using namespace std;
int main() 
{
    cout << "Enter the size of array" << endl;
    int n;
    cin>>n;
    int count=0;
    int a[100];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0) count++;
    }
    cout << count << endl;
    return 0;
}
