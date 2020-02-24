#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
	deque<string> dec;
	dec.push_back("hello");	//尾部插入 
	dec.push_front("world");	//头部插入 
	
	//insert操作
	//iterator insert (iterator position, const value_type& val);
	dec.insert(dec.end(),"aaaaaa");
	
	//void insert (iterator position, size_type n, const value_type& val);
	dec.insert(dec.end(),5,"bbb");
	
	//void insert (iterator position, InputIterator first, InputIterator last);
	deque<string>t_dec(2, "ccc");
	dec.insert(dec.end(), t_dec.begin(), t_dec.end());
	
	dec.pop_back();	//尾部删除 
	dec.pop_front(); //头部删除 
	
	//erase操作
	//iterator erase (iterator position);
	dec.erase(dec.begin());
	
	//iterator erase (iterator first, iterator last); 
	dec.erase(dec.end()-3, dec.end());
	
	//删除指定元素
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
	dec.back();  //返回最后一个元素
	dec.front();  //返回第一个元素
	dec.empty();  //判断是否为空
	 
	//调整容器大小，不足以参数2补充 
	dec.resize(5);
	dec.resize(5,"hello");
	  
	dec.size();  //容器大小 
	deque<string> s_dec;
	swap(s_dec, dec);  //交换容器内容 
	s_dec.swap(dec);   //交换容器内容 
	dec.clear();  //清空
	
	//反序输出
	deque<string>::reverse_iterator rit;
	for(rit = dec.rbegin(); rit != dec.rend(); ++rit)
	{
		cout << *rit << endl;	
	} 
 }

