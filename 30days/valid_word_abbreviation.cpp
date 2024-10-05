
class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
  int i = 0, j = 0;string a = word, b = abbr;
        const int n = a.size(), m = b.size();

        while (i < n) {
            if (j < m and isdigit(b[j])) {
                if (b[j] == '0') {
                    return false;
                }
                int len = 0;
                while (j < m and isdigit(b[j])) {
                    len = len * 10 + (b[j] - '0');
                    j++;
                }
                i += len;
            }
            if (i == n and j == m) {
                break;
            }
            else if (i < n and j < m and a[i] == b[j]) {
                i++; j++;
            }
            else {
                return false;
            }
        }

        return i == n and j ==m ;
    }
};
    
