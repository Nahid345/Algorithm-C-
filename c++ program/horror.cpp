#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> N;
        int max = -1,speed;
        for(int i = 0; i < N; i++){
            cin >> speed;
            if(speed > max)max = speed;
        }
        cout << "Case " << t << ": " << max << endl;
    }
    return 0;
}
