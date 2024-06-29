// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct
// {
//     int id;
//     char name[20];
// } Person;

// int compare_ints(const void *a, const void *b)
// {
//     Person *personA = (Person *)a;
//     Person *personB = (Person *)b;

//     if (personA->id < personB->id)
//         return -1;
//     if (personA->id > personB->id)
//         return 1;
//     return 0;
// }

// int main()
// {
//     Person people[] = {
//         {4, "John"},
//         {1, "Jane"},
//         {2, "Alice"},
//         {3, "Bob"}};
//     size_t people_size = sizeof(people) / sizeof(people[0]);

//     qsort(people, people_size, sizeof(Person), compare_ints);

//     for (size_t i = 0; i < people_size; i++)
//     {
//         printf("%d %s\n", people[i].id, people[i].name);
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
  
  printf("%d", 12);
  
}