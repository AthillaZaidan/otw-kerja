class Solution {
public:
    int balancedStringSplit(string s) {
        int counter = 0;
        stack<char> stackCek;

        for (int i = 0; i < (int)s.size(); i++) {
            if (stackCek.empty()) {
                stackCek.push(s[i]);
            } else if (s[i] != stackCek.top()) {
                stackCek.pop();
            } else {
                stackCek.push(s[i]);
            }

            if (stackCek.empty()) {  
                counter++;
            }
        }

        return counter;
    }
};
