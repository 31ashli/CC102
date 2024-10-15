#include <iostream>

using namespace std;

int main()
{
	float sugarPriceUSD, ricePricePound, sardinesPriceUSD, coffeePriceUSD, milkPriceUSD ;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty ;
	float usdToPhp, poundToPhp ;
	
	cout << "Enter sugar Quantity" ;
	cin >> sugarQty;
	cout << "Enter rice Quantity" ;
	cin >> riceQty ;
	cout << "Enter sardines Quantity" ;
	cin  >> sardinesQty ;
	cout << "Enter coffee Quantity" ;
	cin >> coffeeQty ;
	cout << "Enter milk Quantity" ;     
	cin >> milkQty ;
	cout << "Enter price of sugar in PHP" ;
	cin >> sugarPriceUSD ;
	cout << "Enter price of rice in PHP" ;
	cin >> ricePricePound ;
	cout << "Enter price of sardines in PHP" ;
	cin >> sardinesPriceUSD ;
	cout << "Enter price of coffee in PHP" ;
	cin >> coffeePriceUSD ;
	cout << "Enter price of milk in PHP" ;
	cin >> milkPriceUSD ;
	cout << "totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP" ;	
	
	return 0;
}
