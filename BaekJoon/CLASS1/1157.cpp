#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    int arr[27] = {0};
    int max = 0;
    char max_char;

    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        arr[s[i]-65]++;
    }
    for(int i=0; i<26; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_char = i+65;
        }
        else if(arr[i] == max) {
            max_char = '?';
        }
        //cout << i << " " << arr[i] << " " << max << " " << max_char << " " << '\n';
    }
    //for(int i=0; i<26; i++) cout << arr[i] << '\n';
    cout << max_char << '\n';
    return 0;
}