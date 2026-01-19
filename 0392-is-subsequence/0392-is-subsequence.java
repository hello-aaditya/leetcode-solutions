class Solution {
    public boolean isSubsequence(String s, String t) {
        char[] sChar = s.toCharArray();
        char[] tChar = t.toCharArray();

        int sStart = 0;
        int tStart = 0;

        while ((sStart < sChar.length) && (tStart < tChar.length)) {
            if (sChar[sStart] == tChar[tStart]) {
                sStart++;
            }
            tStart++;
        }
        if (sStart == sChar.length) {
            return true;
        }
        return false;
    }
}