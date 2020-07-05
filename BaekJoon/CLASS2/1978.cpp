/*
#include <iostream>
#include <set>
using namespace std;

set<int> sosu;
int last = 0;

bool is_sosu(int x);

int main(void) {
    int count = 0;
    int N, num;
    cin >> N;
    while(N--) {
        cin >> num;
        if(num==1) continue;
        if(is_sosu(num)) count++;
    }
    cout << count << '\n';
    return 0;
}

bool is_sosu(int x) {
    if(x>last) {
        for(int i=2; i<x; i++) {
            int check = 0;
            for(int j=2; j<i; j++) {
                if(i%j!=0) check = 1;
            }
            if(check) sosu.insert(i);
        }
        last = x;
    }
    for(int i=0; i<sosu.size(); i++) {
        for(set<int>::iterator iter=sosu.begin(); iter!=sosu.end(); iter++) {
            if(x%(*iter)==0) {
                return false;
            }
        }
    }
    return true;
}
*/

/*
#include <iostream>
#include <set>
using namespace std;

bool is_sosu(int x);

set<int> sosu;
int check = 2;

int main(void) {
    int T;
    int count = 0;
    sosu.insert(2);
    cin >> T;
    while(T--){
        int num;
        cin >> num;
        if(!is_sosu(num)) count++;
    }
    cout << count << '\n';
    return 0;
}

bool is_sosu(int x) {
    if(x-1>check) {
        is_sosu(x-1);
    }
    for(set<int>::iterator iter = sosu.begin(); iter!=sosu.end(); iter++) {
        if(x%(*iter)==0) return false;
    }
    sosu.insert(x);
    check = x;
    return true;
}
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_prime(int n);

int main(void) {
    int N;
    cin >> N;
    int count = 0;
    vector<int> vec;

    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for(int i=0; i<N; i++) {
        if(is_prime(vec[i])) count++;
    }

    cout << count << '\n';
    return 0;
}

bool is_prime(int x) {
    if(x<2) return false;
    for(int i=2; i*i<=x; i++) {
        if(x%i==0) return false;
    }
    return true;
}