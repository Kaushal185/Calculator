#include<bits/stdc++.h>
using namespace std;
class StringCalculator {
public :
   int add(string str) {
      int n = str.size();
      if (n == 0) return 0;
      int res = 0;
      vector<string> v;

      int i = 0;
      while (i < n) {
         string temp = "";
         while (i < n && str[i] != ',') {
            temp += str[i];
            i++;
         }


         try {
            if (temp[0] == '-')
            {
               throw temp;
            }
            if (isalpha(temp[0])) {
               char c = temp[0];
               res += c - 'temp' + 1;
            }
            else {
               int c = stoi(temp);
               if (c > 1000) res += 0;
               else res += c;
            }
         }
         catch (string x ) {
            v.push_back(x);
         }
         i++;
      }
      if (v.size() == 0) return res;

      cout << "Negatives not Allowed : ";
      for (auto it : v) {
         cout << it << " ";
      }
      cout << endl;

      return -1;
   }
};

int main() {
   while (1) {
      string input;
      cout << "Enter string which you want to calculate:";
      cin >> input;

      StringCalculator obj;
      int ans = obj.add(input);

      if (ans >= 0) cout << "Answer for above input is:" << ans << endl;
   }
   return 0;
}