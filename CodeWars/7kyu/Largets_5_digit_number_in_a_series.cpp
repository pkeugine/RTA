#include <string>
#include <algorithm>
using namespace std;

int largest_five_digits(const std::string &digits)
{
  int max_num = 10000;
  for(int i=0; i<digits.length()-4; i++) {
    string tmp = digits.substr(i,5);
    max_num = max(stoi(tmp), max_num);
  }  
  return max_num;
}
