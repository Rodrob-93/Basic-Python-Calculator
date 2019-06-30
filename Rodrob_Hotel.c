
#include <stdio.h>
#include <conio.h>

int i,r;
int n=0;
int room[500];
int price[500];
int type[500];
int avail_rooms[500];
int a[500];

void print_Hotel_name()
{
	printf("\n\n********************RODROB's HOTEL********************\n\n");
}

void all_rooms()
{

        printf("These are the the rooms of the hotel:\n");
        for(i=0;i<n;i++)
        {
            printf("Room %d--",room[i]);
            if(a[i]==0)
                printf("Booked\t");
            else
                printf("Available\t");
            printf("Price:%d\t",price[i]);
            if(type[i]==0)
                printf("Type:Non AC\n");
            else
                printf("Type:AC\n");
        }
}

void all_available_rooms()
{
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("Room %d\tPrice:%d\t",room[i],price[i]);
            if(type[i]==0)
                printf("Type:Non AC\n");
            else
                printf("Type:AC\n");
        }
    }
    if(n==0)
    {
        printf("No rooms are added in this hotel. Please add some rooms first!");
    }
}

void book_room()
{
    correct_book_room:
    printf("Enter the room no to book:");
    scanf("%d",&r);
    int room_book_count=0;
    for(i=0;i<n;i++)
    {
        if(r==room[i]&&a[i]==1)
        {
            a[i]=0;
            printf("Room successfully booked.\n Your bill is Rs.%d\n",price[i]);
            room_book_count++;
        }
    }
    if(room_book_count==0)
    {
        printf("Please enter a valid room no:\n");
        goto correct_book_room;
    }
}

void check_out()
{
    int room_book_count=0;
    correct_checkout:
    printf("Which room do you want to check out?\n");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r==room[i]&&a[i]==0)
        {
            a[i]=1;
            printf("Room checked out!\n Thank you for visiting us!\n");
            room_book_count++;
        }
    }
    if(room_book_count==0)
    {
        printf("Please enter a valid room number.\n");
        goto correct_checkout;
    }
}

void add_room()
{
    proper_room:
    printf("Enter room nos only between 0-499 to add or edit:");
    scanf("%d",&room[n]);
    if(room[n]>=500)
    {
        printf("Invalid room no\n");
        goto proper_room;
    }
    avail_rooms[n]=room[n];
    printf("Enter price:");
    scanf("%d",&price[n]);
    printf("Enter type:\n0-Non AC\n1-AC\n");
    scanf("%d",&type[n]);
    a[n]=1;
    n++;
}

void statement()
{
    printf("There are no rooms in the hotel. Please add some rooms first!\n");
}


int main(int argc, char const *argv[])
{
	char choice,option;
	print_Hotel_name();
        do
        {
            Robins_Hotel_Menu:
            printf("\n***************MAIN MENU***************\na-All rooms\nv-Available rooms\nb-Book room\nc-Check out of room\nd-Add rooms\n");
            scanf(" %c",&choice);
            switch(choice)
            {
                case 'a':
                    if(n==0)
                    {
                        statement();
                        goto Robins_Hotel_Menu;
                    }
                    all_rooms();
                    break;
                case 'v':
                    if(n==0)
                    {
                        statement();
                        goto Robins_Hotel_Menu;
                    }
                    all_available_rooms();
                    break;
                case 'b':
                    if(n==0)
                    {
                        statement();
                        goto Robins_Hotel_Menu;
                    }
                    book_room();
                    break;
                case 'c':
                    if(n==0)
                    {
                        statement();
                        goto Robins_Hotel_Menu;
                    }
                    check_out();
                    break;
                case 'd':
                    if(n==500)
                    {
                        printf("Sorry,Hotel full! Can't add more room!\nPlease check out some rooms first!\n");
                        goto Robins_Hotel_Menu;
                    }
                    add_room();
                    break;
                default:
                    printf("Invalid option\n");
                    goto Robins_Hotel_Menu;
            }
            ask_me:
            printf("Do you want to continue or quit the hotel:\nY-continue\n'any key'-quit\n");
            scanf(" %c",&option);
        }while(option=='Y'||option=='y');

	return 0;
}
