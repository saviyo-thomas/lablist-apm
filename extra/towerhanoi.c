#include <stdio.h>
#include <stdlib.h>

#define HEIGHT 20
#define WIDTH 60
#define MAX_DISKS 4

char scrn[HEIGHT][WIDTH];

// Peg states: pegs[peg_index][disk_stack_index]
int pegs[3][MAX_DISKS];
int diskCount[3];
int numDisks = 3;

// Initialize the game state (all disks on Peg 0)
void initGame() {
    diskCount[0] = numDisks;
    diskCount[1] = 0;
    diskCount[2] = 0;
    
    // Bottom disk is largest (3), top disk is smallest (1)
    for (int i = 0; i < numDisks; i++) {
        pegs[0][i] = numDisks - i; 
    }
}

// Clear screen buffer with spaces
void clearScreenBuffer() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            scrn[i][j] = ' ';
        }
    }
}

// Render pegs, base, and disks onto the screen buffer
// Render pegs, base, and disks onto the screen buffer
void renderGame() {
    clearScreenBuffer();

    // Draw base platform at the bottom
    for (int j = 5; j < WIDTH - 5; j++) {
        scrn[HEIGHT - 2][j] = '=';
    }

    // X coordinates for the 3 pegs
    int pegX[3] = {WIDTH / 6, WIDTH / 2, (5 * WIDTH) / 6};

    // Draw pegs and disks
    for (int p = 0; p < 3; p++) {
        // Draw vertical pole
        for (int i = HEIGHT - 7; i < HEIGHT - 2; i++) {
            scrn[i][pegX[p]] = '|';
        }
        // Draw disks stacked on the peg
        for (int d = 0; d < diskCount[p]; d++) {
            int diskSize = pegs[p][d]; // 1, 2, 3, etc.
            
            // FIXED: d = 0 (bottom disk) is at the bottom, higher d values stack upwards (- d)
            int y = (HEIGHT - 3) - d; 
            
            int halfWidth = diskSize + 1;
            
            for (int x = pegX[p] - halfWidth; x <= pegX[p] + halfWidth; x++) {
                if (x >= 0 && x < WIDTH) {
                    scrn[y][x] = '#';
                }
            }
        }
    }
}
// Print the buffer to the console
void display() {
    // ANSI escape code to clear terminal screen for a smooth display update
    printf("\033[H\033[J");
    
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", scrn[i][j]);
        }
        printf("\n");
    }
}

// Move disk from source peg to destination peg with rule validation
int moveDisk(int src, int dest) {
    if (src < 0 || src > 2 || dest < 0 || dest > 2) {
        printf("\nInvalid peg index! Use 0, 1, or 2.\n");
        return 0;
    }
    if (diskCount[src] == 0) {
        printf("\nSource peg is empty!\n");
        return 0;
    }
    
    int diskMoving = pegs[src][diskCount[src] - 1];
    
    // Check rule: Cannot place a larger disk on top of a smaller disk
    if (diskCount[dest] > 0 && pegs[dest][diskCount[dest] - 1] < diskMoving) {
        printf("\nInvalid move! Cannot place a larger disk on a smaller one.\n");
        return 0;
    }
    
    // Perform move
    diskCount[src]--;
    pegs[dest][diskCount[dest]] = diskMoving;
    diskCount[dest]++;
    return 1;
}

// Check if all disks have successfully moved to Peg 2
int checkWin() {
    return (diskCount[2] == numDisks);
}

int main() {
    initGame();
    int src, dest;

    while (1) {
        renderGame();
        display();

        if (checkWin()) {
            printf("\nCONGRATULATIONS! You solved the Tower of Hanoi!\n");
            break;
        }

        printf("\nPegs: 0, 1, 2\n");
        printf("Enter Source Peg and Destination Peg (e.g., 0 2), or -1 to exit: ");
        
        if (scanf("%d", &src) != 1) break;
        if (src == -1) break;
        
        if (scanf("%d", &dest) != 1) break;

        moveDisk(src, dest);
    }

    return 0;
}