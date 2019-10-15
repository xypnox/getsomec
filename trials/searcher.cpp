#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

// A solution to a CP problem finding the largest occurence of character in
// array, with smaller ascii taking priority.

char correctType(string b) {
  long int alpha[26] = {};
  for (long int k = 0; k < b.length(); k++) {
    for (int l = 0; l < 26; l++) {
      if (b[k] == l + 'a') {
        alpha[l] += 1;
        break;
      }
    }
  }
  int result = 'a';
  long int n = alpha[0];
  for (int i = 1; i < 26; i++) {
    if (alpha[i] > n) {
      n = alpha[i];
      result = 'a' + i;
    }
  }
  return result;
}

int main() {
  int T = 2;
  cin >> T;
  string results;

  for (int i = 0; i < T; i++) {
    char str[10000];
    cin >> str;
    results.push_back(correctType(str));
  }

  for (int j = 0; j < T; j++) {
    cout << results[j] << endl;
  }

  return 0;
}
