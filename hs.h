#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
//by jdjwzxAPI
//д����ô�ã���������������������������
//������Ҳ���õ�����д����C++���������������� 





//print�� 
void print(string a) { //����ַ��� ��ƣ�pts
	cout<<a<<endl;
}
void pt(string a) { //����ַ���
	cout<<a<<endl;
}
void print(int a[],int len) { //������飡���� ��ƣ�pt
	for(int i=0; i<len; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void pt(int a[],int len) { //������飡����
	for(int i=0; i<len; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void print(int a) { //����ַ��� ��ƣ�pts
	cout<<a<<endl;
}
void pt(int a) { //����ַ���
	cout<<a<<endl;
}
void print(char a) { //����ַ��� ��ƣ�pts
	cout<<a<<endl;
}
void pt(char a) { //����ַ���
	cout<<a<<endl;
}
void print(long long a) { //����ַ��� ��ƣ�pts
	cout<<a<<endl;
}
void pt(long long a) { //����ַ���
	cout<<a<<endl;
}











//swap�� 
void mswap(int &a,int &b) { //�������� ������ ��ƣ�mps
	int temp=a;
	a=b;
	b=temp;
}
void msp(int &a,int &b) { //�������� ������
	int temp=a;
	a=b;
	b=temp;
}
void mswap(char &a,char &b) { //�������� ������ ��ƣ�mps
	char temp=a;
	a=b;
	b=temp;
}
void msp(char &a,char &b) { //�������� ������
	char temp=a;
	a=b;
	b=temp;
}
void mswap(string &a,string &b) { //�������� ������ ��ƣ�mps
	string temp=a;
	a=b;
	b=temp;
}
void msp(string &a,string &b) { //�������� ������
	string temp=a;
	a=b;
	b=temp;
}
void mswap(long long &a,long long &b) { //�������� ������ ��ƣ�mps
	long long temp=a;
	a=b;
	b=temp;
}
void msp(long long &a,long long &b) { //�������� ������
	long long temp=a;
	a=b;
	b=temp;
}










//������ 
void maopao(int a[],int len) { //���ô���������飡������ ��ƣ�mppx
	int ls;
	for(int j=(len-1); j>0; j--) {
		for(int i=0; i<j; i++) {
			if(a[i]>a[i+1]) {
				mswap(a[i],a[i+1]);
			}
		}
	}
	print(a,len);
}
void maopao(int a[],int len,int &b) { //��Ҫ������Ҫ���ĵ����飡���������ǵü���*�� ��ƣ�mppx
	int ls;
	for(int j=(len-1); j>0; j--) {
		for(int i=0; i<j; i++) {
			if(a[i]>a[i+1]) {
				mswap(a[i],a[i+1]);
			}
		}
	}
	b=*a;
}
void mppx(int a[],int len) { //���ô���������飡������
	int ls;
	for(int j=(len-1); j>0; j--) {
		for(int i=0; i<j; i++) {
			if(a[i]>a[i+1]) {
				mswap(a[i],a[i+1]);
			}
		}
	}
	print(a,len);
}
void mppx(int a[],int len,int &b) { //��Ҫ������Ҫ���ĵ����飡���������ǵü���*�� 
	int ls;
	for(int j=(len-1); j>0; j--) {
		for(int i=0; i<j; i++) {
			if(a[i]>a[i+1]) {
				mswap(a[i],a[i+1]);
			}
		}
	}
	b=*a;
}












//�Ƚ��� 
int mcompare(int a,int b){//�Ƚ�a��b ��ƣ�mcp 
	return a>b?a:b;
}
int mcp(int a,int b){
	return a>b?a:b;
}
char mcompare(char a,char b){//�Ƚ�a��b ��ƣ�mcp 
	return (int)a>(int)b?a:b;
}
char mcp(char a,char b){
	return (int)a>(int)b?a:b;
}
string mcompare(string a,string b){//�Ƚ�a��b ��ƣ�mcp 
	return a>b?a:b;
}
string mcp(string a,string b){
	return a>b?a:b;
}
long long mcompare(long long a,long long b){//�Ƚ�a��b ��ƣ�mcp 
	return a>b?a:b;
}
long long mcp(long long a,long long b){
	return a>b?a:b;
}


