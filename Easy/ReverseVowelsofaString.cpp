class Solution {
public:
    string reverseVowels(string s) {
        char t;
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' ||tolower(s[i])=='u'){
                if(tolower(s[j])=='a' || tolower(s[j])=='e' || tolower(s[j])=='i' || tolower(s[j])=='o' ||tolower(s[j])=='u'){
                    t = s[i];
                    s[i] = s[j];
                    s[j] = t; 
                    i+=1;
                    j-=1;
                }
                else{
                    j-=1;
                }
            }
            else{
                i+=1;
            }
        }
        return s;
    }
};
