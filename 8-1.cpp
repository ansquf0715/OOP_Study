#include <iostream>

using namespace std;

class Vector {
	int dim;
	double* arr;
public:
	Vector(int d = 0) : dim(d) { arr = new double[dim]; }
	~Vector() { delete[] arr; }

	void setRand(int max = 100)
	{
		for (int i = 0; i < dim; i++)
			arr[i] = rand() % (max * 10) / 10.0;
	}

	void print(const char* str)
	{
		cout << str << "[" << dim << "]=<";
		for (int i = 0; i < dim; i++)
			cout << arr[i] << " ";
		cout << ">\n";
	}

	void add(Vector* a, Vector* b)
	{
		for (int i = 0; i < dim; i++)
			arr[i] = a->arr[i] + b->arr[i];
	}

	void clone(Vector& a)
	{
		if (dim > 0) delete[] arr;
		dim = a.dim;
		arr = new double[dim];
		for (int i = 0; i < dim; i++)
			arr[i] = a.arr[i];
	}
};

int main()
{
	Vector u(3), v(5), w;
	u.setRand();
	v.clone(u);
	u.print(" U ");
	v.print(" V ");
	w.add(&u, &v);
	w.print(" W ");
}