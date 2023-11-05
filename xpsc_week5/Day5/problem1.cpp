#include<bits/stdc++.h>
using namespace std;
int main() {
    int caseNumber = 1;
    int N, Q;

    while (cin >> N >> Q && N != 0 && Q != 0) {
        cout << "CASE# " << caseNumber++ << ":" << endl;

        vector<int> marbles(N);
        for (int i = 0; i < N; i++) {
            cin >> marbles[i];
        }
        sort(marbles.begin(), marbles.end());

        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;

            int position = -1;
            int left = 0, right = N - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (marbles[mid] == query) {
                    position = mid + 1;
                    break;
                } else if (marbles[mid] < query) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            if (position != -1) {
                cout << query << " found at " << position << endl;
            } else {
                cout << query << " not found" << endl;
            }
        }
    }

    return 0;
}