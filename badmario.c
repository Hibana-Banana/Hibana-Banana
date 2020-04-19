int iNum;
printf("enter the height of the mario platform (<51): ");
scanf("%d", &iNum);
char sStr[60] = "char char char";

for (int i = 1; i <= iNum; i++) {
	for (int j = 0; j < iNum - i; j++) {
		printf(" ");
	}
	printf("%.*s", i, sStr);
	printf("\n");
}

return 0;