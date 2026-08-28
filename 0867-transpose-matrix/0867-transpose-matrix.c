/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned in *returnColumnSizes.
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {
    
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int** ans = (int**)malloc(cols * sizeof(int*));
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));

    for (int i = 0; i < cols; i++) {
        ans[i] = (int*)malloc(rows * sizeof(int));
        (*returnColumnSizes)[i] = rows;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    *returnSize = cols;

    return ans;
}