#include <stack>

class Solution {
public:
    string reverseWords(string s) {
	// 받은 단어를 거꾸로 토해낼 스택을 만든다
        stack<string> pocket;
	// 마지막에 출력할 정답 string
        string answer = "";
	// 단어 string
        string temp = "";
				
        for(auto x : s) {
            // 단어를 입력 받는다
    	    if(x != ' ') temp += x;
	    // 띄어쓰기가 나타나면 스택에 단어를 넣는다
            else if(x == ' ') {
                pocket.push(temp);
                temp = "";
            }
        }
	// 마지막으로 만들어진 단어도 스택에 넣어준다
        pocket.push(temp);
        while(!pocket.empty()) {
	    // 내가 출력할 문장의 가장 첫번째 케이스를 제외하고 단어들이 더해질 때마다 띄어쓰기를 해준다
            if(answer != "" && pocket.top() != "") answer += " ";
	    // 스택에서 단어를 꺼내 정답 string에 넣어준다
            answer += pocket.top();
	    // 스택에서 해당 단어를 없애버린다
            pocket.pop();
        }
  	// 정---답!
        return answer;
    }
};
