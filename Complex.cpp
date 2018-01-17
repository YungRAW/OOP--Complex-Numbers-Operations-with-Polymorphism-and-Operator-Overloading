#include "complex.h"
#include <iostream>



complex::complex()
{
	this->real = 0;
	this->imaginar = 0;
}

complex::complex(int real)
{
	this->real = real;
	this->imaginar = 0;
}

complex::complex(int real, int imaginar)
{
	this->real = real;
	this->imaginar = imaginar;
}

complex complex::operator=(const complex &number)
{
	complex temp;

	temp.real = number.real;
	temp.imaginar = number.imaginar;

	return temp;
}

complex complex::operator+(const complex &number)
{
	complex temp;

	temp.real = this->real + number.real;
	temp.imaginar = this->imaginar + number.imaginar;

	return temp;
}

complex complex::operator-(const complex &number)
{
	complex temp;

	temp.real = this->real - number.real;
	temp.imaginar = this->imaginar - number.imaginar;

	return temp;
}

complex complex::operator*(const complex &number)
{
	complex temp;

	temp.real = this->real * number.real - this->imaginar * number.imaginar;
	temp.imaginar = this->real * number.imaginar + this->imaginar * number.real;

	return temp;
}

complex complex::operator /(const complex &number)
{
	complex multiply, multiply2, invers, division;
	multiply.real = this->real * number.real - this->imaginar * number.imaginar;
	multiply.imaginar = this->real * number.imaginar + this->imaginar * number.real;

	invers.real = number.real;
	invers.imaginar = -number.imaginar;

	multiply2.real = invers.real * number.real - invers.imaginar * number.imaginar;

	division.real = multiply.real / multiply2.real;
	division.imaginar = multiply.imaginar / multiply2.real;

	return division;
}

complex complex::operator^(int power)
{
	complex temp, temp2;

	if (power == 1)
	{
		return complex();
	}
	else if (power >= 2)
	{
		temp.real = this->real * this->real - this->imaginar * this->imaginar;
		temp.imaginar = this->real * this->imaginar + this->imaginar * this->real;

		for (int i = 2; i < power; i++) {
			temp2.real = temp.real * this->real - temp.imaginar * this->imaginar;
			temp2.imaginar = this->imaginar * temp.real + this->real * temp.imaginar;

			temp = temp2;
		}

		return temp2;
	}


}

int complex::operator~()
{
	int modul;

	modul = this->real * this->real + this->imaginar * this->imaginar;

	return modul;
}

void complex::display()
{
	std::cout << "(" << real << ")" << " + " << "(" << imaginar << "i" << ")" << std::endl;
}


complex::~complex()
{
}