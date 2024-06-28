#include<stdio.h>

struct animal
{
	int no;
	char name[99];
	struct color[99];
};
main()
{
	struct animal  data[60] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal*p_data=data;

	int i;
	printf("1:データ表示　２:データの追加　３:データ検索　処理は？\nデータの追加を行いますので入力してください");
	for (i = 0; i < 3; i++)
	{
		printf("番号＞%4d\t",p_data->no);
		printf("名前＞%s\t", p_data->name);
		printf("色＞%s\n", p_data->color);
		*p_data++;
	}



}