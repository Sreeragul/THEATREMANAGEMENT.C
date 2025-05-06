//location
//theater
//movies
//date
//timings
//seats
//amount
//snacks
//bill
//exit
//ratings
//#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main() {
//    // Set the locale to support UTF-8
//    setlocale(LC_ALL, "");
//
//    // Top-left corner
//    wprintf(L"Top-left: ╭\n");
//
//    // Top-right corner
//    wprintf(L"Top-right: ╮\n");
//
//    // Bottom-left corner
//    wprintf(L"Bottom-left: ╰\n");
//
//    // Bottom-right corner
//    wprintf(L"Bottom-right: ╯\n");
//
//    return 0;
//}



#include <wchar.h>
#include <locale.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Cinema{
    char location[50];
    char theatre[50];
    char movies[50];
    char date[50];
    char timings[50];
    char seats[50];
    int  ticket_amount;
    char snacks[50];

}c;

const char locations[5][500]={ " SALEM "," KOVAI "," CHENNAI "," MADURAI "," BANGLORE "};

const char s_theatres[3][50]={"ARRS","ROX","ASCARS"};
const char k_theatres[3][50]={"BROADWAY","Kauvery","FUNMALL"};
const char c_theatres[3][50]={"Sathyam","Rohini","INOX"};
const char m_theatres[3][50]={"VETRI","GOPURAM","INOX"};
const char b_theatres[3][50]={"URVASHI","PVR ORION","MUKUNDAN"};

const char movies[7][50]={" Sachein  ","   GBU    ","   Retro   ","    U     ","   U/A    ",
                            "    U/A    "};

const char date[3][50]={__DATE__,__DATE__,__DATE__};

const char timings[5][50]={"8.30 AM","12.00 PM","4.00 PM","7.00 PM","10.00 PM"};

const char seats[1000][1000]={"\n","               ╭────────────────────────────────────────────────────────────────╮\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               │\t"," ","  ","1","2","3","   ","4","5","6","7","   ","8","9","10","\t","│\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               │\t","A","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","B","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","C","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               │\t","D","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","E","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","F","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","G","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","H","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","I","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t","J","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               │\t\t╰────────────────────────────────────╯\t\t  │\n",
                           "               │\t\t\t\t\t\t\t\t  │\n",
                           "               ╰────────────────────────────────────────────────────────────────╯\n"};

//const char seats[1000][1000]={"\n","□ a1","a2","a3","   ","a4","a5","a6","a7","   ","a8","a9","a10","\n",
//                           "b1","b2","b3","   ","b4","b5","b6","b7","   ","b8","b9","b10","\n",
//                           "c1","c2","c3","   ","c4","c5","c6","c7","   ","c8","c9","c10","\n",};

const char amount[3][100]={"First class = 200","Second class = 180","Front Row 60"};

const char snacks[3][100]={"│ Popcorn 100 │","  │ Coca cola 40 │","│ Puffs 50 │"};

