#include <bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/day-of-the-programmer/problem

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
  int day = 1, month = 1;
  if (year < 1918) {
    if (year % 4 == 0) {
      return "12.09." + to_string(year);
    } else {
      return "13.09." + to_string(year);
    }
  } else if (year > 1918) {
    if (year % 100 != 0) {
      if (year % 4 == 0) {
        return "12.09." + to_string(year);
      } else {
        return "13.09." + to_string(year);
      }
    } else {
      if (year % 400 == 0) {
        return "12.09." + to_string(year);
      } else {
        return "13.09." + to_string(year);
      }
    }
  } else {
    return "26.09." + to_string(year);
  }
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string year_temp;
  getline(cin, year_temp);

  int year = stoi(ltrim(rtrim(year_temp)));

  string result = dayOfProgrammer(year);

  fout << result << "\n";

  fout.close();

  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
