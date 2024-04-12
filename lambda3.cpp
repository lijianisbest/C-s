#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	for (size_t i = 0; i < 1000; i++)
	{
		v.push_back(i);
	}
	int count = 0;
	auto y = [&](vector<int>& v)mutable {
		for (size_t i = 0; i < v.size(); i++)
		{
			if (v.at(i) % 2 == 0)
			{
				++count;
			}
		}
		return count;
		}(v);
	cout << y;
	return 0;
}