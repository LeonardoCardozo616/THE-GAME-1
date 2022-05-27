#pragma once
#include <iostream>
using namespace std;

template <typename TL>
class Coordenada
{
private:
	TL x;
	TL y;
public:
	Coordenada(TL x, TL y);
	Coordenada();
	~Coordenada() { }

	TL getX() { return x; }
	TL getY() { return y; }

	void operator=(Coordenada<TL> outro);
	void operator+=(Coordenada<TL> outro);
	void operator-=(Coordenada<TL> outro);
	void operator*=(double escalar);
	void operator/=(double escalar);

	Coordenada<TL> operator+(Coordenada<TL> outro);
	Coordenada<TL> operator-(Coordenada<TL> outro);
	Coordenada<TL> operator*(Coordenada<TL> outro);
	Coordenada<TL> operator*(double escalar);
	Coordenada<TL> operator/(Coordenada<TL> outro);
	Coordenada<TL> operator/(double escalar);
};

typedef Coordenada<float> CoordF;
typedef Coordenada<double> CoordD;

template<typename TL>
inline Coordenada<TL>::Coordenada(TL x, TL y) :
	x(x),
	y(y)
{
}

template<typename TL>
inline Coordenada<TL>::Coordenada()
{
	this->x = 0;
	this->y = 0;
}

template<typename TL>
void Coordenada<TL>::operator=(Coordenada<TL> outro)
{
	this->x = outro.getX();
	this->y = outro.getY();
}

template<typename TL>
void Coordenada<TL>::operator+=(Coordenada<TL> outro)
{
	this->x += outro.getX();
	this->y += outro.getY();
}

template<typename TL>
void Coordenada<TL>::operator-=(Coordenada<TL> outro)
{
	this->x -= outro.getX();
	this->y -= outro.getY();
}

template<typename TL>
void Coordenada<TL>::operator*=(double escalar)
{
	this->x = this->y * escalar;
	this->y = this->y * escalar;
}

template<typename TL>
void Coordenada<TL>::operator/=(double escalar)
{
	if (escalar != 0.0f) {
		this->x /= escalar;
		this->y = escalar;
	}
	else {
		cout << "Erro!! Não eh possivel dividir por 0!" << endl;
	}
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator+(Coordenada<TL> outro)
{
	return Coordenada<TL>(this->x + outro.getX(), this->y + outro.getY());
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator-(Coordenada<TL> outro)
{
	return Coordenada<TL>(this->x - outro.getX(), this->y - outro.getY());
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator*(Coordenada<TL> outro)
{
	return Coordenada<TL>(this->x * outro.getX(), this->y * outro.getY());
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator*(double escalar)
{
	return Coordenada<TL>(this->x * escalar, this->y * escalar);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator/(Coordenada<TL> outro)
{
	if (outro.getX() == 0.0f || outro.getY() == 0.0f) {
		cout << "Erro!! Não eh possivel dividir por 0!" << endl;
		exit(1);
	}

	return Coordenada<TL>(this->x / outro.getX(), this->y / outro.getY());
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator/(double escalar)
{
	if (escalar == 0.0f) {
		cout << "Erro!! Não eh possivel dividir por 0!" << endl;
		exit(1);
	}
	
	return Coordenada<TL>(this->x / escalar, this->y / escalar);
}
