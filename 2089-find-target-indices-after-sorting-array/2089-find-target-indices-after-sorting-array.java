class Solution {
    public List<Integer> targetIndices(int[] arr, int target) {
        int size = arr.length;
        // Bubble Sort Logic
        for(int i=0; i<=size-2; i++) {
            for(int j=0; j<=size-2-i; j++) {
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        ArrayList<Integer> list = new ArrayList<>();
        // Linear Search Logic
        for(int i=0; i<size; i++) {
            if(arr[i] == target) {
                list.add(i);
            }
        }

        return list;
    }
    

}