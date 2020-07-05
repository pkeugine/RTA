/*
#include <iostream>
using namespace std;

int main(void) {
    int N,M;
    cin >> N;
    int A[N];
    int a, b;
    for(int i=0; i<N; i++) {
        cin >> a;
        A[i] = a;
    }
    cin >> M;
    int B[M];
    for(int i=0; i<M; i++) {
        cin >> b;
        B[i] = b;
    }

    for(int i=0; i<M; i++) {
        int check = 0;
        for(int j=0; j<N; j++) {
            if(B[i]==A[j]) check = 1;
        }
        cout << check << '\n';
    }

    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

int binarySearch(int low, int high, int target);

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for(int i=0; i<M; i++) {
        int num;
        cin >> num;
        cout << binarySearch(0, N-1, num) << '\n';
    }
    return 0;
}

int binarySearch(int low, int high, int target) {
    if(low>high) return 0;
    else {
        int mid = (low+high)/2;
        if(v[mid]==target) return 1;
        else if(v[mid]>target) return binarySearch(low, mid-1, target);
        else return binarySearch(mid+1, high, target);
    }
}
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for(int i=0; i<M; i++) {
        int num;
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << '\n';
    }
    return 0;
}