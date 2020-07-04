#include <iostream>
using namespace std;

int main(void) {
    int N;
    double max = 0;
    double average = 0;

    cin >> N;
    double G[N];
    for(int i=0; i<N; i++) {
        cin >> G[i];
        if(G[i] > max) max = G[i];
    }
    for(int i=0; i<N; i++) {
        G[i] = (G[i]/max)*100;
    }
    for(int i=0; i<N; i++) {
        average += G[i];
    }
    average = average / N;
    cout.precision(6);
    cout << average << '\n';
    return 0;
}