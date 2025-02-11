#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void the_op() {
    int op;
    int file_choice;
    int permission;
    char command[1000];
    char alias_name[1000];
    int user_choice;
    int command_choice;
    char search_path[1000];
    char grep_path[10000];
    char name[1000];
    char alias_command[1000];
    char from[1000];
    char to[1000];
    char command_choice2[1000];
    char dir_name[1000];
    char feedback[50000];
    char file_name[1000];
    char newfile_name[1000];
    char s_link[1000];
    char dir[1000];
    char file[1000];
    int d_or_f_choice;
    int c_or_r;
    int dir_choice;


    printf("Menu:\n");
    printf("1. List files/directories.\n");
    printf("2. Change permissions of files/directories.\n");
    printf("3. Make/delete files/directories.\n");
    printf("4. Create symbolic link files.\n");
    printf("5. Copy files/directories.\n");
    printf("6. Move files/directories\n");
    printf("7. Use redirection to create or update files.\n");
    printf("8. Set and use aliases for common tasks.\n");
    printf("9. View file content.\n");
    printf("10. Find files or directories.\n");
    printf("\nEnter a Number: ");

    if (scanf("%d", &op) != 1) {
        printf("Invalid input.\n\n");
        while (getchar() != '\n');
        the_op();
        return;
    }

    switch (op) {
        case 1:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }

            switch (user_choice) {
                case 1:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                case 2:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                case 3:
                    printf("Enter the file path: ");
                    scanf("%999s", file_name);
                    file_name[strcspn(file_name, "\n")] = 0;
                    snprintf(command, sizeof(command), "cd transportation/admin/ && ls \"%s\"", file_name);
                    system(command);
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;



        case 2:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice) {
                case 1:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                        if (scanf("%d", &file_choice) != 1) {
                            printf("Invalid input.\n\n");
                            while (getchar() != '\n');
                            return;}
                    printf("Enter permission combination: ");
                    if (scanf("%d", &permission) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}
                    switch (file_choice)
                    {
                        case 1:
                            printf("Enter the file path: ");
                            scanf("%999s", file_name);
                            file_name[strcspn(file_name, "\n")] = 0;
                            sprintf(command, "cd transportation/admin/schedule && sudo chmod %d \"%s\"", permission, file_name);
                            system(command);
                            break;
                        case 2:
                            sprintf(command, "cd transportation/admin/schedule && sudo chmod %d \"%s\"", permission, file_name);
                            system(command);
                            break;
                        default:
                            printf("Invalid user choice.\n");
                    }
                    break;

                case 2:
                    printf("You can't do this operation.");
                    break;

                case 3:
                    printf("You can't do this operation.");
                    break;
                default:
                    printf("Invalid user choice.\n");
            }
            break;

        case 3:
            printf("Are you:\n1. Admin\n2. Driver\n3. Passenger\nThe number: ");
            if (scanf("%d", &user_choice) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                break;
            }
            switch (user_choice)
            {
                case 1:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                    if (scanf("%d", &dir_choice) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}

                    switch (dir_choice)
                    {
                        case 1:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            //fgets(dir_name, sizeof(dir_name), stdin);
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && mkdir \"%s\"", dir_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/route && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                            break;

                            case 2:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && mkdir \"%s\"", dir_name);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/admin/schedule && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                                break;

                            default:
                                printf("This directory doesn't exist.\n");
                        }

                    break;
                case 2:
                    printf("Choose the directory:\n1. route\n2. schedule: ");
                    if (scanf("%d", &dir_choice) != 1) {
                        printf("Invalid input.\n\n");
                        while (getchar() != '\n');
                        return;}

                    switch (dir_choice)
                    {
                        case 1:
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && mkdir \"%s\"", dir_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && rm -r \"%s\"", dir_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;

                                case 2:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && nano \"%s\"", file_name);
                                            system(command);
                                            break;

                                        case 2:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", file_name);
                                            file_name[strcspn(file_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/route && rm \"%s\"", file_name);
                                            system(command);
                                            break;
                                        default:
                                            printf("Invalid input.\n\n");
                                    }
                                    break;
                                default:
                                    printf("Choice invalid");
                            }
                            break;

                            case 2:

                            system("cd transportation/drivers/schedules");
                            printf("Choose the editing field:\n1. directory\n2. file: ");
                            if (scanf("%d", &d_or_f_choice) != 1) {
                                printf("Invalid input.\n\n");
                                while (getchar() != '\n');
                                return;}
                            switch (d_or_f_choice)
                            {
                                case 1:
                                    printf("Choose the editing field:\n1. create\n2. remove: ");
                                    if (scanf("%d", &c_or_r) != 1) {
                                        printf("Invalid input.\n\n");
                                        while (getchar() != '\n');
                                        return;}
                                    switch (c_or_r)
                                    {
                                        case 1:
                                            printf("Enter the desired name: ");
                                            scanf("%999s", dir_name);
                                            dir_name[strcspn(dir_name, "\n")] = 0;
                                            snprintf(command, sizeof(command), "cd transportation/drivers/schedules && mkdir \"%s\"", dir_name);
                                            system(comma
