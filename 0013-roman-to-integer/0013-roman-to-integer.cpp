class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map <char, int> roman;
        
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int x=0;
        int i=0;
        
        if(s.length() >= 1 && s.length() <= 15 ){
        while(i < s.length()){
            if(roman[s[i]] < roman[s[i + 1]]){
                x = x - roman[s[i]];
            }
            else{
                x = x + roman[s[i]];
            }
        i++;
        }  
      }
    return x;
    }
};