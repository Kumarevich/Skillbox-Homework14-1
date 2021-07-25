#include <iostream>

int main() {
    int cutlery[2][6] = {{4, 3, 3, 3, 3, 3},
                          {4, 3, 3, 3, 3, 3}};
    int plates[2][6] = {{3, 2, 2, 2, 2, 2},
                      {3, 2, 2, 2, 2, 2}};
    int chairs[2][6] = {{1, 1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1, 1}};

    chairs[0][4] += 1;
    cutlery[1][2] -= 1;
    cutlery[1][0] -= 1;
    cutlery[1][2] += 1;
    plates[1][0] -= 1;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << j + 1 + i*6 << ": " << cutlery[i][j] << " " << plates[i][j] << " " << chairs[i][j] << std::endl;
        }
    }

    return 0;
}
