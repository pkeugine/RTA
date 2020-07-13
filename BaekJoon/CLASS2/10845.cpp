#include <iostream>
#include <string>
using namespace std;

class QueueNode {
public:
  QueueNode(int element) : _element(element), _next(nullptr) {}
  int getElement() const { return _element; }
  void SetNextNode(QueueNode* next) { _next = next; }
  QueueNode* getNextNode() const { return _next; }

private:
  int _element;
  QueueNode* _next;
};

class Queue {
public:
  Queue() : _length(0), _back(nullptr), _front(nullptr) {}
  void Push(int x);
  int Pop();
  int Front();
  int Back();
  int Empty() const { return _length==0; }
  int Size() const { return _length; }

private:
  int _length;
  QueueNode* _back;
  QueueNode* _front;
};

inline void Queue::Push(int x) {
  QueueNode* node = new QueueNode(x);
  if(_front==nullptr) {
    _front = node;
    _back = node;
  }
  else {
    _back->SetNextNode(node);
    _back = node;
  }
  _length++;
}

inline int Queue::Pop() {
  if(_front!=nullptr) {
    _length--;
    if(_front==_back) _back = nullptr;

    QueueNode* node = _front;
    _front = node->getNextNode();

    int element = node->getElement();
    delete node;

    return element;
  }
  else {
    return -1;
  }
}

inline int Queue::Front() {
  if(_front==nullptr) {
    return -1;
  }
  else {
    return _front->getElement();
  }
}

inline int Queue::Back() {
  if(_back==nullptr) {
    return -1;
  }
  else {
    return _back->getElement();
  }
}

int main(void) {
  int N, num;
  string order;
  cin >> N;

  Queue q;

  while(N--) {
    cin>>order;
    if(order=="push") {
      cin >> num;
      q.Push(num);
    }
    else if(order=="front") {
      cout << q.Front() << '\n';
    }
    else if(order=="back") {
      cout << q.Back() << '\n';
    }
    else if(order=="empty") {
      cout << q.Empty() << '\n';
    }
    else if(order=="size") {
      cout << q.Size() << '\n';
    }
    else if(order=="pop") {
      cout << q.Pop() << '\n';
    }
  }
  return 0;
}
