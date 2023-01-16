#include <bits/stdc++.h>
using namespace std;
int row, col;

vector<vector<int>> createList(int row, int col){
    vector<vector<int>> list2D(row, vector<int>(col, 0));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            list2D[i][j] = rand() % 101;
        }
    }
    return list2D;
}

vector<vector<int>> sort2DList(vector<vector<int>> v, int rc){
    vector<int> vl;
    for(int i = 0; i < row; i++){
        vl.push_back(v[i][rc]);
    }
    sort(vl.begin(), vl.end());
    int k = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(j == rc){
                v[i][j] = vl[k++];
            }
        }
    }
    return v;
    
}
int main() {
    cin >> row >> col;
	vector<vector<int>> list2D = createList(row, col);
	
	int colToSort; 
	cin>>colToSort;
	
	if(colToSort >= col){
	    cout<<"Enter Valid Column"<<endl;
	    return 0;
	}
	
	vector<vector<int>> sorted2DList = sort2DList(list2D, colToSort);
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
	        cout<<sorted2DList[i][j]<< " ";
	    }
	    cout<<endl;
	}
	
	return 0;
}

