#pragma once
class ConstRef {
public:
	ConstRef(int ii);
private:
	int i;
	const int ci;
	int& ri;
};