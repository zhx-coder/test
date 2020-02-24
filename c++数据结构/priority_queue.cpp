#include<iostream>
#include<queue>

using namespace std;

/*
int main(){
	int i;
	priority_queue<int> q;
	q.push(4);
	q.push(1);
	q.push(3);
	q.push(5);
	q.push(6);
	q.push(2);
	int len = q.size();
	for(int i = 0; i < len; i++)
	{
		cout << q.top()<<" ";
		q.pop();
	}
	cout << endl;
	if(q.empty())
	cout << "this priority queue is empty" << endl;
	return 0; 
}
*/
 
int main(){
	int i;
	priority_queue<int, vector<int>, greater<int> > q;
	q.push(4);
	q.push(1);
	q.push(3);
	q.push(5);
	q.push(6);
	q.push(2);
	int len = q.size();
	for(int i = 0; i < len; i++)
	{
		cout << q.top()<<" ";
		q.pop();
	}
	cout << endl;
	if(q.empty())
	cout << "this priority queue is empty" << endl;
	return 0; 
} 
