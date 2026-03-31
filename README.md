
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

<img width="376" height="83" alt="image" src="https://github.com/user-attachments/assets/ead39d13-0951-40e8-8a35-f884ca9bda1e" />


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

<img width="469" height="149" alt="image" src="https://github.com/user-attachments/assets/8254535f-3be3-495d-b276-487afe12e1ef" />


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

<img width="477" height="234" alt="image" src="https://github.com/user-attachments/assets/d3c24560-6ac9-4815-a1ac-1f77ea3df983" />


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
<img width="391" height="148" alt="image" src="https://github.com/user-attachments/assets/3ba30e43-219a-4ce3-b320-1f91242067a8" />




🧠 📚 What I Learned
✔ Pointer usage in arrays
✔ Pattern printing logic
✔ Function usage
✔ Basic arithmetic operations


⭐ If you like this project, don’t forget to star the repo!


---

---

💬 Jo tu kahe to hu **direct tera links sathe final README ready kari dau** (full professional level 😎)
