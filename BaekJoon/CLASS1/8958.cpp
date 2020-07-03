#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t;
    string s;

    cin >> t;
    for(int j=0; j<t; j++) {
        cin >> s;
        int sum, cnt;
        sum = cnt = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'O') cnt ++;
            else cnt = 0;
            sum += cnt;
        }
        cout << sum << '\n';
    }
    return 0;
}
/* MY WAY
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void) {
    int t;
    int count = 0;
    int total = 0;
    cin >> t;
    for(int i=0; i<t; i++) {
        char s[81];
        cin >> s;
        //scanf("%s", s);
        for(int j=0; j<strlen(s); j++) {
            if(s[j] == 'O') {
                count++;
                total += count;
            }
            else if(s[j] == 'X') {
                count = 0;
            }
        }
        cout << total << '\n';
        //printf("%d\n", total);
        count = 0;
        total = 0;
    }
    return 0;
}
 */