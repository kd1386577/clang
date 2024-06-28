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
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);

			if (result == -1)
			{
				printf("\n�X�^�b�N�����ς������������߂�\n");

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
				printf("\n�X�^�b�N�󂩂炾���炢���\n");

			}
			else
			{
				printf("\n�X�^�b�N����f�[�^(%d)�𓐂�\n", data);
				display();
			}
		}
	} while (key != 'k');
}
	void display(void)
	{
		int i;
		printf("\n===���̃X�^�b�N�̓��e");
		for (i = 0; i < QUEUESIZE; i++)
		{
			printf("stack[%2d]��%5d", i, queue[i]);
			if (i == head)
			{
				printf("head�������Ă��鏊(���݂�head��%d)", head);
			}
			if (i == tail)
			{
				printf("tail�������Ă��鏊(���݂�tail��%d)", tail);
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


