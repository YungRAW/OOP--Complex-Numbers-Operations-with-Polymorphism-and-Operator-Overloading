#pragma once
class complex
{
private:
	float real;
	float imaginar;

public:

	complex();
	complex(int real);
	complex(int real, int imaginar);

	complex operator =(const complex &number);
	complex operator +(const complex &number);
	complex operator -(const complex &number);
	complex operator *(const complex &number);
	complex operator /(const complex &number);
	complex operator ^(int power);
	int operator ~();

	void display();

	~complex();
};