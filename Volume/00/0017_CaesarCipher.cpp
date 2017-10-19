#include <iostream>
#include <algorithm>
using namespace std;

bool isSmallAlphabet(char& ch) {
  /* a ~ z(ascii) : 97 ~ 122 */
  if('a' <= ch && ch <= 'z') return true;
  else return false;
}

bool isHit(string& str) {
  if(str.find("the") != str.npos) return true;
  else if(str.find("this") != str.npos) return true;
  else if(str.find("that") != str.npos) return true;
  else return false;
}

char shiftIndex(char ch) {
  if(isSmallAlphabet(ch)) {
    ch += 1;
    /* ずらした結果小文字ではなかったら*/
    if(!isSmallAlphabet(ch)) {
      ch -= 26;
    }
  }
  return ch;
}

/* シーザー暗号解読(改良版) */
void CaesarCipher2(string str) {
  
  /* pの値だけアルファベットをずらしていく */
  for(int p = 0; p < 26; ++p) {

    transform(str.begin(), str.end(), str.begin(), shiftIndex);

    /* Find "the" or "this" or "that" */
    if(isHit(str)) {
      cout << str << endl;
    }
  }
}

int main() {
  string str;
  while(getline(cin, str)) {
    CaesarCipher2(str);
  }
  return 0;
}



/* シーザー暗号解読 */
void CaesarCipher(string _str) {
  
  /* parameterの値だけアルファベットをずらしていく */
  for(int parameter = 0; parameter < 26; ++parameter) {
    string str = _str;
    for(int i = 0; i < (int)str.length(); ++i) {
      
      /* 小文字アルファベットを判定 */
      if(isSmallAlphabet(str[i])) {
        str[i] += parameter;
        /* ずらした結果小文字ではなかったら*/
        if(!isSmallAlphabet(str[i])) {
          str[i] -= 26;
        }
      }

    }

    /* Find "the" or "this" or "that" */
    if(isHit(str)) {
      cout << str << endl;
    }
  }
}
