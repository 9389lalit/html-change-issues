#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long;
int main()
{
    set<string> st;
    int num;
    cin >> num;
    while (num--)
    {
        string str;
        cin >> str;
        st.insert(str);//O(logn)
    }
    auto it1 = st.find("abdabd");//O(logn)
    if (it1 != st.end())
    {
        st.erase(it1);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << (*it) << endl;
    }
}
