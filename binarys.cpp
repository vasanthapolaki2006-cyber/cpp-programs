// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
  int n,key,mid;
  cin>>n;
  cout<<"enter the key value";
  cin>>key;
  int l=0,h=n-1;
  if(l<h)
  {
      mid=(l+h)/2;
  }
  cout<<"array contains";
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  if(a[mid]<key)
  {
      h=mid-1;
  }
  else
  {
      l=mid+1;
  }
  if(a[mid]==key)
   {
      cout<<"key value found at index  "<<mid;
  }
  else
  {
      cout<<"key vaue is not found";
  }
    return 0;
}