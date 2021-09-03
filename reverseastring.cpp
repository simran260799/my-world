#include<bits/stdc++.h>
using namespace std;

void test()
{
    string s;
    cin>>s;
    stack<char> st;
    int i,n=s.size();
    for(i=0;i<n;i++)
    {
        st.push(s[i]);
    }
    while(st.empty()==false)
    {
        cout<<st.top();
        st.pop();
    }
     
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    
    while(t--)
    {
        test();
    }
    return 0;
}

