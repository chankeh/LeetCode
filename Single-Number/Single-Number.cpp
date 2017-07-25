/*
	Given an array of integers, every element appears twice except for one. Find that single one. 
	Note: 
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
   int single_number(vector<int> a,int n)
   {
	   int result = a[0];
	   for(int i=1;i<n;++i){
		   result = result^a[i];
	   }
	   return result;
   }   
};

int main()
{
	vector<int>a;
	int n;
	Solution s;
	while(cin>>n){
		for(int i=0;i<n;++i){
			int s;
			cin>>s;
			a.push_back(s);
		}
		cout<<s.single_number(a,n)<<endl;
		a.clear();
	}
	return 0;
}


/*
	1 1 2 3 3 4 4 5 5
	2
*/
