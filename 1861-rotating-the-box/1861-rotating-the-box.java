// TWO STEP PROCESS-
// 1. ROTATE 90 DEGREE CLOCKWISE
// 2. APPLY GRAVITY

class Solution {
    public char[][] rotateTheBox(char[][] boxGrid) {
        int rowSize = boxGrid.length;
        int colSize = boxGrid[0].length;
        
        // 1. ROTATE 90 DEGREE CLOCKWISE
        char[][] afterRotation = new char[colSize][rowSize];
        for (int row=0; row<rowSize; row++) {
            for (int col=0; col<colSize; col++) {
                afterRotation[col][rowSize-row-1] = boxGrid[row][col];
            }
        }

        // 2. APPLY GRAVITY
        for (int col=0; col<rowSize; col++) {
            for (int row=colSize-1; row>=0; row--) {
                if (afterRotation[row][col] == '.') { // IF IT IS A SPACE
                    int stoneRow = -1;

                    for (int k=row-1; k>=0; k--) {
                        if (afterRotation[k][col] == '*') {
                            break;
                        } else if(afterRotation[k][col] == '#') {
                            stoneRow = k;
                            break;
                        }
                    }
                    // FILL SPACE WITH STONE
                    if (stoneRow != -1) {
                        afterRotation[row][col] = '#';
                        afterRotation[stoneRow][col] = '.';
                    }
                }
            }
        }

        return afterRotation;
    }
}