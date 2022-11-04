//Karina Castillo

#include <vector>

using namespace std;

class DivSales
{
	private:
		double divSales;
		static double totalSales;
	public:
		vector<double> sales;

		double getDivSales();
		double getCorpSales();
		void setSales(double, double, double, double);
};
