#include <iostream>
using namespace std;

int main(void) {
    int G;
    char grade;
    cin >> G;
    if(G>=90) grade='A';
    else if(G>=80) grade='B';
    else if(G>=70) grade='C';
    else if(G>=60) grade='D';
    else grade='F';

    cout << grade << '\n';

    return 0;
}