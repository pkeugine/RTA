#include <iostream>
using namespace std;

int main(void) {
    int n;
    int num;
    int max = 0;
    for(int i=1; i<=9; i++) {
        cin >> num;
        if(num > max) {
            max = num;
            n = i;
        }
    }
    cout << max << '\n';
    cout << n << '\n';
    return 0;
}
/*
#include <iostream>
using namespace std;

int main(void) {
    int arr[9];
    int max = 0;
    int k;
    for(int i=0; i<9; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            k = i+1;
        }
    }
    cout << max << '\n';
    cout << k << '\n';
    return 0;
}
 */