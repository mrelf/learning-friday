//integer user selection function
int GOL_userSelectionInt()
{
	int userSelect;
	scanf("%d", &userSelect);
	system("cls");
	return userSelect;
}

//integer user selection function
const char* GOL_userSelectionChar()
{
	const char* ans;
	scanf(" %c", &ans);
	return (char*)ans;
}