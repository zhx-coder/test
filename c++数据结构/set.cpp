#include<set>
#include<iostream>

using namespace std;

int main(){
	set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(1);
	s.insert(9);
	s.insert(7);
	cout << "set的size值为：" << s.size() << endl;
	cout << "set的maxsize的值为：" << s.max_size() << endl;
	cout << "set中的第一个元素是：" << *s.begin() << endl;
	cout << "set中的最后一个元素是："<< *s.end() << endl;
	
	set<int>::iterator iter; 
	for(iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << endl;
	}
	s.clear();
	if(s.empty())
		cout << "set为空！！！" <<endl;
	cout << "set的size值为：" << s.size() << endl;
	cout << "set的maxsize的值为：" << s.max_size() << endl;		
	return 0;
}
