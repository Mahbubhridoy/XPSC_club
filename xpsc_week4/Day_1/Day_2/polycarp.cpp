#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

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
