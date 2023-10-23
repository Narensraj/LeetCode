class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = ""; //Init result
        int i = 0;//Init i 
        while(i < word1.length() || i < word2.length()){ //Check to see if word1 or word2 is lesser than i
            if(i < word1.length()){ //If word1 length is lesser 
                result = result + word1[i]; //Add the string to result (Eg. result = A)
            }
            if(i < word2.length()){ //If word2 length is lesser
                result = result + word2[i]; //Add the string to result (Eg. result = AP)
            }
            i++; //Increment the i
        }
        return result; //After looping move the return the result
    }
};