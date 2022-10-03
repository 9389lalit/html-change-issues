#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    set<string> st;
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        st.insert(str);//O(logn)
    }
    auto it1 = st.find("abd");//O(logn)
    if (it1 != st.end())
    {
        st.erase(it1);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << (*it) << endl;
    }
}
