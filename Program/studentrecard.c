#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    int p_marks, c_marks, m_marks, e_marks, cs_marks;
    float per;
    char grade;
} st;

FILE *fptr;

void write_student();
void display_all();
void display_sp(int n);
void modify_student();
void delete_student();
void class_result();
void result();
void intro();
void entry_menu();

void write_student() {
    fptr = fopen("student.dat", "ab");
    if (fptr == NULL) {
        printf("Error opening file!");
        return;
    }

    printf("\nPlease Enter The New Details of student \n");
    printf("\nEnter The roll number of student: ");
    scanf("%d", &st.rollno);
    printf("\nEnter The Name of student: ");
    scanf("%s", st.name);
    printf("\nEnter The marks in physics out of 100: ");
    scanf("%d", &st.p_marks);
    printf("\nEnter The marks in chemistry out of 100: ");
    scanf("%d", &st.c_marks);
    printf("\nEnter The marks in maths out of 100: ");
    scanf("%d", &st.m_marks);
    printf("\nEnter The marks in english out of 100: ");
    scanf("%d", &st.e_marks);
    printf("\nEnter The marks in computer science out of 100: ");
    scanf("%d", &st.cs_marks);
    st.per = (float)(st.p_marks + st.c_marks + st.m_marks + st.e_marks + st.cs_marks) / 5.0f;
    if (st.per >= 60)
        st.grade = 'A';
    else if (st.per >= 50 && st.per < 60)
        st.grade = 'B';
    else if (st.per >= 33 && st.per < 50)
        st.grade = 'C';
    else
        st.grade = 'F';
    fwrite(&st, sizeof(st), 1, fptr);
    fclose(fptr);
    printf("\n\nStudent Record Has Been Created ");
}

void display_all() {
    printf("\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n");
    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!");
        return;
    }

    while (fread(&st, sizeof(st), 1, fptr) == 1) {
        printf("\nRoll Number of Student : %d", st.rollno);
        printf("\nName of student : %s", st.name);
        printf("\nMarks in Physics : %d", st.p_marks);
        printf("\nMarks in Chemistry : %d", st.c_marks);
        printf("\nMarks in Maths : %d", st.m_marks);
        printf("\nMarks in English : %d", st.e_marks);
        printf("\nMarks in Computer Science : %d", st.cs_marks);
        printf("\nPercentage of student is  : %.2f", st.per);
        printf("\nGrade of student is : %c", st.grade);
        printf("\n\n====================================\n");
    }
    fclose(fptr);
}

void display_sp(int n) {
    int flag = 0;
    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!");
        return;
    }

    while (fread(&st, sizeof(st), 1, fptr) == 1) {
        if (st.rollno == n) {
            printf("\nRoll number of student : %d", st.rollno);
            printf("\nName of student : %s", st.name);
            printf("\nMarks in Physics : %d", st.p_marks);
            printf("\nMarks in Chemistry : %d", st.c_marks);
            printf("\nMarks in Maths : %d", st.m_marks);
            printf("\nMarks in English : %d", st.e_marks);
            printf("\nMarks in Computer Science : %d", st.cs_marks);
            printf("\nPercentage of student is  : %.2f", st.per);
            printf("\nGrade of student is : %c", st.grade);
            flag = 1;
        }
    }
    fclose(fptr);
    if (flag == 0)
        printf("\n\nrecord not exist");
}

void modify_student() {
    int no, found = 0;
    printf("\n\n\tTo Modify ");
    printf("\n\n\tPlease Enter The roll number of student");
    scanf("%d", &no);
    fptr = fopen("student.dat", "rb+");
    if (fptr == NULL) {
        printf("Error opening file!");
        return;
    }

    while (fread(&st, sizeof(st), 1, fptr) > 0 && found == 0) {
        if (st.rollno == no) {
            printf("\nRoll number of student : %d", st.rollno);
            printf("\nName of student : %s", st.name);
            printf("\nMarks in Physics : %d", st.p_marks);
            printf("\nMarks in Chemistry : %d", st.c_marks);
            printf("\nMarks in Maths : %d", st.m_marks);
            printf("\nMarks in English : %d", st.e_marks);
            printf("\nMarks in Computer Science : %d", st.cs_marks);
            printf("\nPercentage of student is  : %.2f", st.per);
            printf("\nGrade of student is : %c", st.grade);
            printf("\nPlease Enter The New Details of student \n");
            printf("\nEnter The roll number of student ");
            scanf("%d", &st.rollno);
            printf("\n\nEnter The Name of student ");
            scanf("%s", st.name);
            printf("\nEnter The marks in physics out of 100 : ");
            scanf("%d", &st.p_marks);
            printf("\nEnter The marks in chemistry out of 100 : ");
            scanf("%d", &st.c_marks);
            printf("\nEnter The marks in maths out of 100 : ");
            scanf("%d", &st.m_marks);
            printf("\nEnter The marks in english out of 100 : ");
            scanf("%d", &st.e_marks);
            printf("\nEnter The marks in computer science out of 100 : ");
            scanf("%d", &st.cs_marks);
            st.per = (float)(st.p_marks + st.c_marks + st.m_marks + st.e_marks + st.cs_marks) / 5.0f;
            if (st.per >= 60)
                st.grade = 'A';
            else if (st.per >= 50 && st.per < 60)
                st.grade = 'B';
            else if (st.per >= 33 && st.per < 50)
                st.grade = 'C';
            else
                st.grade = 'F';
            fseek(fptr, -(long)sizeof(st), SEEK_CUR);
            fwrite(&st, sizeof(st), 1, fptr);
            printf("\n\n\t Record Updated");
            found = 1;
        }
    }
    fclose(fptr);
    if (found == 0)
        printf("\n\n Record Not Found ");
}

