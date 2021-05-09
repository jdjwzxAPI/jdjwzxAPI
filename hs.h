#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
//by jdjwzxAPI
//写了这么久！！！！！！！！！！！！！！
//妈妈再也不用担心我写不好C++啦！！！！！！！ 





//print类 
void print(string a) { //输出字符串 简称：pts
	cout<<a<<endl;
}
void pt(string a) { //输出字符串
	cout<<a<<endl;
}
void print(int a[],int len) { //输出数组！！！ 简称：pt
	for(int i=0; i<len; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void pt(int a[],int len) { //输出数组！！！
	for(int i=0; i<len; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void print(int a) { //输出整形 简称：pts
	cout<<a<<endl;
}
void pt(int a) { //输出整形
	cout<<a<<endl;
}
void print(char a) { //输出字符串 简称：pts
	cout<<a<<endl;
}
void pt(char a) { //输出字符串
	cout<<a<<endl;
}
void print(long long a) { //输出长整形 简称：pts
	cout<<a<<endl;
}
void pt(long long a) { //输出长整形
	cout<<a<<endl;
}
void print(string a,string b) { //输出拼接字符串 简称：pts               
		cout<<a<<b<<endl;
}
void pt(string a,string b) { //输出拼接字符串
		cout<<a<<b<<endl;
}
void print(string a,string b,string c) { //输出拼接字符串 简称：pts               
		cout<<a<<b<<c<<endl;
}
void pt(string a,string b,string c) { //输出拼接字符串
		cout<<a<<b<<c<<endl;
}
void print(string a,string b,string c,string d) { //输出拼接字符串 简称：pts               
		cout<<a<<b<<c<<d<<endl;
}
void pt(string a,string b,string c,string d) { //输出拼接字符串
		cout<<a<<b<<c<<d<<endl;
}
void print(string a,string b,string c,string d,string e) { //输出拼接字符串 简称：pts               
		cout<<a<<b<<c<<d<<e<<endl;
}
void pt(string a,string b,string c,string d,string e) { //输出拼接字符串
		cout<<a<<b<<c<<d<<e<<endl;
}










//swap类 
void mswap(int &a,int &b) { //交换函数 ！！！ 简称：mps
	int temp=a;
	a=b;
	b=temp;
}
void msp(int &a,int &b) { //交换函数 ！！！
	int temp=a;
	a=b;
	b=temp;
}
void mswap(char &a,char &b) { //交换函数 ！！！ 简称：mps
	char temp=a;
	a=b;
	b=temp;
}
void msp(char &a,char &b) { //交换函数 ！！！
	char temp=a;
	a=b;
	b=temp;
}
void mswap(string &a,string &b) { //交换函数 ！！！ 简称：mps
	string temp=a;
	a=b;
	b=temp;
}
void msp(string &a,string &b) { //交换函数 ！！！
	string temp=a;
	a=b;
	b=temp;
}
void mswap(long long &a,long long &b) { //交换函数 ！！！ 简称：mps
	long long temp=a;
	a=b;
	b=temp;
}
void msp(long long &a,long long &b) { //交换函数 ！！！
	long long temp=a;
	a=b;
	b=temp;
}










//排序类 
void maopao(int a[],int len) { //不用传入更改数组！！！！ 简称：mppx
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
void maopao(int a[],int len,int &b) { //需要传入需要更改的数组！！！！（记得加上*） 简称：mppx
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
void mppx(int a[],int len) { //不用传入更改数组！！！！
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
void mppx(int a[],int len,int &b) { //需要传入需要更改的数组！！！！（记得加上*） 
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












//比较类 
int mcompare(int a,int b){//比较a和b 简称：mcp 
	return a>b?a:b;
}
int mcp(int a,int b ){
	return a>b?a:b;
}
char mcompare(char a,char b){//比较a和b 简称：mcp 
	return (int)a>(int)b?a:b;
}
char mcp(char a,char b){
	return (int)a>(int)b?a:b;
}
string mcompare(string a,string b){//比较a和b 简称：mcp 
	return a>b?a:b;
}
string mcp(string a,string b){
	return a>b?a:b;
}
long long mcompare(long long a,long long b){//比较a和b 简称：mcp 
	return a>b?a:b;
}
long long mcp(long long a,long long b){
	return a>b?a:b;
}




//input类
 void input(string &a) { //输入字符串 简称：ipt 
	cin>>a;
}
void ipt(string &a) { //输入字符串
	cin>>a;
}
void input(int &a) { //输入整形 简称：ipt 
	cin>>a;
}
void ipt(int &a) { //输入整形
	cin>>a;
}
void input(char &a) { //输入字符 简称：ipt 
	cin>>a;
}
void ipt(char &a) { //输入字符
	cin>>a;
}
void input(long long &a) { //输入长整形 简称：ipt 
	cin>>a;
}
void ipt(long long &a) { //输入长整形
	cin>>a;
}



