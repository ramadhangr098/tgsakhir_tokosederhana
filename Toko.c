#include <stdio.h>

int main()
{
    int pilihan;
    int kode, harga, i = 1, total_pembelian = 0;
    char kar = 'y';

    printf("=======================================================================\n");
    printf("=                      WELCOME TO COMPANY                             =\n");
    printf("=======================================================================\n");
    printf("1. moons\n<<to see the list of moons the autopilot can route to>>\n2. store\n<<to see th company store of useful items>>\n");
    printf("enter options: \n");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("=======================================================================\n");
   		  printf("=                             MOONS                                   =\n");
   		  printf("=======================================================================\n");
        printf("1.Experimentation\n2.Assurance\n3.Vow\n4.Offense\n5.March\n6.Rend\n7.Dine\n8.Titan\n");

		while (kar == 'y'){
		printf("choose a planet %d: ", i);
        scanf("%d", &kode);
        fflush(stdin);

        if (kode == 1)
        {
            harga = 2000;
            printf("Experimentation 2000 = %d\n", harga);
        }
        else if (kode == 2)
        {
            harga = 5000;
            printf("Assurance 5000 = %d\n", harga);
        }
        else if (kode == 3)
        {
            harga = 12000;
            printf("Vow 12000 = %d\n", harga);
        }
        else if (kode == 4)
        {
            harga = 12000;
            printf("Offense 12000 = %d\n", harga);
        }
        else if (kode == 5)
        {
            harga = 12000;
            printf("March = %d\n", harga);
        }
        else if (kode == 6)
        {
            harga = 12000;
            printf("Rend 12000 = %d\n", harga);
        }
        else if (kode == 7)
        {
            harga = 18000;
            printf("Dine 18000 = %d\n", harga);
        }
        else if (kode == 8)
        {
            harga = 20000;
            printf("Titan 20000 = %d\n", harga);
        }
        else
        {
            printf("The planet you want is not available!");
        }
        
        printf("want to change goals? [y/t]: ");
        scanf(" %c", &kar);
        printf("=======================================================================\n");
        printf("=         ________                                ________            =\n");
        printf("=        | ______ |_                             | ______ |_          =\n");
        printf("=        |(______)| |                            |(______)| |         =\n");
        printf("=        |        | |   thank you for visiting   |        | |         =\n");
        printf("=        |   ___  |_|                            |   ___  |_|         =\n");
    	  printf("=        |__|   |_|                              |__|   |_|           =\n");
   		  printf("=======================================================================\n");
        i++;
		}
        break;

    case 2:
        printf("=======================================================================\n");
   		  printf("=                             STORE                                   =\n");
   		  printf("=======================================================================\n");
        printf("1.walkietalkie\n2.senter\n3.radio\n4.electric gun\n5.shovel\n6.triple bunk bed\n7.teleportsystem\n");

        while (kar == 'y')
        {
            printf("choose an item - %d: ", i);
            scanf("%d", &kode);
            fflush(stdin);

            if (kode == 1)
            {
                harga = 8000;
                printf("walkietalkie 8000 = %d\n", harga);
            }
            else if (kode == 2)
            {
                harga = 5000;
                printf("senter 5000 = %d\n", harga);
            }
            else if (kode == 3)
            {
                harga = 12000;
                printf("radio 12000 = %d\n", harga);
            }
            else if (kode == 4)
            {
                harga = 20000;
                printf("electric gun 20000 = %d\n", harga);
            }
            else if (kode == 5)
            {
                harga = 15000;
                printf("shovel 15000 = %d\n", harga);
            }
            else if (kode == 6)
            {
                harga = 18000;
                printf("tripel bunk bed 18000 = %d\n", harga);
            }
            else if (kode == 7)
            {
                harga = 30000;
                printf("teleportsytem 30000 = %d\n", harga);
            }
            else
            {
                printf("the item you want is not available!");
            }

            total_pembelian = total_pembelian + harga;
            printf("want to add stuff? [y/t]: ");
            scanf(" %c", &kar);
            i++;
        }
        printf("total purchases = %d\n", total_pembelian);
        printf("=======================================================================\n");
        printf("=         ________                                ________            =\n");
        printf("=        | ______ |_                             | ______ |_          =\n");
        printf("=        |(______)| |                            |(______)| |         =\n");
        printf("=        |        | |   thank you for visiting   |        | |         =\n");
        printf("=        |   ___  |_|                            |   ___  |_|         =\n");
    	  printf("=        |__|   |_|                              |__|   |_|           =\n");
   		  printf("=======================================================================\n");
        break;
    }

    return 0;
}
