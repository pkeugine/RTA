#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const string& s1, const string& s2);

int main(void) {
    vector<string> vec;
    string str;
    int T;
    cin >> T;
    while(T--) {
        cin >> str;
        vec.push_back(str);
    }

    vector<string>::iterator iter;
    vector<string>::iterator end_iter;

    sort(vec.begin(), vec.end(), comp);
    end_iter = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), end_iter));

    for(iter=vec.begin(); iter!=end_iter; iter++) {
        cout << *iter << '\n';
    }

    return 0;
}

bool comp(const string& s1, const string& s2) {
    if(s1.size()==s2.size()) return s1<s2;
    return s1.size() < s2.size();
}