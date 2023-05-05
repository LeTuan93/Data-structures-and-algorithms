#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int ok = 0;
        string s;
        getline(cin, s);
        stack<char> st;
      //  vector<char >v ;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                st.push(s[i]);
               //v.push_back(s[i]);
            }
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() != '('){
                    st.pop();
                    //v.pop_back();
                }
                st.pop();
                //v.pop_back();
            }
        //    for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
          //  cout<<endl;
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
