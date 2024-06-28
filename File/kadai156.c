#include<stdio.h>
#define DATA_END -1

struct animal
{
	int no;
	char name[99];
	struct color[99];
};
main()
{
	struct animal data[60] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * P_data = animaldata;
	
	int i;
	printf("1:データ表示　２:データの追加　３:データ検索　処理は？\nデータの追加を行いますので入力してください");
	for (i = 0; i < 3; i++)
	{
		printf("番号＞%4d\t", data[i].no);
		printf("名前＞%s\t", data[i]name);
		printf("色＞%s\n", data[i]color);

	}


}