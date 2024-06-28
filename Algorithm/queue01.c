#include<stdio.h>
#define QUEUESIZE 8

int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;
	do
	{
		printf("\n\nプッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);

			if (result == -1)
			{
				printf("\nスタックいっぱいだからもうやめろ\n");

			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\nスタック空からだからいれろ\n");

			}
			else
			{
				printf("\nスタックからデータ(%d)を盗んだ\n", data);
				display();
			}
		}
	} while (key != 'k');
}
	void display(void)
	{
		int i;
		printf("\n===今のスタックの内容");
		for (i = 0; i < QUEUESIZE; i++)
		{
			printf("stack[%2d]は%5d", i, queue[i]);
			if (i == head)
			{
				printf("headが示している所(現在はheadは%d)", head);
			}
			if (i == tail)
			{
				printf("tailが示している所(現在はtailは%d)", tail);
			}

			printf("\n");
		}
		return;
	}
	int enqueue(int d)
	{
		if ((tail+1) % QUEUESIZE==head) { return -1; }
		queue[tail]=d;
		tail++;
		tail = tail % QUEUESIZE;
		return 0;
	}
	int dequeue(int *pd)
	{
		if (head =tail) { return -1; }
		*pd = queue[head];
		queue[head] = 0;

		head++;
		 head=head % QUEUESIZE;
		return 0;
	}


