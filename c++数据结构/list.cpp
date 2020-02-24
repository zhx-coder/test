#include<iostream>
#include<list>

using namespace std;

int main(){
	int a[6] = {1, 3, 2, 5, 2, 3};
	int b[5] = {1, 3, 2, 4, 6};
	list<int> L(a, a+6);
	list<int> Lb(b, b+5);
	list<int>::iterator pl;
	
	//push_front 插入到链表的最前面 
	
	cout << "element in L : ";
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	cout << "element in Lb : ";
	for(pl = Lb.begin(); pl != Lb.end(); ++pl){
		cout << *pl << " " ;
	}
	cout << endl;
	
	//sort 将链表从小到大排序 
	
	L.sort();
	cout << "1) sort L : ";
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//remove(val) 删除和val相同的元素 
	
	cout << "2) after delete element 2 : ";
	L.remove(2);
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//删除链表最前面的元素 
	
	cout << "3) delete first element in Lb : ";
	Lb.pop_front();
	for(pl = Lb.begin(); pl != Lb.end(); ++pl){
		cout << *pl << " " ;
	}
	cout << endl;
	
	//unique 删除所有相同元素 
	
	cout << "4) delete all same element in L : ";
	L.unique();
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//merge L.merge(Lb), L 和 Lb 均为有序的 
	//将Lb合并进来并且清空 Lb 
	 
	Lb.sort();
	L.merge(Lb);
	cout << "5) merge L with Lb : ";
	L.unique();
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	cout << "   size of Lb : " << Lb.size() << endl;
	
	//reverse 翻转所有元素 
	
	L.reverse();
	cout << "6) reverse L ";
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	return 0;
}
