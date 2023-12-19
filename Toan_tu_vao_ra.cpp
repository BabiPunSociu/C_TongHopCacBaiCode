
	/ Toan tu nhap - xuat /

class A{
public:
	friend istream &operator>> (istream &input, A &ptr);
	friend ostream &operator<<(ostream &output, A &ptr);
};

istream &operator>> (istream &input, A &ptr)
{
	...
	return input;
}
ostream &operator<<(ostream &output, A &ptr)
{
	...
	return output;
}
