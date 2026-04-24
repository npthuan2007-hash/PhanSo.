#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>

class PhanSo
{
	public:
		PhanSo();
		
		friend std::istream& operator>>(std::istream& is, PhanSo& ps);
		friend std::ostream& operator<<(std::ostream& os, const PhanSo& ps);

		PhanSo operator+(const PhanSo& ps);
		PhanSo operator-(const PhanSo& ps);
		PhanSo operator*(const PhanSo& ps);
		PhanSo operator/(const PhanSo& ps);
		void rutGon(PhanSo& ps);
		
		bool operator==(const PhanSo& ps);
		bool operator!=(const PhanSo& ps);
		bool operator>(const PhanSo& ps);
		bool operator<(const PhanSo& ps);
	protected:
		int iTu, iMau;
};

class SoNguyen : public PhanSo
{
	public:
		SoNguyen() : PhanSo() {};
		friend std::istream& operator>>(std::istream& is, SoNguyen& sn);

};


#endif
