#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
	deque<string> dec;
	dec.push_back("hello");	//β������ 
	dec.push_front("world");	//ͷ������ 
	
	//insert����
	//iterator insert (iterator position, const value_type& val);
	dec.insert(dec.end(),"aaaaaa");
	
	//void insert (iterator position, size_type n, const value_type& val);
	dec.insert(dec.end(),5,"bbb");
	
	//void insert (iterator position, InputIterator first, InputIterator last);
	deque<string>t_dec(2, "ccc");
	dec.insert(dec.end(), t_dec.begin(), t_dec.end());
	
	dec.pop_back();	//β��ɾ�� 
	dec.pop_front(); //ͷ��ɾ�� 
	
	//erase����
	//iterator erase (iterator position);
	dec.erase(dec.begin());
	
	//iterator erase (iterator first, iterator last); 
	dec.erase(dec.end()-3, dec.end());
	
	//ɾ��ָ��Ԫ��
	deque<string>::iterator iter;
	for(iter = dec.begin(); iter != dec.end(); )
	{
	    if(*iter == "bbb")
	    {
	        iter = dec.erase(iter);
	    }
	    else
	    {
	        ++iter;
	    }
	}
	dec.back();  //�������һ��Ԫ��
	dec.front();  //���ص�һ��Ԫ��
	dec.empty();  //�ж��Ƿ�Ϊ��
	 
	//����������С�������Բ���2���� 
	dec.resize(5);
	dec.resize(5,"hello");
	  
	dec.size();  //������С 
	deque<string> s_dec;
	swap(s_dec, dec);  //������������ 
	s_dec.swap(dec);   //������������ 
	dec.clear();  //���
	
	//�������
	deque<string>::reverse_iterator rit;
	for(rit = dec.rbegin(); rit != dec.rend(); ++rit)
	{
		cout << *rit << endl;	
	} 
 }

