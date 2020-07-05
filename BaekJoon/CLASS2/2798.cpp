#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, M;
    vector<int> best;
    int answer = 0;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        int card;
        cin >> card;
        best.push_back(card);
    }
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++) {
            for(int k=j+1;k<N;k++) {
                int tmp = best[i]+best[j]+best[k];
                if(tmp>answer && tmp<=M) answer = tmp;
            }
        }
    }
    cout << answer << '\n';
    return 0;
}