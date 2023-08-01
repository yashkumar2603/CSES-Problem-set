#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n;
    long long int sum = 0;
    long long int x;
    while (n != 1)
    {
        n--;
        cin >> x;
        sum += x;
    }
    long long int ans;
    ans = (t * (t + 1) / 2) - sum;
    cout << ans << endl;
    return 0;
}