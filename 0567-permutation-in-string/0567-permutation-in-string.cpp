class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int k = s1.size();

        //edge case-1: where size of s1 > s2
        if(k > n)   return false;

        //edge case-2: where s2 is of size '1' && the first and only letter of s2 == the first and only letter of s1
        if(s2.size() == 1)
        {
            if(s2[0] == s1[0])
            {
                return true;
            }
            // where s2 is of size '1' && the first and only letter of s2 != the first and only letter of s1
            return false;
        }

        //creating a Hashmap to store all characters and it's frequency of s1.
        unordered_map<char, int>mp;
        for(int i=0; i<k; i++)
        {
            mp[s1[i]]++;
        }
        int count = mp.size(); //storing the size of map

        //approach: sliding window 
        int i=0, j=0;
        while(j < n)
        {
            //Decreasing the frequency of the current character of s2[j] if present in map 
            if( mp.find(s2[j]) != mp.end())
            {
                mp[s2[j]]--;
                if(mp[s2[j]] == 0)
                {
                    count--; //in map if any character's frequency becomes '0' then reduce the count by 1
                }
            }

            //if the size of window is smaller than k (k which is referring the size of window cum s1's size)
            if(j-i+1 < k)
            {
                j++;
            }

            //if the size of window is equal than k 
            else if(j-i+1 == k)
            {
                //if count == 0 means all characters of map are find in s2 then simply just return 'true'
                if(count == 0)
                {
                    return true;
                }

                // before sliding the window increase the frequency of s2[i] into the map
                if(mp.find(s2[i]) != mp.end())
                {
                    mp[s2[i]]++;

                    // Reintroduce the character in the window
                    if(mp[s2[i]] == 1)
                    {
                        count++;
                    }
                }
                //slide the window
                i++; j++;
            }
        }
        return false;
        
    }
};