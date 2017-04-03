#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main()
{
	int i, n, x;
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	inFile >> n;
	vector<int> v(n);
	for(i=0; i<n; ++i) inFile >> v.at(i);
	sort(v.begin(), v.end());
	x = 0;
	for(i=v.size()-5; i<v.size(); ++i) x += v.at(i);
	cout << x << endl;
	return 0;
}
