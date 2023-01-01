/*
pattern1->
     *
    **
   ***
  ****

*/
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp=(n-i);
        while(temp--) cout<<" ";
        int temp1=i;
        while(temp1--) cout<<"*";
        cout<<endl; 
    }
}