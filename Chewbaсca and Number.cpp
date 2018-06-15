#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,ans,p;
    string s;

    cin>>s;

    for(i=1; s[i]!='\0'; i++)
    {
        if('9'-s[i]<s[i])
        {

            ans='9'-s[i];
            ///cout<<ans<<endl;
            if(ans==4)
                s[i]='4';
            else if(ans==3)
                s[i]='3';
            else if(ans==1)
                s[i]='1';
            else if(ans==2)
                s[i]='2';
            else if(ans==0)
                s[i]='0';

        }
        else
        {

        }
    }
    if(s[0]=='9')
        s[0]='9';
    else
    {
          ans='9'-s[0];
            ///cout<<ans<<endl;
            if(ans==4)
                s[0]='4';
            else if(ans==3)
                s[0]='3';
            else if(ans==1)
                s[0]='1';
            else if(ans==2)
                s[0]='2';
            else if(ans==0)
                s[0]='0';

    }



    cout<<s;
}
