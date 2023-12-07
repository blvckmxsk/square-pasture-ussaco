#include <bits/stdc++.h>

using namespace std;

int main(){

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int left = min(x1, x3);
    int right = max(x2, x4);
    int top = max(y2, y4);
    int bot = min(y1, y3);

    int ans = max(right - left, top - bot);

    cout << ans * ans << << "\n";


    return 0;
}
