#pragma once
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

using namespace std;

struct Data {
	unsigned int price, amount;
	char author[32];
	char title[32];
};
extern int is_saved;


void SavingData_c(Data* d, int n, char* fileName);
void ReadingData_c(Data* (&d), int& n, char fileName[]);
void DataEntry(Data* (&d), int& n); //���� ������ �������
void ReadingData(Data* (&d), int& n, char fileName[]);//������ ������ �� �����
void Print(Data* d, int n, int is_saved); //����� ������
void DataChange(Data* (&d), int n);//��������� ������
void DeleteData(Data* (&d), int& n);//�������� ������
void Copy(Data* (&d_n), Data* (&d_o), int n); //����� ������
void Copy(Data& d_n, Data& d_o); //����� ������ ��������
void AddData(Data* (&d), int& n); //�������� ������
void DataSorting(Data* d, int n);//���������� ������
void SavingData(Data* d, int n, char* fileName);//���������� ������
void dSwap(Data& d_n, Data& d_o);  //�������� ������� ������ � ���������
int TitleLen(char* str, int i, Data* d); 
int AuthLen(char* str, int i, Data* d);
int m_NazvLen(Data* d, int n);
int m_AuthLen(Data* d, int n);
int m_PricLen(Data* d, int n);
int m_AmouLen(Data* d, int n);
int IntLen(Data* d, int integer);
void DataSearching(Data* d, int n);
void FindMax(Data* d, int n);