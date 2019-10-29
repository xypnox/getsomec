#include <bits/stdc++.h>

using namespace std;

/*
 * https://www.hackerrank.com/challenges/between-two-sets/problem
 *
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int hcf(int a, int b) {
  if (a > b) {
    if (a % b == 0) {
      return b;
    } else {
      return hcf(a % b, b);
    }
  } else if (a < b) {
    if (b % a == 0) {
      return a;
    } else {
      return hcf(b % a, b);
    }
  }
}

int hcf_array(vector<int> a) {
  int result = a[0];
  for (size_t i = 1; i < a.size(); i++) {
    result = hcf(result, a[i]);
  }
  return result;
}

int lcm_array(vector<int> a) {
  int result = a[0];
  for (size_t i = 1; i < a.size(); i++) {
    result = result * a[i] / hcf(result, a[i]);
  }
  return result;
}

int getTotalX(vector<int> a, vector<int> b) {
  long long int lcm1 = lcm_array(a), lcm2 = lcm_array(b), factors = 0;
  long long int hcf1 = hcf_array(a), hcf2 = hcf_array(b);
  cout << lcm1 << " " << hcf2 << endl;
  if (hcf2 % lcm1 != 0) {
    return 0;
  }

  long long int k = hcf2 / lcm1;
  for (int j = 1; j < 101; j++) {
    if (k % j == 0) {
      factors++;
    }
  }

  return factors;
}

int main() {
  vector<int> a = {2, 3, 6};
  vector<int> b = {42, 84};

  cout << getTotalX(a, b) << endl;
  return 0;
}