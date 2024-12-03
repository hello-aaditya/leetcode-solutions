/* 
STEP-1: initialize some variables like- sizeOfSpaces(length of spaces), sizeOfs(size of input string 's'), newString (that will store the answer) and index (an iterator for vector 'spaces')
STEP-2: iterate throug each character of the string 's'
    STEP-2.1: if current position of s == spaces[index]
        STEP-2.1.1: add a space into newString and increase the pointer 'index'
        parallely in STEP-2.1: we have to check "position of the index must be lesser than the length of space"
    STEP-2.2: we always have to add current character from s to newString.
 */

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        // STEP-1: initialize some variables
        int sizeOfSpaces = spaces.size(); //length of spaces
        int sizeOfs = s.size(); //size of input string 
        string newString = ""; //result string to be generated
        int index = 0; //iterator for vector 'spaces'

        // STEP-2
        for(int i=0; i<sizeOfs; i++)
        {
            //STEP-2.1
            if(index < sizeOfSpaces && i==spaces[index])
            {
                // STEP-2.1.1
                newString += " ";
                index++;
            }
            // STEP-2.2
            newString += s[i];
        }
        return newString;
    }
};