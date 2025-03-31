<h1 align="center">42_PUSH-SWAP_1337</h1>
<p align="center">
  <a href="https://github.com/haytham-hammioui/42_Push_swap_1337">
    <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/badges/push_swapm.png" alt="42 Badge">
  </a>
</p>

# push_swap

The `push_swap` project is part of the 42 network curriculum. It is an algorithmic sorting challenge that requires sorting a stack of numbers using only two stacks (`stack A` and `stack B`) and a limited set of operations.

## Features

 - Implements efficient sorting algorithms for small and large sets of numbers.
 - Uses a limited number of operations (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`).
 - Optimizes the number of moves to achieve the best possible solution.
 - Handles edge cases such as duplicate numbers and incorrect input formats.
 - Designed to work efficiently with different stack sizes.

## Getting Started

### Installation

1. **Clone the Repository**
   ```sh
   git clone https://github.com/haytham-hammioui/42_Push_swap_1337.git push_swap
   ```

2. **Compile the Program**
   Navigate to the `push_swap` directory and run `make` and `make bonus` . This will generate the `push_swap` and `checker` executables.
   ```sh
   cd minitalk
   make
   make bonus
   ```

### Usage

1. Run the program `push_swap` with a list of numbers:
    ```sh
     ./push_swap "list of numbers"
    ```
    Example:
    ```sh
     ./push_swap 4 67 3 87 23
    ```
    The program outputs a sequence of operations to sort the given numbers.
    
2. To check if your `push_swap` output is correct, use the bonus `checker`:
    ```sh
     ./checker "list_of_numbers"
    ```
    Example:
    ```sh
     ./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
    ```
    If the sequence correctly sorts the numbers, `checker` will output `OK`, otherwise `KO`.
   
## Contributing

Contributions to `push_swap` are welcome! Whether you've found a bug, have a feature request, or want to contribute code:

1. Fork the repository.
2. Create a new branch for your changes.
3. Add your contributions.
4. Push your branch and open a pull request against the `push_swap` repository.
