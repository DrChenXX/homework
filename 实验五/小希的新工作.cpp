//2020/11/30 实验五 小希的新工作
#include<iostream>
using namespace std;
int main()
{
    int n,L,a;
    cin >> n >> L >> a;
    int now,last;
    int t,l;
    cin >> t >> l;
    now = t;
    int ans = now / a;
    for (int i = 1; i < n; i++)
    {
    	now += l;
        last = now;
        cin >> t >> l;
        now = t;
        ans += (now - last) / a;
    }
    now += l;
    ans += (L - now) / a;
    cout << ans;
    return 0;
}
