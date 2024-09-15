#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20
#define SNAKE_LENGTH 5
#define DELAY 200

typedef struct {
    int x;
    int y;
} Point;

typedef enum {
    UP, DOWN, LEFT, RIGHT
} Direction;

typedef struct {
    Point head;
    Point body[WIDTH * HEIGHT];
    int length;
    Direction dir;
} Snake;

Point food;
bool gameOver = false;
Snake snake;

void setup();
void draw(Snake snake_draw);
void input(Snake *snake_input);
void logic(Snake *snake_logic);

int main() {
    setup();

    while (!gameOver) {
        draw(snake);
        input(&snake);
        logic(&snake);
        Sleep(DELAY);
    }

    system("cls");
     char name[50];
    printf("what is your name:");
    scanf("%s",name);
    printf("Game over!  %s congratulations Your score: %d\n", name, snake.length - 5);
    printf("Press any key to exit...");
    getch();
    return 0;
}

void setup() {
    srand((unsigned int)time(NULL)); // Cast time_t to unsigned int

    snake.length = SNAKE_LENGTH;
    snake.head.x = WIDTH / 2;
    snake.head.y = HEIGHT / 2;
    snake.dir = RIGHT;

    int i;
    for (i = 0; i < SNAKE_LENGTH; i++) {
        snake.body[i].x = snake.head.x - i;
        snake.body[i].y = snake.head.y;
    }

    food.x = rand() % (WIDTH - 2) + 1; // Avoid spawning food on borders
    food.y = rand() % (HEIGHT - 2) + 1;
}

void draw(Snake snake_draw) {
    system("cls");

    int i;
    for (i = 0; i < WIDTH; i++) {
        printf("#");
    }
    printf("\n");

    int x, y;
    for (y = 0; y < HEIGHT; y++) {
        for (x = 0; x < WIDTH; x++) {
            if (x == 0 || x == WIDTH - 1)
                printf("#");
            else if (x == food.x && y == food.y)
                printf("@");
            else {
                bool isBodyPart = false;
                for (i = 0; i < snake_draw.length; i++) {
                    if (x == snake_draw.body[i].x && y == snake_draw.body[i].y) {
                        printf("o");
                        isBodyPart = true;
                        break;
                    }
                }
                if (!isBodyPart)
                    printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < WIDTH; i++) {
        printf("#");
    }
    printf("\n");
}

void input(Snake *snake_input) {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w':
                if (snake_input->dir != DOWN)
                    snake_input->dir = UP;
                break;
            case 's':
                if (snake_input->dir != UP)
                    snake_input->dir = DOWN;
                break;
            case 'a':
                if (snake_input->dir != RIGHT)
                    snake_input->dir = LEFT;
                break;
            case 'd':
                if (snake_input->dir != LEFT)
                    snake_input->dir = RIGHT;
                break;
            case 'q':
                gameOver = true;
                break;
        }
    }
}

void logic(Snake *snake_logic) {
    int i;
    for (i = snake_logic->length - 1; i > 0; i--) {
        snake_logic->body[i] = snake_logic->body[i - 1];
    }
    snake_logic->body[0] = snake_logic->head;

    switch (snake_logic->dir) {
        case UP:
            snake_logic->head.y--;
            break;
        case DOWN:
            snake_logic->head.y++;
            break;
        case LEFT:
            snake_logic->head.x--;
            break;
        case RIGHT:
            snake_logic->head.x++;
            break;
    }

    if (snake_logic->head.x < 1 || snake_logic->head.x >= WIDTH - 1 || snake_logic->head.y < 1 || snake_logic->head.y >= HEIGHT - 1) {
        gameOver = true;
        return;
    }

    for (i = 1; i < snake_logic->length; i++) {
        if (snake_logic->body[i].x == snake_logic->head.x && snake_logic->body[i].y == snake_logic->head.y) {
            gameOver = true;
            return;
        }
    }

    if (snake_logic->head.x == food.x && snake_logic->head.y == food.y) {
        snake_logic->length++;
        food.x = rand() % (WIDTH - 2) + 1;
        food.y = rand() % (HEIGHT - 2) + 1;
    }
}

