#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char roll_no[100];
    char command[300];

    printf("MIT License\n"
"Copyright (c) 2024 (ANONYMOUS)\n"
"THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
"SOFTWARE.\n\n\n");


    
    // Prompt user to login first
    printf("*First Go and login on CSVTU Digivarsity website using correct username and password.\n");
    printf("Press enter key to open the login page...\n");
    getch();

    // Open the login page in the default web browser
    snprintf(command, sizeof(command), "start \"\" \"https://csvtu.digivarsity.online/Account/Login\"");
    system(command);

    // Prompt user for roll number
    printf("if your login is successful\n");
    printf("Enter your roll number: ");
    scanf("%s", roll_no);

    // Construct the URL for the admit card
    snprintf(command, sizeof(command), "start \"\" \"https://csvtu.digivarsity.online/WebApp/Examination/AdmitCard.aspx?RollNo=%s&ExamSession=Apr-May%%202024&Semester=2%%20Semester\"", roll_no);

    // Open the URL in the default web browser
    int status = system(command);

    if (status == -1) {
        perror("system");
        return 1;
    }

    return 0;
}