#include <stdio.h>
// #include<conio.h>
main()
{

	int n, ticket, total;
	char name[20];
	char mobile_no[10];
	char address[50];

	// //clrscr();

	printf("-----------------------Movie Ticketing Booking System-------------\n");

	printf("\n");
	printf("\t                        Welcome to our cinema                     \n");
	printf("\n");

	printf("Enter your Name : ");
	gets(name);

	printf("Enter your mobile no : ");
	gets(mobile_no);
	printf("Enter your Address   :  ");
	gets(address);
	printf("------------------------------------------------------------------\n");

	printf("\n\n");
	printf("Which type of movie you want see ?\n");
	printf("1.Hollywood\n");
	printf("2.Bollywood\n");
	printf("3.Tollywood\n");

	printf("Enter Your Choice :");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		////clrscr();
		printf("Do you Want to see Movie ?\n");
		printf("1.Drama\n");
		printf("2.Action\n");
		printf("3.Horror\n");
		printf("4.comedy\n");

		printf("Enter your choice :");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			////clrscr();
			printf("Available drama moive ..\n");
			printf("1.veda \n");
			printf("2.Wolfs\n");
			printf("3.Indian 2\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for veda .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for veda .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for veda .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for veda .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Wolf .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for wolfs .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for wolfs .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for wolfs .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Indian 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for indian 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for indain 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for indian 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice ...");
				break;
			}
			break;
		case 2:
			// clrscr();
			printf("Available Action moive ..\n");
			printf("1.civil War \n");
			printf("2.The killer\n");
			printf("3.Brothers\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for civil war.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for The civil war .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for civil war .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for civil war .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for The killer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for The killer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for the killer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for the killer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for brother .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for brothers.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for brother .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for brother .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice..");
				break;
			}
			break;
		case 3:
			// clrscr();
			printf("Available horror moive ..\n");
			printf("1.animale \n");
			printf("2.Tarot\n");
			printf("3.The watchers\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Tarot .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Tarot .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Tarot .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Tarot .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for The Watcher .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for The Watcher .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for the Watchers .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for The watchers.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice");
				break;
			}
			break;
		case 4:
			// clrscr();
			printf("Available comedy moive ..\n");
			printf("1.Hit Man \n");
			printf("2.Saturday night \n");
			printf("3.Airplane ! \n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Hit man .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Hit man .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Hit man .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Hit man .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Saturday night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Saturday night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for saturday night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Saturday night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for The Airplane ! .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcke for Airplane ! .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Airplane ! .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for The Airplane !\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice !!!");
				break;
			}
			break;
		default:
			printf("Invalid choice !!!");
			break;
		}

		break;

	case 2:

		////clrscr();
		printf("Do you Want to see Movie ?\n");
		printf("1.Drama\n");
		printf("2.Action\n");
		printf("3.Horror\n");
		printf("4.comedy\n");

		printf("Enter your choice :");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			////clrscr();
			printf("Available drama moive ..\n");
			printf("1.salaara \n");
			printf("2.govinda naam mera\n");
			printf("3.singham again\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				//		//clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for salaar .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					////clrscr();
					printf("Titcket for salaar .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						////clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for salaar .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for salaar .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for govinda naam mera .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for govinda naam mera .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for govinda naam mera .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for govinda naam mera .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for singham again .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for singham again .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for singham again .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for sigham again .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice...");
				break;
			}
			break;
		case 2:
			// clrscr();
			printf("Available Action moive ..\n");
			printf("1.pushpa 2 \n");
			printf("2.ranga\n");
			printf("3.animal\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for pushpa 2\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for pushpa 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for pushpa 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for pushpa 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for ranga .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for ranga .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for ranga .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for ranga .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket fo animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for animale.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for animale .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("invalid choice..");
				break;
			}
			break;
		case 3:
			// clrscr();
			printf("Available horror moive ..\n");
			printf("1.stree 2 \n");
			printf("2.Bhool bhulaiyaa 3\n");
			printf("3.Bhediya\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for stree 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for stree 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for stree 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for stree 2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Bhool bhulaiya 3 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Bhool bhulaiya 3 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Bhool bhulaiya 3 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Bhool bhulaiya 3 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Bhediya .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Bhediya .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Bhediya.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Bhediya.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("invalid choice..");
				break;
			}
			break;
		case 4:
			// clrscr();
			printf("Available comedy moive ..\n");
			printf("1.khel khel mein\n");
			printf("2.Bed news \n");
			printf("3.crew \n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for khel khel mein .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for khel khel mein.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for khel khel mein .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for khel khel mein .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for bed news .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for bed news .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for bed news .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for bed news .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for crew .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcke for crew .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for crew .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for crew \n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice !!!");
				break;
			}
			break;
		default:
			printf("Invalid choice !!!");
			break;
		}

		break;

	case 3:
		// clrscr();
		printf("Do you Want to see Movie ?\n");
		printf("1.Drama\n");
		printf("2.Action\n");
		printf("3.Horror\n");
		printf("4.comedy\n");

		printf("Enter your choice :");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			// clrscr();
			printf("Available drama moive ..\n");
			printf("1.The family star \n");
			printf("2.Gangs of godavari\n");
			printf("3.kalki\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for the family star.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for the family star .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for the family star .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for the family star .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Gangs of godavari .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for gangs of godavari .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for gangs of godavari .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for gangs of godavari .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for kalki .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for kalki .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for kalki .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for kalki .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice ...");
				break;
			}
			break;
		case 2:
			// clrscr();
			printf("Available Action moive ..\n");
			printf("1.Maharaja \n");
			printf("2.Yodha\n");
			printf("3.Yuva\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for maharaja.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for maharaja .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for maharaja .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for maharaja .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for yodha.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for yodha .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for yodha .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for yodha .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for yuva .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for yuva .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for yuva .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for yuva .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice..");
				break;
			}
			break;
		case 3:
			// clrscr();
			printf("Available horror moive ..\n");
			printf("1.Angry \n");
			printf("2.Blood And Black\n");
			printf("3.p2\n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for angry.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for angry .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for angry .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for angry .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for blood and black .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for blood and black .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for blood and black .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for blood and black .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for P2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for P2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for P2 .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for P2.\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice");
				break;
			}
			break;
		case 4:
			// clrscr();
			printf("Available comedy moive ..\n");
			printf("1.Varisu \n");
			printf("2.Jailer \n");
			printf("3.Good Night \n");

			printf("Enter the choice :");
			scanf("%d", &n);

			switch (n)
			{
			case 1:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Varisu .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Varisu .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Varisu .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Varisu .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;

			case 2:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Jailer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcket for Jailer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Jailer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Jailer .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			case 3:
				// clrscr();
				printf("Which time you want to see ?\n");
				printf("1.Morning :- 8:00 AM  \n");
				printf("2.Morning :- 11:00 AM \n");
				printf("3.Afternoon :- 3:00 PM \n");
				printf("4.Evening :- 8:00 PM \n");

				printf("Enter your choice :");
				scanf("%d", &n);

				switch (n)
				{
				case 1:
					// clrscr();
					printf("Titcket for Good Night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 2:

					// clrscr();
					printf("Titcke for Good Night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 3:

					// clrscr();
					printf("Titcket for Good Night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				case 4:

					// clrscr();
					printf("Titcket for Good Night .\n");
					printf("1.110 RS\n");
					printf("2. 250 RS\n");
					printf("3. 300 RS\n");

					printf("Enter your choice :");
					scanf("%d", &n);

					switch (n)
					{
					case 1:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (110);

						printf("Total + GST = %d", total + (18 / 100));

						break;

					case 2:
						// clrscr();
						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (250);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					case 3:
						// clrscr();

						printf("How many ticket do you want to buy?\n");
						scanf("%d", &n);
						total = n * (300);

						printf("Total + GST = %d", total + (18 / 100));

						break;
					default:
						printf("Invalid Choice..");
						break;
					}
					break;
				default:
					printf("invalid choice..");

					break;
				}

				break;
			default:
				printf("Invalid choice !!!");
				break;
			}
			break;
		default:
			printf("Invalid choice !!!");
			break;
		}

		break;

	default:

		printf("Invalid choice !!!");

		break;
	}
	////clrscr();
	printf("\n\n");
	printf("|--------------------------------------------------------------------|\n");
	printf("|                        MOVIE TICKET                                |\n");
	printf("|--------------------------------------------------------------------|\n");
	printf("|                                                                    |\n");

	printf("|                                                       Rajans cinema|\n");
	printf("|								     |\n");
	printf("|                                                   NAME : %s             |\n", name);
	printf("|                                                                    |\n");
	printf("|                                              MOBILE_NO : %s|\n", mobile_no);
	printf("|                                                                    |\n");
	printf("|                                                    ADDRESS : %s |\n", address);
	printf("|                                                                    |\n");
	printf("|                          	                    Total + GST = %d|\n", total + (18 / 100));
	printf("|                                                                    |\n");

	printf("|--------------------------------------------------------------------|\n");

	// getch();
}