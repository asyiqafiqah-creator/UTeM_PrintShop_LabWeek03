// NAME: ASYIQ AFIQAH BINTI MOHD ASRI      MATRIC: B032610261
// UTeM_PrintShop_LabWeek03.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<iostream>
#include<iomanip>                  //for setw, setprecision, fixed
#include<string>
using namespace std;

const double  BlackAndWhitePrice = 0.10;  //price per page for black and white printing
const double  ColorPrice = 0.50;          //price per page for color printing
const double  CombBindingPrice = 2.00;          //price for comb binding

int main()
{
	string StudentMatric;
	int NumberOfPagesBNW, NumberOfPagesColour, StapledSets, LoosePages, TotalPages;
	double TotalPrice, TotalCost, TotalCostWithCB, AverageCostPage;
	bool IsCombBinding, IsBulkOrder;
	char CombBindingChoice = '\0';

	//----Input Section----
	cout << "Enter Student Matric Number: ";
	cin >> StudentMatric;
	cout << "Enter number of pages for print in Black and White: ";
	cin >> NumberOfPagesBNW;
	cout << "Enter number of pages for print in Colour: ";
	cin >> NumberOfPagesColour;
	cout << "Do you want Comb Binding? (YES/NO): ";
	cin >> CombBindingChoice;

	//----Processing Section----
	IsCombBinding = (CombBindingChoice == 'Y' || CombBindingChoice == 'y'); //convert character to boolean
	TotalPages = NumberOfPagesBNW + NumberOfPagesColour;
	TotalCost = (NumberOfPagesBNW * BlackAndWhitePrice) + (NumberOfPagesColour * ColorPrice);
	if (IsCombBinding)
	{
		TotalCostWithCB = TotalCost + CombBindingPrice;
	}
	AverageCostPage = TotalCost / TotalPages;
	StapledSets = TotalPages / 20; //pages are stapled in sets of 20 pages
	LoosePages = TotalPages % 20; //remaining pages that are not part of a complete set
	IsBulkOrder = (TotalPages >= 100); // a job of 100 pages or more is considered a bulk order

	//----Output Section----
	cout << fixed << setprecision(2); //set output to 2 decimal places
	cout << endl << setfill('=') << setw(50) << "" << endl; //print a line of '=' characters
	cout << "  UTeM PRINT SHOP - JOB SUMMARY " << endl;
	cout << setfill('=') << setw(50) << "" << endl; //print a line of '=' characters
	cout << "Student Matric Number: " << StudentMatric << endl;
	cout << "Total Pages: " << TotalPages << endl;
	cout << "Stapled Sets: " << StapledSets << endl;
	cout << "Loose Pages: " << LoosePages << endl;
	cout << "Total Cost: RM " << TotalCost << endl;
	cout << "Average Cost per Page: RM " << AverageCostPage << endl;
	cout << "Bulk Order: " << (IsBulkOrder ? "YES" : "NO") << endl;
	return 0;
}
