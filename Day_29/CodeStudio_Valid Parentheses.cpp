bool isValidParenthesis(string s)
{
    stack<char> st;

    for (char c : s) {
        if (c == '{' || c == '[' || c == '(') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false; // Unmatched closing parenthesis
            }

            char top = st.top();
            st.pop();

            if ((c == '}' && top != '{') || (c == ']' && top != '[') || (c == ')' && top != '(')) {
                return false; // Mismatched closing parenthesis
            }
        }
    }

    return st.empty();
}
