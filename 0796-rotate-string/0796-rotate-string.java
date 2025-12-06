class Solution {
    public boolean rotateString(String s, String goal) {
        String doubleStr = s + s;
        if(s.length() != goal.length()) {
            return false;
        }
        return doubleStr.contains(goal);
    }
}