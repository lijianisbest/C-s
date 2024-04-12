// captures_lambda_expression.cpp
// compile with: /W4 /EHsc
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	[&, n](int a) mutable { m = ++n + a; }(4);
//	cout << m << endl << n << endl;
//}
//void fillVector(vector<int>& v)
//{
//    // A local static variable.
//    static int nextValue = 1;
//
//    // The lambda expression that appears in the following call to
//    // the generate function modifies and uses the local static
//    // variable nextValue.
//    generate(v.begin(), v.end(), [] { return nextValue++; });
//    //WARNING: this isn't thread-safe and is shown for illustration only
//}
