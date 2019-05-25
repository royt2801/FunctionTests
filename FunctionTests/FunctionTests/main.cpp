#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

void main(int argc, char* argv[])
{
	queue<vector<string>> myQueue;
	vector<string> tab = { "hello", "world" };
	myQueue.push(tab);
	
	while (!myQueue.empty())
	{
		vector<string> tab2 = myQueue.front();
		for (size_t i = 0; i < tab2.size(); i++)
		{
			cout << tab2[i] << endl;
		}
		
		myQueue.pop();
	}
	cout << "the queue is empty" << endl;
}