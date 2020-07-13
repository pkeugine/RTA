#include <iostream>
#include <string>

using namespace std;


int deq[10001];

int front_idx; // deq의 front_idx번째 원소 다음것이 맨 앞
int back_idx; // deq의 back_idx번째 원소가 맨 뒤
int tot_size;

bool empty() {
  return tot_size == 0;
}

void push_front(int x) {
  deq[front_idx] = x;
  front_idx--;
  tot_size++;
  if (front_idx < 0) front_idx = 10000; // 하한을 넘어설 땐 상한으로
}

void push_back(int x) {
  back_idx++;
  tot_size++;
  if (back_idx > 10000) back_idx = 0; // 상한을 넘어설 땐 하한으로
  deq[back_idx] = x;
}

int pop_front() {
  if (empty()) {
    return -1;
  }
  else {
    front_idx++;
    tot_size--;
    if (front_idx > 10000) front_idx = 0;
    return deq[front_idx];
  }
}

int pop_back() {
  if (empty()) {
    return -1;
  }
  else {
    int temp = deq[back_idx];
    back_idx--;
    tot_size--;
    if (back_idx < 0) back_idx = 10000;
    return temp;
  }
}

int size() {
  return tot_size;
}

int front() {
  if (empty()) {
    return -1;
  }
  else {
    if (front_idx + 1 > 10000) {
      return deq[0];
    }
    else {
      return deq[front_idx + 1];
    }

  }
}

int back() {
  if (empty()) {
    return -1;
  }
  else {
    return deq[back_idx];
  }
}

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string str;
  int n; cin >> n;
  int x;
  cin.ignore();
  while (n--) {
    cin >> str;
    cin.ignore();
    if (str == "push_front") {
      cin >> x;
      push_front(x);
    }

    else if (str == "push_back") {
      cin >> x;
      push_back(x);
    }

    else if (str == "pop_front") {
      cout << pop_front() << "\n";
    }

    else if (str == "pop_back") {
      cout << pop_back() << "\n";
    }

    else if (str == "size") {
      cout << size() << "\n";
    }

    else if (str == "empty") {
      cout << empty() << "\n";
    }

    else if (str == "front") {
      cout << front() << "\n";
    }

    else if (str == "back") {
      cout << back() << "\n";
    }
  }

}