#include <iostream>
#include <vector>
#include <algorithm>

int max_square(const std::vector<std::vector<char>>& matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<std::vector<int>> n_matrix(rows, std::vector<int>(cols, 0));
    int max_side = 0;

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            if(matrix[i][j] == '1')
            {
                if(i == 0 || j == 0)
                    n_matrix[i][j] = 1;
                else
                    n_matrix[i][j] = 1 + std::min({n_matrix[i-1][j], n_matrix[i][j-1], n_matrix[i-1][j-1]});
                max_side = std::max(max_side, n_matrix[i][j]);
            }
        }
    }
    int result = max_side * max_side;
    return result;
}


int main() {
    std::vector<std::vector<char>> matrix = {
        {'0','1','1','0','1'},
        {'1','1','0','1','0'},
        {'0','1','1','1','0'},
        {'1','1','1','1','0'},
        {'1','1','1','1','1'},
        {'0','0','0','0','0'}
    };
    std::cout << max_square(matrix) << std::endl; // Output: 9
    return 0;
}