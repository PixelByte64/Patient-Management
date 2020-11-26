///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: patientAccount.cpp
// Date: December 05, 2019
// Programmer: Samir Williams             
//
// Description:
//    Holds the definitions for the Function prototypes found in
//	  patientAccount.h
//
///////////////////////////////////////////////////////////////////////

#include"patientAccount.h"
#include<iostream>
#include<string>

using namespace std;

int PatientAccount::genID = 0;

//Function Definitions

///////////////////////////////////////////////////////////////////////
//
// Function: calculateBalance()                                          
//                                                                   
// Description:
//    Calculates the patients new balance after the surgery 
//		has been performed
//                                            
// Returns:  
//    double : returns the current patients new balance                 
//                                            
///////////////////////////////////////////////////////////////////////
double PatientAccount::calculateBalance() {
	static int count = 0;
	if (count == 0) {
		switch (surType) {
		case LIPOSUCTION:
			count++;
			balance -= 2500.00;
			return balance;
			break;
		case NOSE_RESHAPING:
			count++;
			balance -= 6000.00;
			return  balance;
			break;
		case EYELID_SURGERY:
			count++;
			balance -= 2450.00;
			return balance;
			break;
		case TUMMY_TUCK:
			count++;
			balance -= 12900.00;
			return balance;
			break;
		default:
			count++;
			balance -= 2500.00;
			return balance;
			break;
		}
	}
	else {
		return balance;
	}
}

///////////////////////////////////////////////////////////////////////
//
// Function: reportSummary()                                          
//                                                                   
// Description:
//    Outputs all the data for the current patient                
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::reportSummary() {

	int surType = getSurType();
	string surTypeName;
	
	if (surType == 0) {
		surTypeName += "Liposuction";
	}
	else if (surType == 1) {
		surTypeName += "Nose Reshaping";
	}
	else if (surType == 2) {
		surTypeName += "Eyelid Surgery";
	}
	else if (surType == 3) {
		surTypeName += "Tummy Tuck";
	}

	cout << "ID: " << getPatientID() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Gender: " << getGender() << endl;
	cout << "Days In Hospital: " << getDaysInHospital() << endl;
	cout << "Surgery Type: " << surTypeName << endl;
	cout << "Balance: $" << fixed << getBalance() << endl;
}

//Setters

