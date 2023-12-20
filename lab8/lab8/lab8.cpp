#define _USE_MATH_DEFINES
#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

struct kolo
{
	int R;
	int sr;
}kolo;


void zad2(vector<int>a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void zad1(vector<int>a, int n)
{
	vector<int> b;
	int t;
	for (int i = 0; i < n; i++)
	{
		t = rand() % 4;
		a.push_back(t);
		//cout << a[i];
	}
	zad2(a, n);
}

void zad3(vector<int>a, int n)
{
	int t, max = -1, min = 5;
	for (int i = 0; i < n; i++)
	{
		t = rand() % 4;
		a.push_back(t);
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << "max " << max << " min " << min;
}

double pole()
{
	double pol = M_PI*pow(kolo.R,2);
	//wekol(pol,a);
	return pol;
}

vector<double> wekol(double pol, vector<double>a)
{
	a.push_back(pol);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i]<<" ";
	}
	return a;
}

vector<double> naj(vector<double>a)
{
	int t;
	double min;
	int n = a.size();
	min = 10;
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << min;
	return a;
}

vector<double> wyp(vector<double>a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	vector<double> a;
	//zad1(a, n);
	//zad3(a, n);
	int t;
	double pol;
	for (int i = 0; i < n; i++)
	{
		kolo.R = rand() % 4;
		pol=pole();
		wekol(pol, a);
	}
	//wyp(a);
	naj(a);
}
