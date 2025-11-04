class Solution {
public:
    string simplifyPath(string path) {
        vector<string> parts; // tokens
        string temp = "";

        // Step 1: Split manually by '/'
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (!temp.empty()) {
                    parts.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += path[i];
            }
        }
        if (!temp.empty())
            parts.push_back(temp);

        // Step 2: Use stack to process tokens
        stack<string> st;
        for (auto& p : parts) {
            if (p == "." || p == "")
                continue;
            else if (p == "..") {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(p);
            }
        }

        // Step 3: Build result
        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        if (result == "")
            result = "/";
        return result;
    }
};