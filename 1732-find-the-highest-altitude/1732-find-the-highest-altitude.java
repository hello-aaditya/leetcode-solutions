class Solution {
    public int largestAltitude(int[] gain) {
        int size = gain.length;

        int currentAlt = 0;
        int maxAltitude = 0;

        // PREFIX SUM
        for (int i=0; i<size; i++) {
            currentAlt = gain[i] + currentAlt;
            maxAltitude = Math.max(currentAlt, maxAltitude);
        }

        return maxAltitude;
    }
}