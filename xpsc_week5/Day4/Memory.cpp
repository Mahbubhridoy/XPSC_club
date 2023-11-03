#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
typedef pair<int, int> pi;
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)

    {

        string s;
        cin >> s;
        int day=0;
        unordered_set<char>st;

        if(s.size() < 3)
            day++;
        else
        {
            for(int i=0; i<s.size(); i++)
            {

                st.insert(s[i]);

                if(st.size() >= 3)
                {
                    while(1)
                    {
                        auto pos = st.find(s[i+1]);
                        if(pos != st.end())
                            i++;

                        else
                        {
                            day++;
                            /*for(auto it : st)
                                cout << it << " ";
                            cout << "\n";*/

                            st.clear();
                            break;
                        }
                    }



                }




            }

            if(st.size())
                day++;

        }


        cout << day << "\n";


    }



    return 0;
}
