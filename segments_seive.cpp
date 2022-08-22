#include<bits/stdc++.h>
using namespace std;
int N=1000001;
int primes[1000001];
void Gen_Seive(){
	for(int i=0;i<N;i++){
		primes[i]=1;
	}
	for(int i=2;i*i<N;i++){
		if(primes[i]==1){
			for(int j = i*i; j < N ; j+=i){
				primes[j]=0;
			}
		}
	}

}
vector<int>Gen_primes(int num){
	vector<int>ds;
	for(int i=2;i<=num;i++){
		if(primes[i]==1)ds.push_back(i);
	}
	return ds;
}
int main()
{
	Gen_Seive();
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		vector<int> dj=Gen_primes(sqrt(r)+1);
		vector<int>dummy(r-l+1,1);

		for(auto it:dj){
			int firstmul=(l/it)*it<l?((l/it)+1)*it:(l/it)*it;
			for(int j = max(firstmul,it*it); j <= r ;j += it){
				dummy[j-l]=0;
			}
		}
		for(int i=0;i<r-l+1;i++){
			if(dummy[i]==1){
				cout<<l+i<<" ";
			}
		}

	}
}
