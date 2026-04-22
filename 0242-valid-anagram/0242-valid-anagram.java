class Solution {
    public boolean isAnagram(String s, String t) {
        char[] ch = s.toCharArray();

        Map<Character, Integer> map = new HashMap<>();

        // STORE ALL CHARACTERS OF s INSIDE map
        for (char c : ch) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // REDUCE OR ERASE ALL THE CHARCATERS PRESENT IN t
        for (char c : t.toCharArray()) {
            if (map.containsKey(c)) {
                if (map.get(c) == 1) {
                    map.remove(c);
                } else {
                    map.put(c, map.get(c) - 1);
                }
            } else {
                return false;
            }
        }

        return (map.size()==0);
    }
}