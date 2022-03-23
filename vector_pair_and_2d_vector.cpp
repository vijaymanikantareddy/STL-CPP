#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* declaration of 2D vectors*/
	vector<vector<int>> mat= {{1,2,3},{4,5,6,55},{7,8,9}};
	for(int i=0; i<mat.size(); i++){
		for(int j= 0 ; j<mat[i].size() ; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}

	/* Vector Pair
	*/
	vector<pair<int, int>> ve;
	ve.push_back({7,5}); //{{7,5}
	ve.emplace_back(20, 25);	//{{7,5},{20,25}} //no {} brackets for emplace_back
	for(auto it: ve){
		cout<<it.first<<" "<<it.second<<endl; 
	}

	pair<int, pair<int, int>> pa = {1, {2,3}};
	cout<<pa.second.first;
	return 0;
}
