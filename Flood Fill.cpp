#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        if(image[sr][sc] == newColor) return image;
        int m = image.size();
        int n = image[0].size();
        floodFill(image, sc, sr, n, m, image[sr][sc], newColor);
        return image;
    }

private:
    void floodFill(vector<vector<int>>& image, int x, int y, int n, int m, int orgColor, int newColor)
    {
        if(x < 0 || x >= n || y < 0 || y >= m) return;
        if(image[y][x] != orgColor) return;

        image[y][x] = newColor;
        
        floodFill(image, x + 1, y, n, m, orgColor, newColor);
        floodFill(image, x - 1, y, n, m, orgColor, newColor);
        floodFill(image, x, y + 1, n, m, orgColor, newColor);
        floodFill(image, x, y - 1, n, m, orgColor, newColor);
    }
};