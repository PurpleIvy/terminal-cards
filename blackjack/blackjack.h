void blackjack(void);
void maingame(void);


void blackjack(void)
{
	printf("Welcome to Blackjack!\n");
	printf("Press S to start the game or Q to quit\n");
	char a;
	a = getchar();

		while (a != 'Q' || a != 'q') 
		{
			if (a == 'Q' || a == 'q')
			{	printf("Quitting Blackjack!\n");
				break;
			}
			
			else

			{
				maingame();
				printf("Press to Retry, Type Q to Exit\n");
				a = getchar();
			}
		}
		return;

}

void maingame(void)
{
	printf("Game loop\n");

	return;
}
