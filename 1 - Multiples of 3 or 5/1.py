# Multiples of 3 and 5
"""
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

233168
"""

def main(N):
    # Gauss Summation Formula 
    # \sum_{i=1}^{n} = 0.5 * n * (n + 1)


    floor_3 = (N-1) // 3 
    floor_5 = (N-1) // 5
    floor_15 = (N-1) // 15

    sum_3 = 3 * 0.5 * floor_3 * (floor_3 + 1)
    sum_5 = 5 * 0.5 * floor_5 * (floor_5 + 1)
    sum_15 = 15 * 0.5 * floor_15 * (floor_15 + 1)


    return int(sum_3 + sum_5 - sum_15)



if __name__ == "__main__":
    print(main(10))