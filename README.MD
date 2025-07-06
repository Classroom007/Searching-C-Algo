```markdown
# Search & Sort Lab (C Language)

## Objective
Implement the following functions in `src/`:

- `int linear_search(int arr[], int n, int target);`
- `int binary_search(int arr[], int n, int target);`
- `void bubble_sort(int arr[], int n);`
- `void selection_sort(int arr[], int n);`
- `void insertion_sort(int arr[], int n);`

Your code will be tested using predefined input/output test cases in the CI.

## Folder Structure
Only the `src/` folder is editable.

## How to Test Locally
*(Optional: set up your own test cases)*
```bash
# Compile
gcc -I. src/*.c -o student_lab

# Run (example)
echo -e "5 3 1 2 3 4 5" | ./student_lab    # customize based on driver spec
```

## Submission
- Fill in all `// TODO` sections.
- Commit and push to your Classroom repo.
- CI will report pass/fail status based on hidden test cases.
```
