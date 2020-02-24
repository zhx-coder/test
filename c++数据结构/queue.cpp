#include<iostream>
#include<queue>

using namespace std;

//解决报数问题 

int main(){
	int n, k;
	cin >> n >> k;
	int num = 1;
	queue<int> list;
	for(int i = 1; i <= n; i++){
		list.push(i);
	}
	while(list.size() > 1)
	{
		int a = list.front();
		list.pop();
		if(num % k != 0){
			list.push(a);
		}
		else cout << a << " ";
		num++;
	}
	cout << list.front() << endl;
	return 0;
} 

/*

queue.size()  output the number of element in the queue

queue.front()  output the first element in the queue;

queue.back() output the last element in the queue;

queue.push(a) push 'a' to the back of the queue;

queue.pop() delete the first element in the queue; 

*/
