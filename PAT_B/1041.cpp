#include<iostream>
//#include<cstdio>
#include<map>
#include<string>
/*cin  �������������� int 
	����ʹ�� cin>>int>>int>>int 
	��������ʱ�ڶ��в��ܽ������� 
*/
using namespace std;
int main(){
	int n;
	map<string,int> id_real;
	map<int,string> try_id;
	int r,t;
	string id;
//	cout<<n;
	cin>>n;
	for(int i = 0 ; i < n; i++){
		cin>>id>>t>>r;
		id_real[id] = r;
		try_id[t] = id;
	}
	int m;
	cin>>m;
	int q;
	for(int i = 0 ; i < m; i++){
		cin>>q;
		id = try_id[q];
		r = id_real[id];
		cout<<id<<" "<<r<<endl;
	}
	return 0;
}
