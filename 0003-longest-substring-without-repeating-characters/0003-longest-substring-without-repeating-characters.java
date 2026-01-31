class Solution {
    public int lengthOfLongestSubstring(String s) {
        int size = s.length();
        int start = 0;
        int longestSubstring = 0;

        ArrayList<Character> list = new ArrayList<>();

        for (int end=0; end<size; end++) {
            char currentChar = s.charAt(end);
            

            if (list.contains(currentChar)) {
                while (s.charAt(start) != currentChar) {
                    char firstChar = s.charAt(start);
                    list.remove(0);
                    start++;
                }
                if (list.get(0) == currentChar) {
                    list.remove(0);
                }
                start++;
            }

            list.add(currentChar);
            longestSubstring = Math.max(longestSubstring, list.size());
        }
        return longestSubstring;
    }
}