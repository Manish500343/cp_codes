#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int i=0,sum=0;
    while(n[i]!='\0')
    {
        if(isdigit(n[i])){
            int n1=n[i]-48;
            sum+=n1*pow(16,n.length()-i-1);
            i++;
        }
        else{
            int n1=n[i]-55;
            sum+=n1*pow(16,n.length()-i-1);
            i++;
        }
    }
    cout<<sum;
}
