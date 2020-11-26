///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: accountDriver.cpp
// Date: December 05, 2019
// Programmer: Samir Williams             
//
// Description:
//    Description of what the code in the file is meant to do and 
//    how it does what it is meant to do.
//                                                                 
///////////////////////////////////////////////////////////////////////

#include<iostream>
#include"patientAccount.h"

using namespace std;

//Function Prototypes
void patientChoice(PatientAccount&);
void surTypeChoice(PatientAccount&);

int main(){
	
	srand(unsigned(time(NULL)));
	cout.precision(2);

	PatientAccount patientArray[5];

	int mainMenuOperator = 0;
	int innerMenuOperator = 0;
	

	while (mainMenuOperator != -1){

		cout << "Please enter an account number from 0-4 " << endl;
		cout << "(0: 100, 1: 200, 2: 300, 3: 400 and 4: 500)" << endl;
		cout << "or -1 to exit the program:" << endl;
		cin >> mainMenuOperator;
		cout << endl;
		
		switch (mainMenuOperator){
		case 0:
			patientChoice(patientArray[mainMenuOperator]);
			break;
		case 1:
			patientChoice(patientArray[mainMenuOperator]);
			break;
		case 2:
			patientChoice(patientArray[mainMenuOperator]);
			break;
		case 3:
			patientChoice(patientArray[mainMenuOperator]);
			break;
		case 4:
			patientChoice(patientArray[mainMenuOperator]);
			break;
		case -1:
			break;
		default:
			cout << "Only numbers from 0-4 or -1 are accepted!" << endl;
			break;
		}


	} 

	if (mainMenuOperator == -1) {
		exit(EXIT_FAILURE);
	}
	system("pause");
	return 0;
}

//Function Definitions

///////////////////////////////////////////////////////////////////////
//
// Function: patientChoice                                          
//                                                                   
// Description:
//    Provides a menu for the specifed patient
//
// Parameters:  
//    patient  : the patient to manipulate and open the menu for                                         
//                                            
///////////////////////////////////////////////////////////////////////
void patientChoice(PatientAccount& patient) {

	int innerMenuOperator = 0;

	while (innerMenuOperator != 99) {
		cout << "Enter 1: to select the type of surgey performed: " << endl;
		cout << "(Choices are Liposuction, Nose Reshaping, Eyelid Surgery, and Tummy Tuck)" << endl;
		cout << "Enter 2: Calculate and Display the patient account balance" << endl;
		cout << "Enter 3: Display the Patient Summary Report" << endl;
		cout << "Enter 99: Exit to the Main Menu and select another Account Number" << endl;
		cin >> innerMenuOperator;
		cout << endl;

		switch (innerMenuOperator) {
		case 1:
			surTypeChoice(patient);
			break;
		case 2:
			patient.calculateBalance();
			cout << "Patient ID: " << patient.getPatientID() << endl;
			cout << "Patient Name: " << patient.getName() << endl;
			cout <<	"Balance $" << fixed << patient.getBalance() << endl;
			cout << endl;
			break;
		case 3:
			patient.reportSummary();
			cout << endl;
			break;
		case 99:
			break;
		default:
			cout << "Only numbers from 1-3 or 99 are accepted!" << endl;
			break;
		}
	}
}

///////////////////////////////////////////////////////////////////////
//
// Function: surTypeChoice                                          
//                                                                   
// Description:
//    Provides a menu to choose a surgery type for the specified patient
//
// Parameters:  
//    patient  : the patient to manipulate and change the surgery type of                                         
//                                            
///////////////////////////////////////////////////////////////////////
void surTypeChoice(PatientAccount& patient) {

	int surTypeMenuOperator = 0;

	while (surTypeMenuOperator > 0 || surTypeMenuOperator < 5) {
		cout << "Enter 1: Liposuction" << endl;
		cout << "Enter 2: Nose Reshaping" << endl;
		cout << "Enter 3: Eyelid Surgery" << endl;
		cout << "Enter 4: Tummy Tuck" << endl;
		cin >> surTypeMenuOperator;
		cout << endl;

		switch (surTypeMenuOperator) {
		case 1:
			patient.setSurType(LIPOSUCTION);
			break;
		case 2:
			patient.setSurType(NOSE_RESHAPING);
			break;
		case 3:
			patient.setSurType(EYELID_SURGERY);
			break;
		case 4:
			patient.setSurType(TUMMY_TUCK);
			break;
		default:
			cout << "Only numbers from 1-4 are accepted!" << endl;
			break;
		}
		if (surTypeMenuOperator > 0 && surTypeMenuOperator < 5) {
			break;
		}
	}
}
