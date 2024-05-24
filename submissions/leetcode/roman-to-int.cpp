class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.size(); i++){
                    int x = -1;

            switch (s[i]) {

                case 'I':
                x = -1;
                    if(i+1 == s.size() || (s[i+1] != 'V' && s[i+1] != 'X')){
                        x = 1;
                    }
                    ans+=1 *x;

                    break;

                case 'X':
                    x = -1;

                    if(i+1 == s.size() || (s[i+1] != 'L' && s[i+1] != 'C')){
                    x = 1;
                    } 
                    ans+=10*x;

                    break;

                case 'C':
                    if(i+1 == s.size() || (s[i+1] != 'D' && s[i+1] != 'M')){
                        x = 1;
                   } 

                    ans+=100 * x;

                   break;

                case 'V':
                    ans+=5;
                    break;
                case 'L':
                    ans += 50;
                    break;
                case 'D':
                    ans+= 500;
                    break;
                case 'M':
                    ans +=1000;
                    break;

                default:
                break;
            } 
        }

        return ans;
    }
};
