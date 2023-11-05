#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int first,second,third;
        double num_of_block;
        cin >> num_of_block;

        second = ceil(num_of_block/3);
        first = second + 1;
        third = num_of_block - (first + second);
        if(third == 0)
        {
            second--;
            third++;
        }
        cout << second << " " << first << " " << third << "\n";


    }
   return 0;
}
