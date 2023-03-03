#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    int K;
    cin >> n >> K;
    int a = n-1;
    vector<long long> v;
    if (K == 1) {
        cout << n-K;
    }else {
        int a = n-1;
        while (a != 0) {
            v.push_back((a-1)/K);
            a = (a-1)/K;
        }
        cout << v.size();

    }
}

