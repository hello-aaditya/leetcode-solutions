1class Solution {
2    public boolean isAnagram(String s, String t) {
3        int size1 = s.length();
4        int size2 = t.length();
5
6        if(size1 != size2) {
7            return false;
8        }
9
10        int freq[] = new int[27];
11
12        for(int i=0; i<size1; i++) {
13            freq[s.charAt(i) - 'a']++;
14        }
15
16        for(int i=0; i<size2; i++) {
17            freq[t.charAt(i) - 'a']--;
18        }
19
20        for(int i=0; i<27; i++) {
21            if(freq[i] != 0) {
22                return false;
23            }
24        }
25        return true;
26    }
27}