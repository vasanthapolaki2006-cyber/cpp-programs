#include <iostream>
using namespace std;
int main()
{
    int n,key,flag = 0;
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter key value: ";
    cin>>key;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==key)
        {
            cout<<"Key value found at index "<<mid;
            flag=1;
            break;
        }
        else if(a[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(flag==0)
    {
        cout<<"Key value not found";
    }
    return 0;
}
