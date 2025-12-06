class Solution {
    public int vowelStrings(String[] words, int left, int right) {
        int count = 0;
        

        for(int i=left; i<=right; i++) {
            int start = 0;
            int end = words[i].length()-1;
            char firstChar = words[i].charAt(start);
            char lastChar = words[i].charAt(end);

            if( (isVowel(firstChar) == true ) && (isVowel(lastChar) == true) ) {
                count++;
            }
        }
        return count;
    }
    public static boolean isVowel(char ch) {
        switch(ch) {
            case 'a', 'e', 'i', 'o', 'u': return true;
            default: return false;
        }
    }
}