///////////////////////////////////////////////////////////////////////
//
// Function: setPatientID()                                          
//                                                                   
// Description:
//    Sets the patient's ID to the specified value
//
// Parameters:  
//    patientID : number to change the current patient's ID too                         
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setPatientID(int patientID) {
	PatientAccount::patientID = patientID;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setBalance()                                          
//                                                                   
// Description:
//    Sets the patient's balance to the specified value
//
// Parameters:  
//    balance  : number to change the current patient's balance too                           
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setBalance(double balance) {
	PatientAccount::balance = balance;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setDaysInHospital()                                         
//                                                                   
// Description:
//    Sets the patient's days in hospital to the specified value
//
// Parameters:  
//    daysInHospital  : number to change the current patient's 
//		days in hospital too
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setDaysInHospital(int daysInHospital) {
	PatientAccount::daysInHospital = daysInHospital;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setSurType()                                          
//                                                                   
// Description:
//    Sets the patient's surgery type to the specified value
//
// Parameters:  
//    surType  : enum type to change the current patient's surgery type too               
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setSurType(SurgeryType surType) {
	PatientAccount::surType = surType;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setName()                                          
//                                                                   
// Description:
//    Sets the patient's name to the specified value
//
// Parameters:  
//    name  : string to change the current patient's name too               
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setName(string name) {
	PatientAccount::name = name;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setAge()                                          
//                                                                   
// Description:
//    Sets the patient's age to the specified value
//
// Parameters:  
//    age  : number to set the current patient's age too               
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setAge(int age) {
	PatientAccount::age = age;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setGender()             
//                                                                   
// Description:
//    Sets the patient's gender to the specified value
//
// Parameters:  
//    gender  : char to set the current patient's gender too               
//                                            
///////////////////////////////////////////////////////////////////////
void PatientAccount::setGender(char gender) {
	PatientAccount::gender = gender;
}

//Getters

///////////////////////////////////////////////////////////////////////
//
// Function: getPatientID()                                          
//                                                                   
// Description:
//    Returns the current patient's ID 
//                                                       
// Returns:  
//    int : returns the current patient's ID                 
//                                            
///////////////////////////////////////////////////////////////////////
int PatientAccount::getPatientID() {
	return patientID;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getBalance()                                          
//                                                                   
// Description:
//    Returns the current patient's balance
//
// Returns:  
//    double : Returns the current patient's balance                 
//                                            
///////////////////////////////////////////////////////////////////////
double PatientAccount::getBalance() {
	return balance;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getDaysInHospital()                                          
//                                                                   
// Description:
//    Returns the current patient's days in hospital
//                                                
// Returns:  
//    int : Returns the current patient's days in hospital                 
//                                            
///////////////////////////////////////////////////////////////////////
int PatientAccount::getDaysInHospital() {
	return daysInHospital;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getSurType()                                          
//                                                                   
// Description:
//    Returns the current patient's surgery type as a number (ex. 1, 2, 3, 4)
//                                        
// Returns:  
//    SurgeryType : Returns the current patient's surgery type                  
//                                            
///////////////////////////////////////////////////////////////////////
SurgeryType PatientAccount::getSurType() {
	return surType;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getName()                                          
//                                                                   
// Description:
//    Returns the current patient's name
//                                             
// Returns:  
//    string : Returns the current patient's name     
//                                            
///////////////////////////////////////////////////////////////////////
string PatientAccount::getName() {
	return name;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getAge()                                          
//                                                                   
// Description:
//    Returns the current patient's age
//                                                
// Returns:  
//    int : Returns the current patinet's age      
//                                            
///////////////////////////////////////////////////////////////////////
int PatientAccount::getAge() {
	return age;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getGender()                                         
//                                                                   
// Description:
//    Returns the current patinet's gender (ex. M, F)
//                                               
// Returns:  
//    char : Returns the current patient's gender               
//                                            
///////////////////////////////////////////////////////////////////////
char PatientAccount::getGender() {
	return gender;
}

//Random Patient Generators

///////////////////////////////////////////////////////////////////////
//
// Function: randBalance()                                          
//                                                                   
// Description:
//    Generates a random number between 100.00 and 2000.00 (inclusive)
//                            
// Returns:  
//    double : number to be used as a default balance for the patient                 
//                                            
///////////////////////////////////////////////////////////////////////
double PatientAccount::randBalance() {
	double balance = (rand() % 190100 + 10000) / 100;
	return balance;
}

///////////////////////////////////////////////////////////////////////
//
// Function: randDays()                                          
//                                                                   
// Description:
//    Generates a random number between 1 and 20 (inclusive)
//
// Returns:  
//    int : number to be used as a default daysInHospital for the patient                
//                                            
///////////////////////////////////////////////////////////////////////
int PatientAccount::randDays() {
	int days = rand() % 21 + 1;
	return days;
}

///////////////////////////////////////////////////////////////////////
//
// Function: randSurType()                                          
//                                                                   
// Description:
//    Generates a random number between 0 and 3 (inclusive).
//		It then used that number to determine which surgery type the patient gets
//		Defaulting to Liposuction
//
// Returns:  
//    SurgeryType : enum type to be used as a default surType for the patient                 
//                                            
///////////////////////////////////////////////////////////////////////
SurgeryType PatientAccount::randSurType() {
	int check = rand() % 4;
	switch (check) {
	case 0:
		return LIPOSUCTION;
		break;
	case 1:
		return NOSE_RESHAPING;
		break;
	case 2:
		return EYELID_SURGERY;
		break;
	case 3:
		return TUMMY_TUCK;
		break;
	default:
		return LIPOSUCTION;
		break;
	}
}

///////////////////////////////////////////////////////////////////////
//
// Function: randName()                                          
//                                                                   
// Description:
//    Generates a number between 0 and 9 (inclusive).
//		Takes the gender given to it and picks a name from a list to 
//		give to the patient
//
// Parameters:  
//    gender  : char given to determine what name should be given                         
//                                                       
// Returns:  
//    string : string to be used as a default name for the patient                 
//                                            
///////////////////////////////////////////////////////////////////////
string PatientAccount::randName(char gender) {
	int check = 0;
	check = rand() % 10;
	if (gender == 'M') {
		switch (check) {
		case 0:
			return "John";
			break;
		case 1:
			return "Jacob";
			break;
		case 2:
			return "Ben";
			break;
		case 3:
			return "Keaton";
			break;
		case 4:
			return "Brandon";
			break;
		case 5:
			return "Joel";
			break;
		case 6:
			return "Ivan";
			break;
		case 7:
			return "Jim";
			break;
		case 8:
			return "Eugene";
			break;
		case 9:
			return "Fredrick";
			break;
		default:
			return "Oskar";
			break;
		}
	}
	else if (gender == 'F') {
		switch (check) {
		case 0:
			return "Connie";
			break;
		case 1:
			return "Lillian";
			break;
		case 2:
			return "Polly";
			break;
		case 3:
			return "Brianna";
			break;
		case 4:
			return "Maria";
			break;
		case 5:
			return "Fern";
			break;
		case 6:
			return "Rita";
			break;
		case 7:
			return "Roxanne";
			break;
		case 8:
			return "Tanya";
			break;
		case 9:
			return "Melanie";
			break;
		default:
			return "Faye";
			break;
		}
	}
}

///////////////////////////////////////////////////////////////////////
//
// Function: randAge()                                          
//                                                                   
// Description:
//    Generates a number between 18 and 99 (inclusive)
//
// Returns:  
//    int : int to be used as a default age for the patient                 
//                                            
///////////////////////////////////////////////////////////////////////
int PatientAccount::randAge() {
	int age = rand() % 81 + 18;
	return age;
}

///////////////////////////////////////////////////////////////////////
//
// Function: randGender()                                          
//                                                                   
// Description:
//    Generates either a 0 or 1 to be used to determine the gender 
//		of the patient. Defaults to 'M'
//
// Returns:  
//    char : char to be used as a default gender for the patient                
//                                            
///////////////////////////////////////////////////////////////////////
char PatientAccount::randGender() {
	int check = rand() % 2;
	switch (check) {
	case 0:
		return 'M';
		break;
	case 1:
		return 'F';
		break;
	default:
		return 'M';
		break;
	}
}