#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,z=0,o=0;
        string str;
        cin >>n>>str;
        for(int i=0 ; i<n ; i++)
        {
            if(str[i]=='0')
                z++;
            else 
                o++;
        }
        if(o==z) 
        {
            cout<<o+z<<endl;
        }
        else 
        {
            cout<<2*(min(o,z))+1<<endl;
        }
    }
    return 0;
}
