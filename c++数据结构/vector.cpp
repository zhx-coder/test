#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> iVec;
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //1��Ԫ�أ� ��������Ϊ1
	
	iVec.push_back(1);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //2��Ԫ�أ� ��������Ϊ2
	
	iVec.push_back(2);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //3��Ԫ�أ� ��������Ϊ4
	
	iVec.push_back(3);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //4��Ԫ�أ� ��������Ϊ4
	
	iVec.push_back(4);
	iVec.push_back(5);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //5��Ԫ�أ� ��������Ϊ8
	
	iVec.push_back(6);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //6��Ԫ�أ� ��������Ϊ8
	
	iVec.push_back(7);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //7��Ԫ�أ� ��������Ϊ8
	
	iVec.push_back(8);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //8��Ԫ�أ� ��������Ϊ8
	
	iVec.push_back(9);
	cout << "���� ��СΪ: " << iVec.size() << endl;
	cout << "���� ����Ϊ: " << iVec.capacity() << endl; //9��Ԫ�أ� ��������Ϊ16
	/* vs2005/8 �����������Ƿ����ģ��� 
	    9��Ԫ��   ����9 
	    10��Ԫ�� ����13 */
	
	/* ����effective stl�е�����Ľ��� swap() */
	cout << "��ǰvector �Ĵ�СΪ: " << iVec.size() << endl;
	cout << "��ǰvector ������Ϊ: " << iVec.capacity() << endl;
	vector<int>(iVec).swap(iVec);
	
	cout << "��ʱ��vector<int>���� �Ĵ�СΪ: " << (vector<int>(iVec)).size() << endl;
	cout << "��ʱ��vector<int>���� ������Ϊ: " << (vector<int>(iVec)).capacity() << endl;
	cout << "�����󣬵�ǰvector �Ĵ�СΪ: " << iVec.size() << endl;
	cout << "�����󣬵�ǰvector ������Ϊ: " << iVec.capacity() << endl;

	return 0;
}
