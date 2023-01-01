#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter your odd number number :";
    cin>>n;
    int temp1=((n+1)/2);
    for(int i=1;i<=n;i++)
    {
        if(i==temp1) cout<<"*";
        else cout<<" ";
    }
    cout<<endl;
    for(int i=2;i<n-1;i++)
    {
       int temp2=(temp1-i+1);
       int temp3=(temp1+i-1);
       for(int j=1;j<=n;j++)
       {
        if(j==temp2 or j==temp3) cout<<"*";
        else cout<<" ";
       }
       cout<<endl;

    }
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;


}
//output:
// Enter your odd number number :5
//   *  
//  * * 
// *   *
// *****