///////////////////////////////////////////////////////////////////////
//
// Class: patientAccount                                          
//                                                                   
// Description:
//    Stores a single Patients data         
//
//	  List of Data Members:
//    enum SurgeryType{};
//	  static int genID;
//	  int patientID;
//    double balance;
//    int daysInHospital;
//    SurgeryType surType;
//    string name;
//    int age;
//    chat gender;
//
//    List of Member Functions:
//    void setPatientID(int id);
//    void setBalance(double balance);
//    void setDaysInHospital(int daysInHospital);
//    void setSurType(SurgeryType surType);
//    void setName(string name);
//    void setAge(int age);
//    void setGender(char gender);
//    
//    int getPatientID();
//    double getBalance();
//    int getDaysInHospital();
//    SurgeryType getSurType();
//    string getName();
//    int getAge();
//    char getGender();
//
//   double calculateBalance();
//   void reportSummary();
//
//	 static double randBalance();
//	 static int randDays();
//	 static SurgeryType randSurType();
//	 static string randName(char);
//	 static char randGender();
//	 static int randAge();
// 
///////////////////////////////////////////////////////////////////////

#pragma once

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

enum SurgeryType {
	LIPOSUCTION,
	NOSE_RESHAPING,
	EYELID_SURGERY,
	TUMMY_TUCK
};

class PatientAccount
{	
	private:
		static int genID;
		int patientID;
		double balance;
		int daysInHospital;
		SurgeryType surType;
		string name;
		int age;
		char gender;

	public:

	//Default Constructor
	PatientAccount() {
		this->genID += 100;
		this->patientID = genID;
		this->balance = randBalance();
		this->daysInHospital = randDays();
		this->surType = randSurType();
		char gender = randGender();
		this->gender = gender;
		this->name = randName(gender);
		this->age = randAge();
	};

	//Overloaded Constructor
	PatientAccount(int patientID, double balance, int daysInHospital, SurgeryType surType, string name, int age, char gender){
		this->patientID = patientID;
		this->balance = balance;
		this->daysInHospital = daysInHospital;
		this->surType = surType;
		this->age = age;
		this->gender = gender;
		this->name = name;
	};

	//Deconstructor
	~PatientAccount() {};

	//Setters
	void setPatientID(int id);
	void setBalance(double balance);
	void setDaysInHospital(int daysInHospital);
	void setSurType(SurgeryType surType);
	void setName(string name);
	void setAge(int age);
	void setGender(char gender);

	//Getters
	int getPatientID();
	double getBalance();
	int getDaysInHospital();
	SurgeryType getSurType();
	string getName();
	int getAge();
	char getGender();

	//Function Prototypes
	double calculateBalance();
	void reportSummary();

	//Random Patient Generator Function Prototypes
	private:
		static double randBalance();
		static int randDays();
		static SurgeryType randSurType();
		static string randName(char);
		static char randGender();
		static int randAge();
};