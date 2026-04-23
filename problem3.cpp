#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printList(char** list, int count, const char* header) {
    printf("[%s]\n", header);
    for (int i = 0; i < count; i++)
        printf("[%d] %s\n", i, list[i]);
}

int main() {
    const int MAX = 5;
    char** list = (char**)malloc(MAX * sizeof(char*));
    int count = 0;

    const char* words[] = {"alpha", "bravo", "charlie", "delta", "echo"};
    for (int i = 0; i < MAX; i++) {
        list[i] = (char*)malloc(strlen(words[i]) + 1);
        strcpy(list[i], words[i]);
        count++;
    }

    printList(list, count, "Initial Dictionary");

    const char* target = "delta";
    printf("\n[Search Result]\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(list[i], target) == 0) {
            printf("%s found at index %d\n", target, i);
            break;
        }
    }

    const char* newWord = "blueberry";
    free(list[1]);
    list[1] = (char*)malloc(strlen(newWord) + 1);
    strcpy(list[1], newWord);

    printf("\n");
    printList(list, count, "After Update");

    const char* toDelete = "charlie";
    int delIdx = -1;
    for (int i = 0; i < count; i++) {
        if (strcmp(list[i], toDelete) == 0) { delIdx = i; break; }
    }
    if (delIdx != -1) {
        free(list[delIdx]);
        for (int i = delIdx; i < count - 1; i++)
            list[i] = list[i + 1];
        list[--count] = NULL;
    }

    printf("\n");
    printList(list, count, "After Delete");

    for (int i = 0; i < count; i++)
        free(list[i]);
    free(list);

    return 0;
}