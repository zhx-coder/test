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
	cout << "set��sizeֵΪ��" << s.size() << endl;
	cout << "set��maxsize��ֵΪ��" << s.max_size() << endl;
	cout << "set�еĵ�һ��Ԫ���ǣ�" << *s.begin() << endl;
	cout << "set�е����һ��Ԫ���ǣ�"<< *s.end() << endl;
	
	set<int>::iterator iter; 
	for(iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << endl;
	}
	s.clear();
	if(s.empty())
		cout << "setΪ�գ�����" <<endl;
	cout << "set��sizeֵΪ��" << s.size() << endl;
	cout << "set��maxsize��ֵΪ��" << s.max_size() << endl;		
	return 0;
}
