class Solution {
public:
    string addBinary(string a, string b) {
        int sizeOfA = a.length();
        int sizeOfB = b.length();

        int diff = abs(sizeOfA-sizeOfB);
        while(diff--)
        {
            if(sizeOfA > sizeOfB)
            {
                b.insert(0,"0") ;
            }
            else
            {
                a.insert(0, "0");
            }
        }

        sizeOfA = a.length();
        sizeOfB = b.length();
        string answer = "";
        int carry = 0;
        for(int i=sizeOfA-1; i>=0; i--)
        {
            int curr_sum = (a[i] - '0') + (b[i] - '0') + carry;
            answer.insert(0, to_string(curr_sum%2) );
            carry = curr_sum/2;
        }

        if(carry)
        {
            answer.insert(0, "1");
        }
        return answer;
    }
};