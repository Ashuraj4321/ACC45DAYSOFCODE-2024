#include <iostream>
using namespace std;

//code goes from here
int main()
{
	int T;
	cin>>T;
	
	while(T--){
		int P,Q,R,S;
		cin>>P>>Q>>R>>S;
		
		if(P>Q+R+S || Q>P+R+S || R>P+Q+S || S>P+Q+R){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
