class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int col = switch(ruleKey) {
            case "type" -> 0;
            case "color" -> 1;
            default -> 2;
        };
        int rowSize = items.size();
        int count = 0;

        for (int row=0; row<rowSize; row++) {
            if (items.get(row).get(col).equals(ruleValue)) {
                count++;
            }
        }
        return count;
    }
}