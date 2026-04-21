class Solution {
    public boolean checkIfPangram(String sentence) {
        int size = sentence.length();
        
        char[] charArr = sentence.toCharArray();
        int[] arr = new int[26];

        for (int i=0; i<size; i++) {
            char current = charArr[i];

            int index = current - 'a';
            arr[index]++;
        }

        for (int i=0; i<26; i++) {
            if (arr[i] == 0) {
                return false;
            }
        }
        return true;
    }
}