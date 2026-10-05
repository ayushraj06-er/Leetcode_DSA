class Solution {
public:

    void generate(vector<string>& result, int max, int open, int close, string unProcessed) {

        if (unProcessed.length() == 2 * max) {
            result.push_back(unProcessed);
            return;
        }

        if (open < max) {
            generate(result, max, open + 1, close, unProcessed + "(");
        }

        if (close < open) {
            generate(result, max, open, close + 1, unProcessed + ")");
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> result;

        generate(result, n, 0, 0, "");

        return result;
    }
};