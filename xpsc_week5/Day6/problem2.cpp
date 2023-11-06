#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> height(N);
    for(int i=0; i<N; i++)
        cin >> height[i];

    int Q;
    cin >> Q;
    while(Q--) {
        int h;
        cin >> h;
        auto taller = upper_bound(height.begin(), height.end(), h);
        auto shorter = lower_bound(height.begin(), height.end(), h);

        if(shorter == height.begin())
            cout << "X ";
        else
            cout << *(--shorter) << " ";

        if(taller == height.end())
            cout << "X\n";
        else
            cout << *taller << "\n";
    }

    return 0;
}
