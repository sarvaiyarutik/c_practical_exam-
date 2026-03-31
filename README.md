
# 🚀 C Language Exam Programs

> 📚 This repository contains basic to intermediate C programs for practice and lab work.

---

## 📌 📖 Programs Included

---

## 🔢 1. Sum of First and Last Digit

### 💻 Code
```c
#include <stdio.h>

int main()
{
    int first, last, number;

    printf("Enter element:");
    scanf("%d", &number);

    first = number / 100;
    last = number % 10;

    printf("Total sum of the result: %d", first + last);

    return 0;
}


▶️ OnlineGDB Link : https://onlinegdb.com/6pI-IT9M5



📸 Output Screenshot

<img width="376" height="83" alt="Screenshot 2026-03-31 171101" src="https://github.com/user-attachments/assets/304ab74d-da8b-44ec-ade3-72cca4bdc60f" />



🔢 3. Check Divisible by 3 and 5
💻 Code
#include <stdio.h>

void check(int digit)
{
    if (digit % 15 == 0)
    {
        printf("This given number divisible by 3 and 5.\n");
    }
    else
    {
        printf("This given number not divisible by 3 and 5.\n");
    }
}

int main()
{
    int number;

    printf("Enter array element :");
    scanf("%d", &number);

    check(number);

    return 0;
}

📄 Source:

▶️ OnlineGDB Link : https://onlinegdb.com/YLl7aGgeX



📸 Output Screenshot

<img width="469" height="149" alt="Screenshot 2026-03-31 171312" src="https://github.com/user-attachments/assets/935bed1c-3681-42ed-8943-b3fbec546f0c" />



🔢 4. Sum of Two Arrays using Pointer
💻 Code
#include <stdio.h>

int main()
{
    int number, i;
    int sum1[100], sum2[100], sum3[100];
    int *array1, *array2, *array3;

    printf("Enter row element:");
    scanf("%d", &number);

    printf("Enter elements of first array:\n");
    for (i = 0; i < number; i++) {
        scanf("%d", &sum1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < number; i++) {
        scanf("%d", &sum2[i]);
    }

    array1 = sum1;
    array2 = sum2;
    array3 = sum3;

    for (int i = 0; i < number; i++)
    {
        *(array3 + i) = *(array1 + i) + *(array2 + i);
    }

    printf("Sum of two arrays:\n");

    for (int i = 0; i < number; i++)
    {
        printf("%d\n", sum3[i]);
    }

    return 0;
}

📄 Source:

▶️ OnlineGDB Link : https://onlinegdb.com/eTPKkgfGn



📸 Output Screenshot

<img width="393" height="163" alt="Screenshot 2026-03-31 171438" src="https://github.com/user-attachments/assets/6fc884c1-3366-4c4b-811e-f2e66cbb67dc" />


🔢 5. Pattern Program
💻 Code
#include <stdio.h>

int main()
{
    for (int i = 10; i >= 6; i--)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" _");
        }

        for (int k = i; k >= 6; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}

📄 Source:

▶️ OnlineGDB Link : https://onlinegdb.com/_biSPhUZbr


📸 Output Screenshot

<img width="477" height="234" alt="Screenshot 2026-03-31 171741" src="https://github.com/user-attachments/assets/20048b45-e3b3-4927-8d66-9f6806119938" />




🧠 📚 What I Learned
✔ Pointer usage in arrays
✔ Pattern printing logic
✔ Function usage
✔ Basic arithmetic operations


⭐ If you like this project, don’t forget to star the repo!


---

---

💬 Jo tu kahe to hu **direct tera links sathe final README ready kari dau** (full professional level 😎)
