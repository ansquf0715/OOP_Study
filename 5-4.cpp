#include <cstdio>

#define WIDTH 17
#define HEIGHT 5

void label(unsigned char img[HEIGHT][WIDTH], int x, int y, int color)
{
	//���� ����
	if (x < 0 || y < 0 || x >= WIDTH || y >= HEIGHT || img[y][x] != 9)
		return;
	label(img, x - 1, y, color);
	label(img, x, y - 1, color);
	label(img, x + 1, y, color);
	label(img, x, y + 1, color);
}

void blobColoring(unsigned char img[HEIGHT][WIDTH])
{
	int color = 1;
	for (int y = 0; y < HEIGHT; y++)
		for (int x = 0; x < WIDTH; x++)
			if (img[y][x] == 9)
				label(img, x, y, color++);
}

void printImage(unsigned char img[HEIGHT][WIDTH], const char* msg)
{
	printf("%s\n", msg);
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (img[y][x] == 0) printf(".");
			else printf("%d", img[y][x]);
		}
		printf("\n");
	}
	printf("\n");
}
int& getCount()
{
	static int count = 0;
	count++;

	return count;
}

int main()
{
	for (int i = 0; i < 5; i++)
		printf("count = %d\n", getCount());
	getCount() = 10;
	
	for (int i = 0; i < 5; i++)
		printf("count = %d\n", getCount());

	 unsigned char image[HEIGHT][WIDTH] = {
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,9,9,9,9,0,0,0,9,0,0,0,0,0,9,0,0,
		9,9,0,0,0,0,9,9,9,9,9,0,9,9,9,9,9,
		0,9,9,9,9,0,0,0,9,0,0,0,0,0,9,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};

	printImage(image, "<Original image>");
	blobColoring(image);
	printImage(image, "<Labbeled image>");
}