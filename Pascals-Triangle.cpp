#include <bits/stdc++.h>

vector<long long int> generateRow(int n){
        long long int res = 1;
        vector<long long int> rowAns;
        rowAns.push_back(1);

        for(int i = 1; i < n; i++){
            res = res * (n - i);
            res = res / i;
            rowAns.push_back(res);
        }
        return rowAns;
    }

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i = 1; i <= n; i++){
      ans.push_back(generateRow(i));
  }
  return ans;


}