int main(){
    printf("J.SREERAGUL");
    system("chcp 65001");
    char location[500];
    printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │  *********BOOK MY SHOW*********  │\n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n\n");
    printf("────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────");

    printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │        SELECT YOUR LOCATION      │   \n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n\n");

    printf("╭─────────╮\t╭─────────╮\t╭───────────╮\t╭───────────╮\t╭────────────╮\n");
    for(int i=0;i<5;i++){
        printf("│ %s │ \t",locations[i]);
    }
   printf("\n╰─────────╯\t╰─────────╯\t╰───────────╯\t╰───────────╯\t╰────────────╯\n");

    printf("\nKINDLY ENTER YOUR LOCATION:");
    scanf("%s",c.location);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────");

    printf("                                     ╭──────────────────────────────────╮\n");
        printf("                                     │        SELECT YOUR THEATER       │      \n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n\n");

        if(strcmp(c.location,"salem")==0){
        printf("╭───────╮\t╭──────╮\t╭─────────╮\n");
                for(int i=0;i<3;i++){
                    printf("│ %s  │\t",s_theatres[i]);
                }
                 printf("\n╰───────╯\t╰──────╯\t╰─────────╯\n");
           }else if(strcmp(c.location,"kovai")==0){
               printf("╭──────────╮\t╭─────────╮\t╭─────────╮\n");
                for(int i=0;i<3;i++){
                    printf("│ %s │\t",k_theatres[i]);
                }
                 printf("\n╰──────────╯\t╰─────────╯\t╰-─────────╯\n");


           }else if(strcmp(c.location,"chennai")==0){
                printf("╭──────────╮\t╭─────────╮\t╭───────╮\n");
                for(int i=0;i<3;i++){
                    printf("│ %s  │\t",c_theatres[i]);
                }
                 printf("\n╰──────────╯\t╰─────────╯\t╰───────╯\n");
           }else if(strcmp(c.location,"madurai")==0){
                printf("╭────────╮\t╭──────────╮\t╭───────╮\n");
               for(int i=0;i<3;i++){
                    printf("│ %s  │\t",m_theatres[i]);
           }
            printf("\n╰────────╯\t╰──────────╯\t╰───────╯\n");
           }else if(strcmp(c.location,"banglore")==0){
                printf("╭──────────╮\t╭────────────╮\t╭───────────╮\n");
               for(int i=0;i<3;i++){
                    printf("│ %s │\t",b_theatres[i]);
           }
            printf("\n╰──────────╯\t╰────────────╯\t╰───────────╯\n");
           }

           printf("\nENTER THEATER NAME:");
           scanf("%s",&c.theatre);
           printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");


           printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │      🎬 SELECT YOUR MOVIE 🎬     │\n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n");;

    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");

    for(int i=0;i<3;i++){
        printf("│ %s │ \t",movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",movies[i]);
    }

    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
    printf("ENTER THE MOVIE NAME:");
    scanf("%s",&c.movies);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\n\n");


 printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │       🗓️ SELECT THE DATE         │\n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n");

    printf("╭───────────────╮╭───────────────╮╭───────────────╮\n");
    for(int i = 0; i < 3; i++) {
        printf("│  %-13s│", date[i]);  // %-13s left-aligns the string in 13 characters
    }
    printf("\n╰───────────────╯╰───────────────╯╰───────────────╯\n");
    printf("\n\nENTER  DATE HERE:");
    scanf("%s",&c.date);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");


    printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │       ⏰ SELECT TIMING           │\n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n");
 printf("╭────────────╮╭────────────╮╭────────────╮╭────────────╮╭────────────╮\n");
    for(int i = 0; i < 5; i++) {
        printf("│  %-8s  │", timings[i]);  // 8 characters + 2 padding = fits the box
    }
    printf("\n╰────────────╯╰────────────╯╰────────────╯╰────────────╯╰────────────╯\n");
    printf("\n\nENTER TIMING HERE:");
    scanf("%s",&c.timings);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");


 printf("                                     ╭──────────────────────────────────╮\n");
    printf("                                     │     🎟️ SELECT YOUR SEAT'S        │\n");
    printf("                                     ╰──────────────────────────────────╯\n\n\n");
    for(int i=0;i<198;i++){
        printf("%s  ",seats[i]);
    }

//fflush(stdin); // or use:
while (getchar() != '\n');
printf("\n\nENTER THE NUMBER OF SEAT'S:");
fgets(c.seats, sizeof(c.seats), stdin);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");


printf("                                     ╭──────────────────────────────────╮\n");
printf("                                     │       💰 SELECT THE AMOUNT       │\n");
printf("                                     ╰──────────────────────────────────╯\n\n\n");
printf("╭───────────────────╮\t╭────────────────────╮\t╭──────────────╮\n");
for (int i = 0; i < 3; i++) {
    printf("│%s  │\t", amount[i]);
}
printf("\n╰───────────────────╯\t╰────────────────────╯\t╰──────────────╯");

    printf("\n\nENTER THE AMOUNT HERE:");
    scanf("%c",&c.ticket_amount);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");



printf("                                     ╭──────────────────────────────────╮\n");
printf("                                     │       🍿 SELECT THE SNACK        │\n");
printf("                                     ╰──────────────────────────────────╯\n\n\n");
printf("╭─────────────╮\t  ╭──────────────╮\t╭──────────╮\n");
        for(int i=0;i<3;i++){
        printf("%s\t",snacks[i]);
    }   printf("\n╰─────────────╯\t  ╰──────────────╯\t╰──────────╯");

    printf("\nENTER THE SNACK NAME HERE:");
    while (getchar() != '\n');
    scanf("%s",c.snacks);
    printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");

    int snacks_amount=0;
    if(strcmp(c.snacks,"popcorn")==0){
        snacks_amount=100;
    }else if(strcmp(c.snacks,"coca cola")==0){
        snacks_amount=40;
    }else if(strcmp(c.snacks,"puffs")==0){
        snacks_amount=50;
    }


    int ticket_count = strlen(c.seats)/3;
    int ticket_amount = c.ticket_amount*ticket_count;
    float cgst =(float) 0.09*ticket_amount;
    float sgst =(float)0.09*ticket_amount;
    float total_amount = ticket_amount + cgst + sgst + snacks_amount;

    printf("\n\             ══════════════════════════════════════════════════════════════════\n");
    printf("                                 🎟️  BOOK MY SHOW TICKET                       \n");
    printf("             ══════════════════════════════════════════════════════════════════\n");
    printf("              Theatre       : %-52s\n", c.theatre);
    printf("              Location      : %-52s\n", c.location);
    printf("              Booking ID    : %-52s\n", "81297");
    printf("              Date          : %-52s\n", c.date);
    printf("              Timing        : %-52s\n", c.timings);
    printf("              Movie         : %-52s\n", c.movies);
    printf("              Seats         : %-52s\n", c.seats);
    printf("             ══════════════════════════════════════════════════════════════════\n");
    printf("              Ticket Price  : ₹%-51d\n", ticket_amount);
    printf("              Snacks Price  : ₹%-51d\n", snacks_amount);
    printf("              CGST (9%%)      : ₹%-50.2f\n", cgst);
    printf("              SGST (9%%)      : ₹%-50.2f\n", sgst);
    printf("              TOTAL AMOUNT  : ₹%-51.2f\n", total_amount);
    printf("             ══════════════════════════════════════════════════════════════════\n\n\n");

    printf("    ╭─────────────────────────────────────────────────────────────────────────────────────────╮\n");
    printf("    │       ******************\tIMPORTANT DESCRIPTION\t********************                  │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 Tickets & food once ordered cannot be exchanged, cancelled or refunded.              │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 Children aged 3 years and above will require a separate ticket.                      │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 Kindly deposit items at the baggage counter of the mall.                             │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 Please check the suitability of the movie as per the Censor Board rating.            │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 A: Viewing restricted to adults above 18 years only.                                 │\n");
    printf("    │                                                                                         │\n");
    printf("    │ 🔘 U/A: Unrestricted public exhibition with parental guidance for children below age 12.│\n");
    printf("    │                                                                                         │\n");
    printf("    ╰─────────────────────────────────────────────────────────────────────────────────────────╯\n");





FILE *ptr;

ptr=fopen("Movie_ticket_bill.txt","w");

    fprintf(ptr,"\n|Book My Show\t\t\t\t%s\n",c.theatre);
    fprintf(ptr,"\t\t\t\t\t%s\n",c.location);
    fprintf(ptr,"\n────────────────────────────────────────────────\n");
    fprintf(ptr,"Booking ID: 81297 \t\t    %s\n",c.date);
    fprintf(ptr,"Paytm Order ID: 19273456  %s\n\n",c.timings);
    fprintf(ptr,"%s\n",c.movies);
    fprintf(ptr,"%s\n\n",c.seats);


        fprintf(ptr,"\tTicket Amount : %d\n",ticket_amount);
    fprintf(ptr,"\tSnacks        : %d\n",snacks_amount);
    fprintf(ptr,"\tcgst          : %f\n",cgst);
    fprintf(ptr,"\tsgst          : %f\n\n",sgst);
    fprintf(ptr,"\tTotal Amount  : %f\n\n",total_amount);

    fprintf(ptr,"\n────────────────────────────────────────────────\n");
    fprintf(ptr,"|Important Notes:\t|\n\n");
fprintf(ptr,"Tickets & food once ordered cannot be exchanged,\ncancelled or refunded.\n");
fprintf(ptr,"Children aged 3 years and above will require a \nseparate ticket.\n");
fprintf(ptr,"Kindly deposit at the baggage counter of mall.\n");
fprintf(ptr,"Please check the suitability of the movie as\n per the Censor Board rating.\n\n");
fprintf(ptr," U: Unrestricted Public Exhibition throughout\n India, suitable for all age groups\n");
fprintf(ptr," A: Viewing restricted to adults above 18\n years only\n");
fprintf(ptr," U/A: Unrestricted public exhibition with\n parental guidance for children below age 12\n");


fclose(ptr);
printf("                              │Bill Generated Success fully│\n");
printf("\n\n\n────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
}

