#include<iostream>
#include<queue>

using namespace std;

typedef struct
{
	int a, b;
}Node;

struct cmp
{
	bool operator()(const Node &t1, const Node &t2)
	{
		return t1.b < t2.b; //相当于less，数据元素值大的优先级高 
	}
};

int main()
{
	int i, n;
	cin>>n;
	Node *num = new Node[n];
	for(i = 0; i < n; i++)
	{
		cin>>num[i].a>>num[i].b;
	}
	priority_queue<Node,vector<Node>,cmp> q(num, num+n);
	while(!q.empty())
	{
		cout << q.top().b << " ";
		q.pop();
	}
	cout << endl;
	delete num;
	return 0;
}
  
