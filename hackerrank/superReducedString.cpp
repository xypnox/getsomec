// #include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
  string final;
  int pf = 0;
  final.push_back(s[0]);

  for (int i = 0; i < s.length() - 1; i++) {
    // cout << " - " << final << " pf " << pf << "\n";
    if (final[pf] == s[i + 1]) {
      final.pop_back();
      pf--;
    } else {
      final.push_back(s[i + 1]);
      pf++;
    }
  }

  // cout << "Hmm " << final.length() << "\n";
  if (final.length() == 0) {
    return string("Empty String");
  }

  return final;
}

int main() {
  cout << "Test\n";

  string s;
  getline(cin, s);

  cout << "\n The length of " << s << " is " << s.length() << "\n";

  string result = superReducedString(s);

  cout << "The result is " << result << " " << result.length() << "\n";

  return 0;
}
