#include<iostream>
#include<cstring>
//#include
//���Ե� 2 5 b��СС��a��С
//���еĲ��Զ���Ҫ a b ��ȫΪ��ͬ�Ĵ�С Ȼ����м������� 
using namespace std;
char arr[105];
int main(){
	string a,b;
	cin>>a>>b;
	 
	if (b.size()>a.size()){
//		cout<<b.size()-a.size()<<endl;
		int dis = b.size()-a.size();
		for(int i = 0 ; i < dis ; i++){
//			cout<<i<<endl;
			a = '0'+a;
		}
	}else if(b.size() < a.size()){
		int dis = a.size()-b.size();
		for(int i = 0 ; i < dis ; i++){
//			cout<<i<<endl;
			b = '0'+b;
		}
	}
	int f = b.size();
//	cout<<a<<" "<<b<<endl;
	for(int i = b.size()-1 ; i >= 0 ; i--){
		int bit = b.size() - i ;
//		cout<<bit<<endl;
//	 368782971 	1234567
		if( bit % 2 == 0){
			if(b[i]-a[i] < 0){
				arr[f--] = b[i] - a[i] + 10 + '0';
			}else{
				arr[f--] = b[i] - a[i] + '0';
			}		
		}else{
			int temp = (b[i]-'0' + a[i] - '0') % 13;
//			cout<<bit<<" b: "<<b[i]<<" a: "<<a[i]<<" "<<temp<<"  "<<endl;
			if(temp == 10) arr[f--] = 'J';
			if(temp == 11) arr[f--] = 'Q';
			if(temp == 12) arr[f--] = 'K';
			if(temp < 10) arr[f--] = temp + '0';
		}
	}
//	cout<<endl;

	for(int i = 1 ; i <= b.size() ; i++){
//		cout<<i<<endl;
		cout<<arr[i];
	}
//	cout<<endl;
	return 0;
} 
