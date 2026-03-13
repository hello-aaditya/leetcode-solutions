class Solution {
    public String reverseVowels(String s) {
        int size = s.length();

        // EDGECASE: WHEN SIZE OF A STRING IS 1
        if (size == 1) {
            return s;
        }

        // NON-EDGECASE
        char[] ch = s.toCharArray();
        int start = 0;
        int end = size - 1;

        while (start < end) {
            if (!isVowel(ch[start])) {
                start++;
            } else if (!isVowel(ch[end])) {
                end--;
            } else {
                char temp = ch[end];
                ch[end] = ch[start];
                ch[start] = temp;

                start++;
                end--;
            }
        }
        return String.valueOf(ch);
    }
    public static boolean isVowel(char ch) {
        switch(ch) {
            case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U': return true;
            default: return false;
        }
    }
}