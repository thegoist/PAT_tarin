#include<iostream>
#include<cstring>
using namespace std;
string str;
void func1(){ //ѹ�� 
	
	for(int i = 0 ; i < str.length() ; i++){
		cout<<str[i];	
	}
}
void func2(){	//��ѹ 
	
}

int main(){
	char c;
	cin>>c;
//	cout<<c;
	getline(cin,str);
	if(c == 'C'){
		func1();
	}
	else if(c == 'D'){
		func2();
	}
	return 0;
}
