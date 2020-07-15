#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string answer;
  for(int i=0; i<dna.length(); i++) {
    switch(dna[i]) {
        case 'A':
          answer += 'T';
          break;
        case 'T':
          answer += 'A';
          break;
        case 'G':
          answer += 'C';
          break;
        case 'C':
          answer += 'G';
          break;
    }
  }
  return answer;
}
