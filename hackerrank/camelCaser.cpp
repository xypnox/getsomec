#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
  int count = 0;
  if (s.length() > 0) {
    count++;
  } else {
    return 0;
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] > 64 && s[i] < 91) {
      count++;
    }
  }
  return count;
}

int main() {
  cout << "Test\n";

  string s;
  getline(cin, s);

  int result = camelcase(s);

  cout << "The result is " << result << "\n";

  return 0;
}
