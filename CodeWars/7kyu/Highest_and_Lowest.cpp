#include <string>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>

std::string highAndLow(const std::string& numbers){
  std::string answer;
  int high=INT_MIN;
  int low=INT_MAX;
  std::vector<int> num;
  std::stringstream stream(numbers);
  while(1) {
    int n;
    stream >> n;
    num.push_back(n);
    if(!stream) break;
  }
  for(int i=0; i<num.size(); i++) {
    high = num.at(i) * (high<num.at(i)) + high * (high>=num.at(i));
    low = num.at(i) * (low>num.at(i)) + low * (low<=num.at(i));
  }
  
  answer = std::to_string(high) + " " + std::to_string(low);
  return answer;
}