void delete_student() {
    int no;
    FILE *fptr2;
    printf("\n\n\n\tDelete Record");
    printf("\n\nPlease Enter The roll number of student You Want To Delete");
    scanf("%d", &no);
    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!");
        return;
    }

    fptr2 = fopen("Temp.dat", "wb");
    if (fptr2 == NULL) {
        printf("Error opening file!");
        fclose(fptr);
        return;
    }

    while (fread(&st, sizeof(st), 1, fptr) > 0) {
        if (st.rollno != no) {
            fwrite(&st, sizeof(st), 1, fptr2);
        }
    }
    fclose(fptr2);
    fclose(fptr);
    remove("student.dat");
    rename("Temp.dat", "student.dat");
    printf("\n\n\tRecord Deleted ..");
}

void class_result() {
    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Entry Menu to create File");
        printf("\n\n\n Program is closing ....");
        return;
    }

    printf("\n\n\t\tALL STUDENTS RESULT \n\n");
    printf("====================================================\n");
    printf("R.No.  Name       P   C   M   E   CS  Percentage   Grade\n");
    printf("====================================================\n");

    while (fread(&st, sizeof(st), 1, fptr) > 0) {
        printf("%-6d %-10s %-3d %-3d %-3d %-3d %-3d %-3.2f  %-1c\n", st.rollno, st.name, st.p_marks, st.c_marks, st.m_marks, st.e_marks, st.cs_marks, st.per, st.grade);
    }
    fclose(fptr);
}

void result() {
    int ans, rno;
    char ch;
    printf("\n\n\nRESULT MENU");
    printf("\n\n\n1. Class Result\n\n2. Student Report Card\n\n3.Back to Main Menu");
    printf("\n\n\nEnter Choice (1/2)? ");
    scanf("%d", &ans);
    switch (ans) {
        case 1:
            class_result();
            break;
        case 2:
            do {
                printf("\n\nEnter Roll Number Of Student : ");
                scanf("%d", &rno);
                display_sp(rno);
                printf("\n\nDo you want to See More Result (y/n)?");
                scanf(" %c", &ch);
            } while (ch == 'y' || ch == 'Y');
            break;
        case 3:
            break;
        default:
            printf("\a");
    }
}

void intro() {
    printf("STUDENT\n");
    printf("REPORT CARD\n");
    printf("PROJECT\n\n");
    printf("MADE BY : SANJAY KUMAR\n");
    printf("COLLEGE : RUNGTA COLLEGE OF ENGINEERING & TECHNOLOGY\n");
}

void entry_menu() {
    char ch2;
    printf("\n\n\n\tENTRY MENU");
    printf("\n\n\t1.CREATE STUDENT RECORD");
    printf("\n\n\t2.DISPLAY ALL STUDENTS RECORDS");
    printf("\n\n\t3.SEARCH STUDENT RECORD ");
    printf("\n\n\t4.MODIFY STUDENT RECORD");
    printf("\n\n\t5.DELETE STUDENT RECORD");
    printf("\n\n\t6.BACK TO MAIN MENU");
    printf("\n\n\tPlease Enter Your Choice (1-6) ");
    scanf(" %c", &ch2);
    switch (ch2) {
        case '1':
            write_student();
            break;
        case '2':
            display_all();
            break;
        case '3': {
            int num;
            printf("\n\n\tPlease Enter The roll number ");
            scanf("%d", &num);
            display_sp(num);
            break;
        }
        case '4':
            modify_student();
            break;
        case '5':
            delete_student();
            break;
        case '6':
            break;
        default:
            printf("\a");
            entry_menu();
    }
}

int main() {
    char ch;
    intro();
    do {
        printf("\n\n\n\tMAIN MENU");
        printf("\n\n\t01. RESULT MENU");
        printf("\n\n\t02. ENTRY/EDIT MENU");
        printf("\n\n\t03. EXIT");
        printf("\n\n\tPlease Select Your Option (1-3) ");
        scanf(" %c", &ch);
        switch (ch) {
            case '1':
                result();
                break;
            case '2':
                entry_menu();
                break;
            case '3':
                return 0;
            default:
                printf("\a");
        }
    } while (ch != '3');
    return 0;
}