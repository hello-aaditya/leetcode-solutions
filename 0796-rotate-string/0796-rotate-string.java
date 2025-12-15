class Solution {
    public boolean rotateString(String s, String goal) {

        // check the length
        if(s.length() != goal.length()) {
            return false;
        }

        String doubleString = s + s;
        return doubleString.contains(goal);
    }
}