#include <iostream>
using namespace std;
int main()
{
    int n; cout<<"Enter the number: ";
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        int temp1=i;
        while(temp1--) cout<<"*";
      
        int temp=(n-i);
        while(temp--) cout<<" ";
        cout<<endl;
    }
}

// OUTPUT:
// Enter the number: 5
// *    
// **   
// ***  
// **** 
// *****