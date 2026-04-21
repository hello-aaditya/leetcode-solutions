class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int size = image.length;

        int[][] flipped = new int[size][size];
        for (int row=0; row<size; row++) {
            for (int col=0; col<size; col++) {
                flipped[row][size-col-1] = 1 - (image[row][col]);
            }
        }
        return flipped;
    }
}