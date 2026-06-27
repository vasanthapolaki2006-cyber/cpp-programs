#include <iostream>
using namespace std;
int main()
{
  int n,target,flag=0;
  cin>>n;
  int a[n];
  cout<<"enter array elements";
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<"enter the target value";
  cin>>target;
  for(int i=0;i<n;i++)
  if(a[i]==target)
  {
      cout<<"target is found at index "<<i;
      flag=1;
      break;
  }
   if(flag==0)
  {
      cout<<"target not found ";
  }
    return 0;
}