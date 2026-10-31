# Assignment 1: If-Else and Loops

Write 4 short C programs. Each program reads one integer and writes the result.

## Rules

- Write your code in `ex1.c`, `ex2.c`, `ex3.c` and `ex4.c`.
- Do not print prompts (for example, `Enter a number:`). Print only the result.
- Do not change the file names.
- Commit and push your work before the deadline.

## How to Start

1. Accept the assignment. Open your repository.
2. Click **Code** > **Codespaces** > **Create codespace on main**.
3. Wait until the codespace is ready (1–2 minutes the first time). All tools are installed. You do not need to install anything.

**Use VS Code on your computer (Windows, macOS or Linux):**

- **Easy way:** Create the codespace (step 2). Then click **Code** > **Codespaces** > **...** > **Open in Visual Studio Code**. The code runs in the codespace. You do not need a compiler on your computer.
- **Other way:** Clone the repository and open the folder in VS Code. You must have a C compiler (`gcc`) on your computer. Click **Install** when VS Code recommends extensions.

## How to Run

**Option A:** Open a `.c` file. Click the **▷** button (top right). The program compiles and runs in the terminal. Type the input and press `Enter`.

**Option B:** Use the terminal. This command compiles and runs `ex1.c`:

```bash
make run1
```

Use `make run2`, `make run3` and `make run4` for the other exercises.

**Debug:** Open a `.c` file. Press `F5`.

## How to Submit

Run these commands in the terminal:

```bash
git add .
git commit -m "Submit assignment 1"
git push
```

You can push more than one time. Your last push is your submission.

> **Error: "Make sure you configure your user.name and user.email in git"?**
> Run these commands one time. Use your name and your GitHub email. Then commit again.
>
> ```bash
> git config --global user.name "Your Name"
> git config --global user.email "you@example.com"
> ```
>
> **Error: "git is not recognized"?** Install Git from <https://git-scm.com>. Then close and open VS Code again.

---

## Exercise 1: Letter Grade (`ex1.c`)

Read a score. Print the letter grade.

| Score    | Output    |
|----------|-----------|
| 90 – 100 | `A`       |
| 80 – 89  | `B`       |
| 70 – 79  | `C`       |
| 60 – 69  | `D`       |
| 0 – 59   | `F`       |
| other    | `Invalid` |

| Input | Output    |
|-------|-----------|
| `85`  | `B`       |
| `101` | `Invalid` |

## Exercise 2: FizzBuzz (`ex2.c`)

Read `n` (`n >= 1`). Print the numbers from 1 to `n`, one on each line. Use these replacements:

- If the number divides by 3 and by 5, print `FizzBuzz`.
- If the number divides by 3 only, print `Fizz`.
- If the number divides by 5 only, print `Buzz`.

| Input | Output |
|-------|--------|
| `5`   | `1`<br>`2`<br>`Fizz`<br>`4`<br>`Buzz` |

## Exercise 3: Sum of Digits (`ex3.c`)

Read `n` (`0 <= n <= 1000000000`). Print the sum of its digits.

| Input  | Output |
|--------|--------|
| `123`  | `6`    |
| `9999` | `36`   |

> Hint: `n % 10` gives the last digit. `n / 10` removes the last digit.

## Exercise 4: Star Triangle (`ex4.c`)

Read `n` (`1 <= n <= 20`). Print a triangle with `n` lines. Line 1 has 1 star, line 2 has 2 stars, and so on.

| Input | Output |
|-------|--------|
| `3`   | `*`<br>`**`<br>`***` |
