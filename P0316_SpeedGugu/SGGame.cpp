#include "SpeedGugu.h"
void main()
{
	srand((unsigned)time(NULL));

	int nPlay;

	printf("�� �� ������ �ϰ� �ͽ��ϱ�? => ");
	scanf_s("%d", &nPlay);

	printf("[���ǵ屸���ܰ���]\n\n");
	printf(" ����� ������ �Ƿ��� �׽�Ʈ�ϼ���!!!\n");
	printf(" %d�� �׽�Ʈ �ϰڽ��ϴ�.\n", nPlay);
	printf(" ũ�� ��ȣ�� �Ͻð�...\n �غ�Ǹ� ���͸� ��������...\n\n");
	getchar();
	//system("cls");	// �ܼ� ȭ���� ������ ����

	double score = playSpeedGugu(nPlay);
	printf("\n���� = %4.1f�� (�� %4.1f��)\n", score, tElapsed);
}