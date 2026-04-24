#include "PhanSo.h"

PhanSo::PhanSo()
{
	iTu = 0;
	iMau = 1;
}
std::istream& operator>>(std::istream& is, PhanSo& ps)
{
	std::cout << "Nhap tu so: ";
	is >> ps.iTu;
	std::cout << "Nhap mau so: ";
	while(is>> ps.iMau)
	{
		if (ps.iMau == 0)
			std::cout << "Mau so phai khac 0. Nhap lai: ";
		else
			break;
	}
	return is;
}
std::ostream& operator<<(std::ostream& os, const PhanSo& ps)
{
	if(ps.iMau == 1)
		os << ps.iTu;
	else if(ps.iTu == 0)
		os << 0;
	else if(ps.iMau < 0)
		os << -ps.iTu << "/" << -ps.iMau;
	else if (ps.iTu % ps.iMau == 0)
		os << ps.iTu / ps.iMau;
		else	
			os << ps.iTu << "/" << ps.iMau;
	return os;
}
PhanSo PhanSo::operator+(const PhanSo& ps)
{
	PhanSo temp;
	temp.iTu = iTu * ps.iMau + ps.iTu * iMau;
	temp.iMau = iMau * ps.iMau;
	temp.rutGon(temp);
	return temp;
}
PhanSo PhanSo::operator-(const PhanSo& ps)
{
	PhanSo temp;
	temp.iTu = iTu * ps.iMau - ps.iTu * iMau;
	temp.iMau = iMau * ps.iMau;
	temp.rutGon(temp);
	return temp;
}
PhanSo PhanSo::operator*(const PhanSo& ps)
{
	PhanSo temp;
	temp.iTu = iTu * ps.iTu;
	temp.iMau = iMau * ps.iMau;
	temp.rutGon(temp);
	return temp;
}
PhanSo PhanSo::operator/(const PhanSo& ps)
{
	PhanSo temp;
	if(ps.iTu == 0)
	{
		std::cout << "Khong the chia cho 0. Tra ve phan so 0/1." << std::endl;
		return PhanSo();
	}
	temp.iTu = iTu * ps.iMau;
	temp.iMau = iMau * ps.iTu;
	temp.rutGon(temp);
	return temp;
}
bool PhanSo::operator==(const PhanSo& ps)
{
	return (iTu * ps.iMau == ps.iTu * iMau);
}
bool PhanSo::operator!=(const PhanSo& ps)
{
	return (iTu * ps.iMau != ps.iTu * iMau);
}
bool PhanSo::operator>(const PhanSo& ps)
{
	return (iTu * ps.iMau > ps.iTu * iMau);
}
bool PhanSo::operator<(const PhanSo& ps)
{
	return (iTu * ps.iMau < ps.iTu * iMau);
}
void PhanSo::rutGon(PhanSo& ps)
{
	int a = ps.iTu, b = ps.iMau;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	ps.iTu /= a;
	ps.iMau /= a;
}

std::istream& operator>>(std::istream& is, SoNguyen& sn)
{
	std::cout << "Nhap so nguyen: ";
	is >> sn.iTu;
	sn.iMau = 1;
	return is;
}