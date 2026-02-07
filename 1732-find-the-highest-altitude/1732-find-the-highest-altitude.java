class Solution {
    public int largestAltitude(int[] gain) {
        int size = gain.length;
        int previousAltitude = 0;
        int highestAltitude = 0;

        for (int i=0; i<size; i++) {
            previousAltitude = previousAltitude + gain[i];
            highestAltitude = Math.max(highestAltitude, previousAltitude);
        }

        return highestAltitude;
    }
}