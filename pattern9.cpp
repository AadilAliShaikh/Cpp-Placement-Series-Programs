#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int j = 1;
        int k = i;
        while (j<=i)
        {
            cout<<" "<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}