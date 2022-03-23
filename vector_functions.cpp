#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> ve;
	ve.push_back(100);
	ve.push_back(20);
	ve.emplace_back(30); //Faster than the push_back
	ve.pop_back();
	for(int i=0 ; i<ve.size(); i++) //for range loop
		cout<<ve[i]<<" ";

	cout<<"\n";

	//auto is used for string or int or float - only works in STL 
	for(auto it:ve)    //for each loop (works only in STL library)
		cout<<it<<" ";

	cout<<"\n";

	//iterator
	auto it1= ve.begin(); //pointer
	cout<<*it1; 	//value in pointer
	auto it2 = ve.end();
	auto it3 = ve.rbegin();	//begin from reverse
	auto it4 = ve.rend()-1;	//end from reverse
	cout<<"\n";

	//create iterator loop
	for(auto it = ve.rbegin(); it!= ve.rend(); it++)	//print the vector in reverse
		cout<<*it<<" ";


	ve.emplace_back(397);
	ve.emplace_back(380);

	sort(ve.begin(), ve.end());	//sort the vector
	/* sort function accepts two parameters 
	i.e., starting address and ending address */
	for(int i=0 ; i<ve.size(); i++) //loop to print
		cout<<ve[i]<<" ";


	ve.erase(ve.begin());	//delete first element
	ve.erase(ve.begin()+1);	//delete second element
	//{10, 20, 30, 40, 50}
	ve.erase(ve.begin()+1,ve.begin()+4);//{10,50}


	//insert function in vector
    ve.insert(ve.begin(),300);//300 will be inserted at the begining
    ve.insert(ve.begin()+1,2,10)//now two 10's will be inserted from second
    vector<int>copy(2,10);//{10,10}
    ve.insert(ve.begin(),copy.begin(),copy.end());

    //to erase the last element
    ve.pop_back();

	vet.pop_back();
    //v1={1,2}
    //v2={4,5}
    v1.swap(v2);//v1={4,5} v2={1,2}

    vet.clear();//to erase all the values
    
    cout<<vet.empty();//gives true if vector is empty

	return 0;
}
