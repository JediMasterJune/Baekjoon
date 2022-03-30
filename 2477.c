//
//

#include <stdio.h>
#include <stdbool.h>

enum direction { east, west, south, north };

int reverse(int dir);


int main(void)
{
    int k;
    int big, small = 1;
    int dir, len;
    int lengths[4][2] = {0};
    int records[6][2] = {0};
    bool dirChk[4] = {false};
    bool isSmallPart = true;
    bool smallDone = false;
    int smallPair[2];
    int firstStep;
    int l = 0;
    
    scanf("%d", &k);
    for (int i = 0; i < 6; ++i) {
        scanf("%d%d", &dir, &len);
        records[i][0] = dir - 1, records[i][1] = len;
        if (!lengths[dir - 1][0]) {
            lengths[dir - 1][0] = len;
        }
        else {
            lengths[dir - 1][1] = len;
//            small += len * records[i - 1][1];
//            small += lengths[dir - 1][0] * lengths[reverse(records[i - 1][0])][0];
//            break;
        }
    }
    big = (lengths[west][0] + lengths[west][1]) * (lengths[south][0] + lengths[south][1]);
    for (int i = 0; i < 6; ++i) {
        int sum = records[(i - 1) >= 0 ? (i - 1) : 5][1] + records[(i + 1) % 6][1];
//        printf("%d\n", sum);
        for (int j = 0; j < 6; ++j) {
            if (sum == records[j][1]) {
                small *= records[i][1];
                break;
            }
        }
    }

//    for (int i = 0; i < 6; ++i) {
//        if (!dirChk[records[i][0]]) {
//            dirChk[records[i][0]] = true;
//        }
//        else {
//            if (records[(i + 2) % 6][0] == records[i][0]) {
//                if ((records[i][0] == west && records[(i + 1) % 6][0] == north) ||
//                    (records[i][0] == south && records[(i + 1) % 6][0] == west) ||
//                    (records[i][0] == east && records[(i + 1) % 6][0] == south) ||
//                    (records[i][0] == north && records[(i + 1) % 6][0] == east))
//                    small *= records[i][1];
//                else
//                    small *= records[(i + 2) % 6][1];
//            }
//            else {
//                if ((records[i][0] == west && records[(i + 1) % 6][0] == south) ||
//                    (records[i][0] == south && records[(i + 1) % 6][0] == east) ||
//                    (records[i][0] == north && records[(i + 1) % 6][0] == west) ||
//                    (records[i][0] == east && records[(i + 1) % 6][0] == north))
//                    small *= records[i - 2][1];
//                else
//                    small *= records[i][1];
//            }
//        }
//    }
//    for (int i = 0; i < 4; ++i) {
//        isSmallPart = true;
//        for (int j = 0; j < 2; ++j) {
//            if (lengths[i][j] == 0) {
//                isSmallPart = false;
//                break;
//            }
//        }
//        if (isSmallPart) {
//            smallPair[l++] = i;
//        }
//    }
//    switch (smallPair[0]) {
//        case east:
//            switch (smallPair[1]) {
//                case south:
//                    small = lengths[east][0] * lengths[south][1];
//                    break;
//                case north:
//                    small = lengths[east][1] * lengths[north][0];
//                    break;
//            }
//            break;
//        case west:
//            switch (smallPair[1]) {
//                case south:
//                    small = lengths[west][1] * lengths[south][0];
//                    break;
//                case north:
//                    small = lengths[west][0] * lengths[north][1];
//                    break;
//            }
//            break;
//    }
//    printf("big: %d\nsmall: %d\n", big, small);
    printf("%d\n", (big - small) * k);
    
    return 0;
}

int reverse(int dir)
{
    switch (dir) {
        case 0:
            return 1;
        case 1:
            return 0;
        case 2:
            return 3;
        case 3:
            return 2;
    }
}
