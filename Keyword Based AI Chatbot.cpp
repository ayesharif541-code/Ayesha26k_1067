#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void math();
void english();
void programming();
void conversation();
long long factorial(int n);
void makeLowercase(char text[]);
void saveChat(char userMessage[], char aiMessage[]);
void viewChat();

struct user
{
    char name[50];
    int age;
};

int main()
{
    int choice;
    struct user currentUser;
    struct user *ptr = &currentUser;

    printf("Enter your name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &ptr->age);

    printf("\t***** WELCOME TO AI CHATBOT *****\n \n");
    printf("Hello! I am your AI Chatbot. How can I help you? \n");

    do
    {
        printf("-----Available Topics----- \n");
        printf("Enter:\n1- basic Math.\t\t2- basic English. \n");
        printf("3- basic Programming.\t4- Casual Conversation. \n");
        printf("5- View Chat History. \n");
        printf("6- Exit. \n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                math();
                break;

            case 2:
                english();
                break;

            case 3:
                programming();
                break;

            case 4:
                conversation();
                break;

            case 5:
                viewChat();
                break;

            case 6:
                printf("AI: Goodbye! see you again! \n");
                break;

            default:
                printf("AI: Invalid output.");
                break;
        }

    }
    while(choice != 6);

    return 0;
}

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

void makeLowercase(char text[])
{
    int i = 0;

    while(text[i] != '\0')
    {
        text[i] = tolower((unsigned char)text[i]);
        i++;
    }
}

void saveChat(char userMessage[], char aiMessage[])
{
    FILE *fp;

    fp = fopen("chat_history.txt", "a");

    if(fp != NULL)
    {
        fprintf(fp, "You: %s\n", userMessage);
        fprintf(fp, "AI: %s\n", aiMessage);
        fprintf(fp, "-------------------------\n");

        fclose(fp);
    }
}

void viewChat()
{
    FILE *fp;
    char line[200];

    fp = fopen("chat_history.txt", "r");

    if(fp == NULL)
    {
        printf("AI: No chat history found. \n");
        return;
    }

    printf("\n----- CHAT HISTORY -----\n");

    while(fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
}

void math()
{
    int mchoice, n;
    float num;

    printf("\n");
    printf("----- Welcome to Math Section ----- \n");

    do
    {
        printf("\n");
        printf("AI: What can I solve for you? \n");
        printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Power \n6. Square Root \n7. Modulus \n8. Percentage \n9. Factorial \n10. Back to Main Menu \n");
        printf("Your Choice: ");
        scanf("%d", &mchoice);

        switch(mchoice)
        {
            case 1:
            {
                float sum = 0;

                printf("AI: How many numbers do you want to add. \n");
                printf("You: ");
                scanf("%d", &n);
                printf("AI: Please enter numbers. \n");
                printf("You: ");

                for(int i = 1; i <= n; i++)
                {
                    scanf("%f", &num);
                    sum = sum + num;
                }

                printf("AI: The sum is %.2f \n", sum);
                break;
            }

            case 2:
            {
                float sub;

                printf("AI: How many numbers do you want to subtact. \n");
                printf("You: ");
                scanf("%d", &n);

                if(n >= 2)
                {
                    printf("AI: Enter number 1. \n");
                    printf("You: ");
                    scanf("%f", &sub);

                    for(int i = 2; i <= n; i++)
                    {
                        printf("AI: Enter number %d. \n", i);
                        printf("You: ");
                        scanf("%f", &num);

                        sub = sub - num;
                    }

                    printf("AI: The answer is %.2f. \n", sub);
                }
                else
                {
                    printf("AI: Enter atleast 2 numbers. \n");
                }

                break;
            }

            case 3:
            {
                float product = 1;

                printf("AI: How many numbers do you want to multiply. \n");
                printf("You: ");
                scanf("%d", &n);
                printf("AI: Please enter numbers. \n");
                printf("You: ");

                for(int i = 1; i <= n; i++)
                {
                    scanf("%f", &num);
                    product = product * num;
                }

                printf("AI: The product of numbers is %.2f \n", product);
                break;
            }

            case 4:
            {
                float div;
                int valid = 1;

                printf("AI: How many numbers do you want to divide. \n");
                printf("You: ");
                scanf("%d", &n);

                if(n >= 2)
                {
                    printf("AI: Enter number 1. \n");
                    printf("You: ");
                    scanf("%f", &div);

                    for(int i = 2; i <= n; i++)
                    {
                        printf("AI: Enter number %d. \n", i);
                        printf("You: ");
                        scanf("%f", &num);

                        if(num != 0)
                        {
                            div = div / num;
                        }
                        else
                        {
                            printf("AI: Can not divided by zero. \n");
                            valid = 0;
                            break;
                        }
                    }

                    if(valid == 1)
                    {
                        printf("AI: The answer is %.2f. \n", div);
                    }
                }
                else
                {
                    printf("AI: Enter atleast two numbers. \n");
                }

                break;
            }

            case 5:
            {
                int a, b;

                printf("AI: Enter base number. \n");
                printf("You: ");
                scanf("%d", &a);
                printf("AI: Enter power. \n");
                printf("You: ");
                scanf("%d", &b);

                printf("AI: Answer is %d \n", (int)pow(a,b));
                break;
            }

            case 6:
            {
                float sq;

                printf("AI: Enter number.\n");
                printf("You: ");
                scanf("%f", &sq);

                if(sq >= 0)
                {
                    printf("AI: Square root is %.2f \n", sqrt(sq));
                }
                else
                {
                    printf("AI: Square root of negative number is not supported. \n");
                }

                break;
            }

            case 7:
            {
                int a, b;

                printf("AI: Enter two numbers. \n");
                printf("You: ");
                scanf("%d %d", &a, &b);

                if(b != 0)
                {
                    printf("AI: Remainder is %d \n", a % b);
                }
                else
                {
                    printf("AI: Can not divided by zero. \n");
                }

                break;
            }

            case 8:
            {
                float obtained, total, percentage;

                printf("AI: Enter obtained marks. \n");
                printf("You: ");
                scanf("%f", &obtained);
                printf("AI: Enter total marks. \n");
                printf("You: ");
                scanf("%f", &total);

                if(total > 0 && obtained >= 0 && obtained <= total)
                {
                    percentage = (obtained / total) * 100;
                    printf("AI: Percentage is %.2f%% \n", percentage);
                }
                else
                {
                    printf("AI: Invalid marks! \n");
                }

                break;
            }

            case 9:
            {
                int number;
                long long fact;

                printf("AI: Enter a number. \n");
                printf("You: ");
                scanf("%d", &number);

                if(number >= 0 && number <= 20)
                {
                    fact = factorial(number);
                    printf("AI: Factorial is %lld \n", fact);
                }
                else
                {
                    printf("AI: Enter a number between 0 and 20. \n");
                }

                break;
            }

            case 10:
                printf("AI: Returning to main menu..... \n");
                break;

            default:
                printf("AI: Invalid choice \n");
                break;
        }

    }
    while(mchoice != 10);
}

void english()
{
    int echoice;
    char question[100];
    char reply[200];

    printf("\n");
    printf("----- Welcome to English Section ----- \n");

    do
    {
        printf("\n");
        printf("AI: What do you want to learn? \n");
        printf("1- Tenses. \n2- Structures. \n3- Grammer basics. \n4- Ask a question. \n5- Back to main manu. \n");
        printf("Your choice: ");
        scanf("%d", &echoice);
        getchar();

        switch(echoice)
        {
            case 1:
            {
                printf("AI: English has three main tenses:\n");
                printf("1. Present Tense \n2. Past Tense \n3. Future Tense \n");
                break;
            }

            case 2:
            {
                printf("AI: All 12 Tense Structures:\n");
                printf("Present Simple:\n Subject + V1(s/es) + Object\n");
                printf("Past Simple:\n Subject + V2 + Object\n");
                printf("Future Simple:\n Subject + will + V1 + Object\n");
                printf("Present continuous:\n Subject + is/am/are + V1 + ing + Object\n");
                printf("Past continuous:\n Subject + was/were + V1 + ing + Object\n");
                printf("Future continuous:\n Subject + will be + V1 + ing + Object\n");
                printf("Present perfect:\n Subject + has/have + V3 + Object\n");
                printf("Past perfect:\n Subject + had + V3 + Object\n");
                printf("Future perfect:\n Subject + will have + V3 + Object\n");
                printf("Present perfect continuous:\n Subject + has/have + been + V1 + ing + Object\n");
                printf("Past perfect continuous:\n Subject + had been + V1 + ing + Object\n");
                printf("Future perfect continuous:\n Subject + will have been + V1 + ing + Object\n");
                break;
            }

            case 3:
            {
                printf("AI: Basic Grammar Topics:\n");
                printf("1. Noun - Name of a person, place or thing.\n");
                printf("2. Pronoun - Used instead of a noun.\n");
                printf("3. Verb - Shows an action.\n");
                printf("4. Adjective - Describes a noun.\n");
                break;
            }

            case 4:
            {
                printf("AI: Ask your English question \n");
                printf("You: ");
                fgets(question, sizeof(question), stdin);

                makeLowercase(question);

                if(strstr(question, "has and have") != NULL)
                {
                    printf("AI: Has is used with he, she and it.");
                    printf("Have is used with I, you, we and they.");
                    strcpy(reply, "Has is used with he, she and it. Have is used with I, you, we and they.");
                }
                else if(strstr(question, "their and there") != NULL)
                {
                    printf("AI: Their shows ownership.");
                    printf("There refers to a place or location.");
                    strcpy(reply, "Their shows ownership. There refers to a place or location.");
                }
                else if(strstr(question, "affect and effect") != NULL)
                {
                    printf("AI: Affect is usually a verb.");
                    printf("Effect is usually a noun.");
                    strcpy(reply, "Affect is usually a verb. Effect is usually a noun.");
                }
                else if(strstr(question, "do and does") != NULL)
                {
                    printf("AI: Do is used with I, you, we and they.");
                    printf("Does is used with he, she and it.");
                    strcpy(reply, "Do is used with I, you, we and they. Does is used with he, she and it.");
                }
                else if(strstr(question, "can and could") != NULL)
                {
                    printf("AI: Can is used for ability or possibility.");
                    printf("Could is often used for past ability or polite requests.");
                    strcpy(reply, "Can is used for ability or possibility. Could is often used for past ability or polite requests.");
                }
                else
                {
                    printf("AI: Sorry! I don't have an answer to this question yet.");
                    strcpy(reply, "Sorry! I don't have an answer to this question yet.");
                }

                saveChat(question, reply);
                break;
            }

            case 5:
                printf("AI: Returning to main manu..... \n");
                break;

            default:
                printf("AI: Invalid choice!");
                break;
        }

    }
    while(echoice != 5);
}

void programming()
{
    int pchoice;
    char question[100];
    char reply[200];

    printf("\n");
    printf("----- Welcome to Programming Section ----- \n");

    do
    {
        printf("\n");
        printf("AI: How can I help you? \n");
        printf("1. Variables \n2. Data Types \n3. If-Else \n4. Loops \n5. Arrays \n6. Functions \n7. Pointers \n8. Input and Output \n9. Ask Your Own Question \n10. Back to Main Menu \n");
        printf("Your choice: ");
        scanf("%d", &pchoice);

        switch(pchoice)
        {
            case 1:
            {
                printf("AI: VARIABLES \n");
                printf("Definition: A variable is a named memory location used to store data.\n");

                printf("Syntax:\n");
                printf("data_type variable_name = value;\n");

                printf("Example:\n");
                printf("int age = 18;\n");
                printf("printf(\"%%d\", age);\n");

                printf("Output: 18\n");
                break;
            }

            case 2:
            {
                printf("AI: DATA TYPES \n");
                printf("Definition: Data types specify the type of data a variable can store.\n");

                printf("Common Data Types:\n");
                printf("int - Integer values\n");
                printf("float - Decimal values\n");
                printf("char - Single character\n");
                printf("double - Large decimal values\n");

                printf("Syntax:\n");
                printf("int age = 18;\n");
                printf("float marks = 85.5;\n");
                printf("char grade = 'A';\n");
                break;
            }

            case 3:
            {
                printf("AI: IF ELSE \n");
                printf("Definition: If-else is used to make decisions in a program.\n");

                printf("Syntax:\n");
                printf("if(condition)\n");
                printf("{\n");
                printf("    statements;\n");
                printf("}\n");
                printf("else\n");
                printf("{\n");
                printf("    statements;\n");
                printf("}\n");

                printf("Example:\n");
                printf("int age = 18;\n");
                printf("if(age >= 18)\n");
                printf("{\n");
                printf("    printf(\"Adult\");\n");
                printf("}\n");
                printf("else\n");
                printf("{\n");
                printf("    printf(\"Not Adult\");\n");
                printf("}\n");

                printf("Output: Adult\n");
                break;
            }

            case 4:
            {
                printf("AI: LOOPS \n");
                printf("Definition: Loops are used to repeat a block of code.\n");

                printf("Types of Loops:\n");
                printf("1. For Loop\n");
                printf("2. While Loop\n");
                printf("3. Do-While Loop\n");

                printf("Syntax of For Loop:\n");
                printf("for(initialization; condition; update)\n");
                printf("{\n");
                printf("    statements;\n");
                printf("}\n");

                printf("Example:\n");
                printf("int i;\n");
                printf("for(i=1; i<=5; i++)\n");
                printf("{\n");
                printf("    printf(\"%%d\", i);\n");
                printf("}\n");

                printf("Output: 1 2 3 4 5\n");
                break;
            }

            case 5:
            {
                printf("AI: ARRAYS \n");
                printf("Definition: An array stores multiple values of the same data type.\n");

                printf("Syntax:\n");
                printf("data_type array_name[size];\n");

                printf("Example:\n");
                printf("int numbers[3] = {10, 20, 30};\n");
                printf("printf(\"%%d\", numbers[0]);\n");

                printf("Output: 10\n");
                break;
            }

            case 6:
            {
                printf("AI: FUNCTIONS \n");
                printf("Definition: A function is a block of code used to perform a specific task.\n");

                printf("Syntax:\n");
                printf("return_type function_name()\n");
                printf("{\n");
                printf("    statements;\n");
                printf("}\n");

                printf("Example:\n");
                printf("void greet()\n");
                printf("{\n");
                printf("    printf(\"Hello\");\n");
                printf("}\n");

                printf("Output: Hello (when greet() is called)\n");
                break;
            }

            case 7:
            {
                printf("AI: POINTERS \n");
                printf("Definition: A pointer is a variable that stores the address of another variable.\n");

                printf("Syntax:\n");
                printf("data_type *pointer_name;\n");

                printf("Example:\n");
                printf("int num = 10;\n");
                printf("int *ptr = &num;\n");
                printf("printf(\"%%d\", *ptr);\n");

                printf("Output: 10\n");
                break;
            }

            case 8:
            {
                printf("AI: INPUT AND OUTPUT \n");
                printf("Definition: Input is used to take data from the user.\n");
                printf("Output is used to display information on the screen.\n");

                printf("Common Functions:\n");
                printf("scanf() - Takes input\n");
                printf("printf() - Displays output\n");

                printf("Example:\n");
                printf("int age;\n");
                printf("scanf(\"%%d\", &age);\n");
                printf("printf(\"%%d\", age);\n");

                printf("This program displays the age entered by the user.\n");
                break;
            }

            case 9:
            {
                printf("AI: Ask your programming question: \n");
                printf("You: ");
                getchar();
                fgets(question, sizeof(question), stdin);

                makeLowercase(question);

                if(strstr(question, "stdio") != NULL)
                {
                    printf("AI: stdio.h is a header file used for input and output functions like printf() and scanf().\n");
                    strcpy(reply, "stdio.h is a header file used for input and output functions like printf() and scanf().");
                }
                else if(strstr(question, "return 0") != NULL)
                {
                    printf("AI: return 0 indicates that the program has ended successfully.\n");
                    strcpy(reply, "return 0 indicates that the program has ended successfully.");
                }
                else if(strstr(question, "semicolon") != NULL)
                {
                    printf("AI: A semicolon (;) is used to end most statements in C.\n");
                    strcpy(reply, "A semicolon (;) is used to end most statements in C.");
                }
                else if(strstr(question, "break") != NULL)
                {
                    printf("AI: The break statement is used to exit a loop or switch statement.\n");
                    strcpy(reply, "The break statement is used to exit a loop or switch statement.");
                }
                else if(strstr(question, "continue") != NULL)
                {
                    printf("AI: The continue statement skips the current iteration and moves to the next iteration of a loop.\n");
                    strcpy(reply, "The continue statement skips the current iteration and moves to the next iteration of a loop.");
                }
                else if(strstr(question, "comment") != NULL)
                {
                    printf("AI: Comments are notes in a program that are ignored by the compiler.\n");
                    printf("Single-line comment: // comment\n");
                    printf("Multi-line comment: /* comment */\n");
                    strcpy(reply, "Comments are notes in a program that are ignored by the compiler.");
                }
                else if(strstr(question, "include") != NULL)
                {
                    printf("AI: #include is a preprocessor directive used to include header files in a program.\n");
                    strcpy(reply, "#include is a preprocessor directive used to include header files in a program.");
                }
                else
                {
                    printf("AI: Sorry! I don't have an answer to this question yet.\n");
                    strcpy(reply, "Sorry! I don't have an answer to this question yet.");
                }

                saveChat(question, reply);
                break;
            }

            case 10:
            {
                printf("AI: Returning to Main Menu...\n");
                break;
            }

            default:
            {
                printf("AI: Invalid choice! \n");
            }
        }

    }
    while(pchoice != 10);
}

void conversation()
{
    int cchoice, guess, answer, slangChoice;
    int secret = 7;
    int score = 0;
    char message[100];
    char reply[200];

    printf("\n");
    printf("----- Welcome to Casual Conversation Section ----- \n");

    do
    {
        printf("\n");
        printf("AI: What can we do? \n");
        printf("1. Greetings\n");
        printf("2. Tell me a Joke\n");
        printf("3. Gen Z Slang Dictionary\n");
        printf("4. Number Guessing Game\n");
        printf("5. Computer Quiz Game\n");
        printf("6. Back to Main Menu\n");

        printf("Your choice: ");
        scanf("%d", &cchoice);

        switch(cchoice)
        {
            case 1:
            {
                printf("You: ");
                getchar();
                fgets(message, sizeof(message), stdin);

                makeLowercase(message);

                if(strstr(message, "hello") != NULL || strstr(message, "hi") != NULL)
                {
                    printf("AI: Hey! What's up?\n");
                    strcpy(reply, "Hey! What's up?");
                }
                else if(strstr(message, "how are you") != NULL)
                {
                    printf("AI: I'm doing great! How about you?\n");
                    strcpy(reply, "I'm doing great! How about you?");
                }
                else if(strstr(message, "good") != NULL)
                {
                    printf("AI: That's nice! What's making your day good?\n");
                    strcpy(reply, "That's nice! What's making your day good?");
                }
                else if(strstr(message, "bad") != NULL || strstr(message, "sad") != NULL)
                {
                    printf("AI: Sorry to hear that. Want to talk about it?\n");
                    strcpy(reply, "Sorry to hear that. Want to talk about it?");
                }
                else if(strstr(message, "thank") != NULL)
                {
                    printf("AI: You're welcome! Anytime.\n");
                    strcpy(reply, "You're welcome! Anytime.");
                }
                else if(strstr(message, "bye") != NULL)
                {
                    printf("AI: Bye! Have a nice day.\n");
                    strcpy(reply, "Bye! Have a nice day.");
                }
                else
                {
                    printf("AI: Interesting! Tell me more.\n");
                    strcpy(reply, "Interesting! Tell me more.");
                }

                saveChat(message, reply);
                break;
            }

            case 2:
            {
                printf("AI: Why do programmers prefer dark mode?\n");
                printf("AI: Because light attracts bugs!\n");
                break;
            }

            case 3:
            {
                printf("AI: ----- GEN Z SLANG DICTIONARY -----\n");
                printf("1. LOL\n");
                printf("2. BRB\n");
                printf("3. BTW\n");
                printf("4. TBH\n");
                printf("5. No Cap\n");
                printf("6. Slay\n");
                printf("7. Sus\n");
                printf("8. Rizz\n");
                printf("9. Periodt\n");

                printf("AI: Enter slang number: ");
                printf("You: ");
                scanf("%d", &slangChoice);

                switch(slangChoice)
                {
                    case 1:
                        printf("AI: LOL = Laughing Out Loud\n");
                        break;
                    case 2:
                        printf("AI: BRB = Be Right Back\n");
                        break;
                    case 3:
                        printf("AI: BTW = By The Way\n");
                        break;
                    case 4:
                        printf("AI: TBH = To Be Honest\n");
                        break;
                    case 5:
                        printf("AI: No Cap = No lie / Seriously\n");
                        break;
                    case 6:
                        printf("AI: Slay = Doing something really well\n");
                        break;
                    case 7:
                        printf("AI: Sus = Suspicious or doubtful\n");
                        break;
                    case 8:
                        printf("AI: Rizz = Charisma or charm\n");
                        break;
                    case 9:
                        printf("AI: Periodt = End of discussion\n");
                        break;
                    default:
                        printf("AI: Invalid slang choice!\n");
                }

                break;
            }

            case 4:
            {
                printf("AI: NUMBER GUESSING GAME \n");
                printf("AI: Guess a number between 1 and 10.\n");
                printf("AI: Enter your guess: ");
                printf("You: ");
                scanf("%d", &guess);

                if(guess == secret)
                {
                    printf("AI: Correct! You guessed the number.\n");
                }
                else if(guess < secret)
                {
                    printf("AI: Too low! The correct number was 7.\n");
                }
                else
                {
                    printf("AI: Too high! The correct number was 7.\n");
                }

                break;
            }

            case 5:
            {
                printf("AI: COMPUTER QUIZ GAME \n");
                score = 0;

                printf("AI: Q1. Which language are we using in this project?\n");
                printf("1. Java\n2. C\n3. Python\n");
                printf("AI: Enter answer \n");
                printf("You: ");
                scanf("%d", &answer);

                if(answer == 2)
                {
                    printf("AI: Correct!\n");
                    score++;
                }
                else
                {
                    printf("AI: Wrong! Correct answer is C.\n");
                }

                printf("AI: Q2. Which function displays output in C?\n");
                printf("1. scanf()\n2. printf()\n3. main()\n");
                printf("AI: Enter answer \n");
                printf("You: ");
                scanf("%d", &answer);

                if(answer == 2)
                {
                    printf("AI: Correct!\n");
                    score++;
                }
                else
                {
                    printf("AI: Wrong! Correct answer is printf().\n");
                }

                printf("AI: Q3. Which symbol ends most statements in C?\n");
                printf("1. ;\n2. :\n3. ,\n");
                printf("AI: Enter answer \n");
                printf("You: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    printf("AI: Correct!\n");
                    score++;
                }
                else
                {
                    printf("AI:Wrong! Correct answer is ;\n");
                }

                printf("AI: Your total score: %d/3\n", score);
                break;
            }

            case 6:
            {
                printf("AI: Returning to Main Menu...\n");
                break;
            }

            default:
            {
                printf("AI: Invalid choice! Please try again.\n");
            }
        }

    }
    while(cchoice != 6);
}
