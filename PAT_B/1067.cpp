#include<iostream>
#include<string>
#include<vector>
using namespace std;
string pwd;
/* �ʼ�
	����
	������cin�����п��ܻ����뵽���� 
	���Ե��������������Ե㲻��ͨ�� 
*/ 
bool check(string s){
//	cout<<s<<" "<<pwd<<endl;
	if(s == pwd) return true;
	else return false;
}
int main(){
	
	int n;
	cin>>pwd>>n;
	string temp;
	getline(cin,temp);
	vector<string> v;
	do{
//		cin>>temp;
		getline(cin,temp);
		if(temp == "#") break;
		v.push_back(temp);
			
	}while(temp != "#");
	
	int cnt = 0;
	
	for(vector<string>::iterator it = v.begin() ; it != v.end() ; it++){
//		if( *it == "#") break;
		if(check(*it) && cnt < n){
			cout<<"Welcome in"<<endl;
			break;
		}else{
			cnt++;
			cout<<"Wrong password: "<<*it<<endl;
		}
		
		if(cnt >= n){
//			cout<<"Wrong password: "<<*it<<endl;
			cout<<"Account locked"<<endl;
			break;
		}
	}
	
	return 0;
}
