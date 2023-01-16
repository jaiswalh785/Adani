#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createList(int row, int col){
    vector<vector<int>> list2D(row, vector<int>(col, 0));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            list2D[i][j] = rand() % 101;
        }
    }
    return list2D;
}
int main() {
    int row, col;
    cin >> row >> col;
	vector<vector<int>> list2D = createList(row, col);
	
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
	        cout<<list2D[i][j]<< " ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
