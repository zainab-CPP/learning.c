#include <stdio.h>
#include <stdlib.h>
void print_under_100(int num);
void print_under_1000(int num);
void print_number(int num);


int main()
{
    int num;
    scanf("%d", &num);
    print_number(num);

    return 0;}

void print_under_100(int num)
{
    char *words[] =
    {
        "sefr",
        "yek",
        "do",
        "se",
        "char",
        "panj",
        "shesh",
        "haft",
        "hasht",
        "noh",
        "dah",
        "yazdah",
        "davazdah",
        "sizdah",
        "chardah",
        "panzdah",
        "shanzdah",
        "hefdah",
        "hejdah",
        "noozdah"
    };

    char *tens[] =
    {
        "",
        "",
        "bist",
        "si",
        "chehel",
        "panjah",
        "shast",
        "haftad",
        "hashtad",
        "navad"
    };

    if(num < 20)
    {
        printf("%s", words[num]);
    }
    else
    {
        int dahgan = num / 10;
        int yekan = num % 10;

        printf("%s", tens[dahgan]);

        if(yekan != 0)
        {
            printf(" o ");
            printf("%s", words[yekan]);
        }
    }
}

void print_under_1000(int num)
{
    char *hundreds[] =
    {
        "",
        "sad",
        "devist",
        "sisad",
        "charsad",
        "pansad",
        "sheshsad",
        "haftsad",
        "hashtsad",
        "nohsad"
    };

    if(num < 100)
    {
        print_under_100(num);
    }
    else
    {
        int sadgan = num / 100;
        int baghimande = num % 100;

        printf("%s", hundreds[sadgan]);

        if(baghimande != 0)
        {
            printf(" o ");
            print_under_100(baghimande);
        }
    }
}
void print_number(int num)
{
    if(num < 100)
    {
        print_under_100(num);
    }
    else if(num < 1000)
    {
        print_under_1000(num);
    }
    else if(num < 1000000)
    {
        int hezar = num / 1000;
        int baghimande = num % 1000;

        print_under_1000(hezar);
        printf(" hezar");

        if(baghimande != 0)
        {
            printf(" o ");
            print_under_1000(baghimande);
        }
    }


     else if(num < 1000000000)
{
    int million = num / 1000000;
    int baghimande = num % 1000000;

    print_number(million);
    printf(" million");

    if(baghimande != 0)
    {
        printf(" o ");
        print_number(baghimande);
    }
}


else if(num < 1000000000000)
{
    int milliard = num / 1000000000;
    int baghimande = num % 1000000000;

    print_number(milliard);
    printf(" milliard");

    if(baghimande != 0)
    {
        printf(" o ");
        print_number(baghimande);
    }
}


}
