#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char chess[9][9];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s\n", &chess[i]);
		}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if((i+j) % 2 == 0 && chess[i][j] == 'F')
				count++;
		}
	}
	printf("%d", count);
	return 0;
}

/*ÇÏ¾áÄ­ [0][0] [2][0] [4][0] [6][0]
         [1][1] [3][1] [5][1] [7][1] 
	     [0][2] [2][2] [4][2] [6][2]
		 [1][3] [3][3] [5][3] [7][3]  
		 [0][4] [2][4] [4][4] [6][4] 
		 [1][5] [3][5] [5][5] [7][5]
		 [0][6] [2][6] [4][6] [6][6]
		 [1][7] [3][7] [5][7] [7][7]
		    */