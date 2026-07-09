class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {

            int curr = asteroids[i];
            bool destroyed = false;// we have used destroyed to check is the curr is destroyed or not 
            // this while condition is used to check the colliging is happening 
            while (!st.empty() && st.top() > 0 && curr < 0) {

                if (st.top() < -curr) {
                    st.pop();
                }
                else if (st.top() == -curr) {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;// aab top 10 or curr -5 hai to ye else chalega or -5 stack me push nhi hoga to jo stack me push hai usko return kar denge 
                    break;
                }
            }

            if (!destroyed) {//jav ye true ho jayega to stack me value push kar dena hai
            st.push(curr);//empty hai stack to 5 push hoga, phir curr 10 jo hai wo smaller than 0 nhi hai to true hus to push hoga
            }
        }
        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};