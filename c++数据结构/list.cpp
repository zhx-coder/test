#include<iostream>
#include<list>

using namespace std;

int main(){
	int a[6] = {1, 3, 2, 5, 2, 3};
	int b[5] = {1, 3, 2, 4, 6};
	list<int> L(a, a+6);
	list<int> Lb(b, b+5);
	list<int>::iterator pl;
	
	//push_front ���뵽�������ǰ�� 
	
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
	
	//sort �������С�������� 
	
	L.sort();
	cout << "1) sort L : ";
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//remove(val) ɾ����val��ͬ��Ԫ�� 
	
	cout << "2) after delete element 2 : ";
	L.remove(2);
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//ɾ��������ǰ���Ԫ�� 
	
	cout << "3) delete first element in Lb : ";
	Lb.pop_front();
	for(pl = Lb.begin(); pl != Lb.end(); ++pl){
		cout << *pl << " " ;
	}
	cout << endl;
	
	//unique ɾ��������ͬԪ�� 
	
	cout << "4) delete all same element in L : ";
	L.unique();
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	//merge L.merge(Lb), L �� Lb ��Ϊ����� 
	//��Lb�ϲ������������ Lb 
	 
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
	
	//reverse ��ת����Ԫ�� 
	
	L.reverse();
	cout << "6) reverse L ";
	for(pl = L.begin(); pl != L.end(); ++pl)
	{
		cout << *pl << " " ;	
	} 
	cout << endl;
	
	return 0;
}
