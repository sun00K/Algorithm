#include <iostream>
using namespace std;

#define MAX 100001
int sum[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    int temp;
    for(int n = 1; n <= N; n++) {
        cin >> temp;
        sum[n] = temp + sum[n-1];
    }
    
    int i, j;
    for(int m = 0; m < M; m++) {
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << '\n';
    }
    
    return 0;
}