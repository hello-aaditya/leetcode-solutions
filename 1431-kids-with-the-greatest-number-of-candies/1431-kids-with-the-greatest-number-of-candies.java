class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int size = candies.length;
        List<Boolean> haveMax = new ArrayList<>();

        int maxCandies = 0;
        for (int i : candies) {
            maxCandies = Math.max(maxCandies, i);
        }
        for (int i=0; i<size; i++) {
            int totalCandies = candies[i] + extraCandies;

            if (totalCandies >= maxCandies) {
                haveMax.add(true);
            } else {
                haveMax.add(false);
            }
        }
        return haveMax;
    }
}