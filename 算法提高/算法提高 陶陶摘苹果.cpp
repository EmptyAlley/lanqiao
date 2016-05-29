算法提高 陶陶摘苹果
问题描述
　　陶陶家的院子里有一棵苹果树，每到秋天树上就会结出n个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
　　现在已知n个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
输入格式
　　输入包括两行数据。第一行只包括两个正整数n(5<=n<=200)和m(100<=m<=150),表示苹果数目和桃桃伸手可达到的高度（以厘米为单位）。第二行包含n个100到200之间（包括100和200）的整数（以厘米为单位）分别表示苹果到地面的高度，两个相邻的整数之间用一个空格隔开。
输出格式
　　输出包括一行，这一行只包含一个整数，表示陶陶能够摘到的苹果的数目。
样例输入
10 110


100 200 150 140 129 134 167 198 200 111
样例输出
5

#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if(m + 30 >= temp)
			cnt++;
	}
	cout << cnt;
	return 0;
}