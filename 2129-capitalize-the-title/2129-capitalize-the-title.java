class Solution {
    public String capitalizeTitle(String title) {
        String arr[] = title.split(" ");

        for(int i=0; i<arr.length; i++) {
            int currentWordLength = arr[i].length();
            String currentWord = arr[i];

            if(currentWordLength > 2) {
                char first = doCapital(currentWord.charAt(0));
                String second = doSmall(currentWord);

                arr[i] = first + second.substring(1);
            } else {
                arr[i] = currentWord.toLowerCase();
            }
        }

        String afterProcess = String.join(" ", arr);
        return afterProcess;
    }

    public static char doCapital(char ch) {
        if( (ch + 0 >= 65) && (ch + 0 < 97)) {
            return ch;
        }

        ch = (char)((ch + 0) - 32);
        return ch;
    }

    public static String doSmall(String str) {
        return str.toLowerCase();
    }
}