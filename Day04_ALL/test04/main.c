#include <stdio.h>


int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_eight_queen_puzzle(void);
void ft_eight_queens_puzzle_2(void);

int main() {
	
	//ex00
	if (ft_iterative_factorial(-3) == 0 && ft_iterative_factorial(0) == 1
		&& ft_iterative_factorial(1) == 1 && ft_iterative_factorial(5) == 120
		&& ft_iterative_factorial(13) == 0)
			printf("Ex00: OK\n");

	//ex01
	if (ft_recursive_factorial(-3) == 0 && ft_recursive_factorial(0) == 1
		&& ft_recursive_factorial(1) == 1 && ft_recursive_factorial(5) == 120
		&& ft_recursive_factorial(13) == 0)
			printf("Ex01: OK\n");

	//ex02
	if (ft_iterative_power(1234567,-3) == 0 && ft_iterative_power(1234567,0) == 1
		&& ft_iterative_power(1234567,1) == 1234567 && ft_iterative_power(2,10) == 1024
		&& ft_iterative_power(-2,11) == -2048)
			printf("Ex02: OK\n");

	//ex03
	if (ft_recursive_power(1234567,-3) == 0 && ft_recursive_power(1234567,0) == 1
		&& ft_recursive_power(1234567,1) == 1234567 && ft_recursive_power(2,10) == 1024
		&& ft_recursive_power(-2,11) == -2048)
			printf("Ex03: OK\n");

	//ex04
	if (ft_fibonacci(0) == 0 && ft_fibonacci(1) == 1 && ft_fibonacci(3) == 2
		&& ft_fibonacci(11) == 89)
			printf("Ex04: OK\n");
    /*
	//ex05
	if (ft_sqrt(4) == 2 && ft_sqrt(8) == 0
			&& ft_sqrt(2147483647) == 0  && ft_sqrt(2147302921) == 46339)
			printf("Ex05: OK\n");

	//ex06
	if (ft_is_prime(1) == 0 && ft_is_prime(-23422) == 0 && ft_is_prime(199) == 1
			&& ft_is_prime(2147483647) == 1 && ft_is_prime(2147483641) == 0)
			printf("Ex06: OK\n");

	//ex07
	if (ft_find_next_prime(1) == 2 && ft_find_next_prime(81) == 83 && ft_find_next_prime(109) == 109
			&& ft_find_next_prime(2147483647) == 2147483647 && ft_find_next_prime(2147483424) == 2147483647)
			printf("Ex07: OK\n");
*/

		
	return (0);
}
