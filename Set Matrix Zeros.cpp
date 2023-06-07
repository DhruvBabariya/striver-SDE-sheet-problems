#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.

	//checking for the zero in the matrix and set the column and raw value as zero if the element is zero
	bool isFirstZero = false;
	bool isFirstColZero=false;
	bool isFirstRowZero=false;

	if(matrix[0][0] == 0){
		isFirstZero= true;
	}

	for(int i = 1; i < matrix.size(); i++){
		if(matrix[i][0] == 0){
			isFirstColZero = true;
		}
	}

	for(int i = 1; i < matrix[0].size(); i++){
		if(matrix[0][i] == 0){
			isFirstRowZero = true;
		}
	}

	for(int row = 1; row < matrix.size(); row++){
		for(int col = 1;col < matrix[0].size(); col++){
			if(matrix[row][col] == 0){
				matrix[row][0] = 0;
				matrix[0][col] =0;
			}
		}
	}

	for(int i = 1; i < matrix.size(); i++){
		if(matrix[i][0] == 0){
			for(int col = 1;col < matrix[0].size(); col++){
                matrix[i][col] = 0;     
            }
        }
	}

	for(int i = 1; i < matrix[0].size(); i++){
		if(matrix[0][i] == 0){
			for(int row = 1;row < matrix.size(); row++){
                matrix[row][i] = 0;     
            }
        }
	}

	if(isFirstColZero){
		for(int i = 0; i < matrix.size(); i++){
			matrix[i][0] = 0;
		}
	}

	if(isFirstRowZero){
		for(int i = 0; i < matrix[0].size(); i++){
			matrix[0][i] = 0;
		}
	}

	if(isFirstZero){
		for(int i = 0; i < matrix.size(); i++){
			matrix[i][0] = 0;
		}

		for(int i = 0; i < matrix[0].size(); i++){
			matrix[0][i] = 0;
		}
	}
	


}