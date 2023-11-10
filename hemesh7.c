/*Name=Hemesh Chopade
  Branch=IT
  Roll No=11
*/

#include <stdio.h>

// Define the time_struct structure
struct time_struct {
    int hour;
    int minute;
    int second;
};

// Function to input new time
void inputTime(struct time_struct *t) {
    printf("Enter hour, minute, and second (space-separated): ");
    scanf("%d %d %d", &t->hour, &t->minute, &t->second);
}

// Function to display the time
void displayTime(struct time_struct t) {
    printf("Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
}

// Function to update the time by one second
void updateTime(struct time_struct *t) {
    t->second++;
    
    if (t->second == 60) {
        t->second = 0;
        t->minute++;

        if (t->minute == 60) {
            t->minute = 0;
            t->hour++;

            if (t->hour == 24) {
                t->hour = 0;
            }
        }
    }
}

int main() {
    struct time_struct myTime;

    // Input new time
    inputTime(&myTime);

    // Display the original time
    printf("Original ");
    displayTime(myTime);

    // Update the time by one second
    updateTime(&myTime);

    // Display the updated time
    printf("Updated ");
    displayTime(myTime);

    return 0;
}
