class Solution {
    public boolean isAnagram(String s, String t) {
        int size1 = s.length();
        int size2 = t.length();

        if(size1 != size2) {
            return false;
        }

        int freq[] = new int[27];

        for(int i=0; i<size1; i++) {
            freq[s.charAt(i) - 'a']++;
        }

        for(int i=0; i<size2; i++) {
            freq[t.charAt(i) - 'a']--;
        }

        for(int i=0; i<27; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }
        return true;
    }
}