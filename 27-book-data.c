#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int price;
    int pagecount;
};

int main()
{
    struct book s1 = {"Wings of fire", "APJ abdul kalam", 450, 250};
    struct book s2 = {"Man in a boat", "Rahul bose", 350, 250};
    struct book s3 = {"Something is wrong", "ACP pradyuman", 150, 210};
    struct book s4 = {"2 lines of code", "Shivam kedar", 150, 109};

    struct book booklist[] = {s1,s2,s3,s4};
    for (int i = 0; i < 4; i++)
    {
        printf("Title of the book: %s\n", booklist[i].title);
        printf("Book author:  %s\n", booklist[i].author);
        printf("price: Rs. %d\n", booklist[i].price);
        printf("page count: %d\n", booklist[i].pagecount);

    }

    return 0;
}