/*梅语冰 计科3班 1652311*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(int argc, char *argv[]) {
	int i = 0, j;
	char filepath[100];
	char ch[16] = { 0 };
	ifstream fin;

	if (argc == 2) {
		strcpy(filepath, argv[1]);
	}
	if (argc == 1) {
		cout << "请输入文件路径:";
		cin >> filepath;
	}
	fin.open(filepath, ios::binary|ios::in);
	if (fin.is_open() == 0) {
		cout << "打开文件失败" << endl;
		return 0;
	}

	for (j = 0;; j++) {
			cout << fin.tellg() << "    ";
			for (i = 0; i < 16&&ch[i]!=EOF; i++) {
				fin.read((char *)&ch[i], sizeof(ch[i]));
				cout << fin.gcount() << " ";
				if (i == 7)
					cout << "-";
			}
			if (ch[i] == EOF)
				break;
			cout << "     ";
			cout << ch << endl;		
		}	
	
}