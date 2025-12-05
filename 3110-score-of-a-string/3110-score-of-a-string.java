class Solution {
    public int scoreOfString(String s) {
        int size = s.length();
        int totalScore = 0;

        for(int i=1; i<size; i++) {
            int previousScore = s.charAt(i-1) + 0;
            int currentScore = s.charAt(i) + 0;
            int difference = Math.abs(previousScore - currentScore);
            totalScore += difference;
        }
        return totalScore;
    }
}