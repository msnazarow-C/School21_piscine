/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgertrud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 00:40:10 by sgertrud          #+#    #+#             */
/*   Updated: 2020/02/17 00:45:30 by sgertrud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdio>

int main() {
  double start = clock();
  // Insert your code here
  printf("%.4lf\n", (clock() - start) / CLOCKS_PER_SEC);
  return 0;
}
