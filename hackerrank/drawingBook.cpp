#include <bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/drawing-book/problem

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
  /*
   * Write your code here.
   */
  int nstart = p / 2;
  int nend = n / 2 - nstart;

  if (nstart > nend) {
    return nend;
  } else {
    return nstart;
  }
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int p;
  cin >> p;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int result = pageCount(n, p);

  fout << result << "\n";

  fout.close();

  return 0;
}
