#include<iostream>
#include<vector>
using namespace std;
void subsets(int a[],int i,vector<int> &o){
	if(i==-1){
		for(int i=0;i<o.size();i++)
			cout<<o[i]<<" ";
		cout<<endl;
		return;
	}
	o.push_back(a[i]);
	subsets(a,i-1,o);
	o.pop_back();
	subsets(a,i-1,o);
}
int main(void){
	int n;
	cout<<"Enter array size:";
	cin>>n;
	int a[n];
	cout<<"Enter array elemnts"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"subsets of the array"<<endl;
	vector<int> o;
	subsets(a,n-1,o);
}
