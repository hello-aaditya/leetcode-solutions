class Solution {
    public boolean isSubsequence(String s, String t) {
        int sStart = 0;
        int tStart = 0;

        while ((sStart < s.length()) && (tStart < t.length())) {
            if (s.charAt(sStart) == t.charAt(tStart)) {
                sStart++;
            }
            tStart++;
        }

        if (sStart == s.length()) {
            return true;
        }
        return false;
    }
}