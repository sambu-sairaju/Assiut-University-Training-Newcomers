#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[200];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int flag=1,c=0;
    while(flag)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                flag=0;
                cout<<c<<endl;
                return 0;
            }
            else
            {
                arr[i]=arr[i]/2;
            }
        }
        c++;
    }
    return 0;
}
