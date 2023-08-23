#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int check[11] = {0,};
    int left;
    for(int n = 0; n < N; n++) {
        cin >> left;
        for(int i = 0; i < N; i++) {
            //앞에 사람 없고, 자리가 비었으면
            if(left == 0 && check[i] == 0) {
                check[i] = n + 1;
                break;
            }
            //앞에 사람 있다면, 빈자리 있을 때마다 left 감소하여 자리 남김
            else if(check[i] == 0) left--;
        }
    }
    
    for(int n = 0; n < N; n++) cout << check[n] << ' ';

    return 0;
}