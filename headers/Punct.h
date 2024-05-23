#pragma once
#include "Figura.h"

using namespace std;


class Punct : public Figura {
	protected:
		int x, y;

	public:
		Punct(int x = 0, int y = 0) : x{ x }, y{ y }{
		}

		virtual ~Punct() override;

		virtual void Print() override;
		virtual double GetArea() override;
		virtual void Save(ostream& file) override;
		virtual void Load(istream& file)  override;
};

