//#include <algorithm>
//#include <cmath>
//
//void abssort(float* x, unsigned n) {
//    std::sort(x, x + n,
//        // Lambda expression begins
//        [](float a, float b) {
//            return (std::abs(a) < std::abs(b));
//        } // end of lambda expression
//    );
//}
//
//struct S { void f(int i); };
//
//void S::f(int i) {
//    [&, i] {};      // OK
//    [&, &i] {};     // ERROR: i preceded by & when & is the default
//    [=, this] {};   // ERROR: this when = is the default
//    [=, *this] {}; // OK: captures this by value. See below.
//    [i, i] {};      // ERROR: i repeated
//}
//auto y = [](int first, int second)
//    {
//        return first + second;
//    };
//auto y = [](auto first, auto second)
//    {
//        return first + second;
//    };
//
//// throw_lambda_expression.cpp
//// compile with: /W4 /EHsc
//int main() // C4297 expected
//{
//    []() noexcept { throw 5; }();
//}
//auto x1 = [](int i) { return i; }; // OK: return type is int
//auto x2 = [] { return{ 1, 2 }; };  // ERROR: return type is void, deducing
//// return type from braced-init-list isn't valid