def count_beautiful_pairs(arr):
    from collections import defaultdict

    # Create a dictionary to store the frequency of triples
    triple_count = defaultdict(int)

    # Initialize count of beautiful pairs
    beautiful_count = 0

    # Iterate through the array and count beautiful pairs
    for i in range(len(arr) - 2):
        # Create a tuple representing the current triple
        triple = (arr[i], arr[i + 1], arr[i + 2])

        # Increment the frequency of the current triple
        triple_count[triple] += 1

        # If there are two occurrences of the current triple, it forms a beautiful pair
        if triple_count[triple] == 2:
            beautiful_count += 1

        # Delete the last element of the previous triple to consider the next triple
        prev_triple = (arr[i - 1], arr[i], arr[i + 1])
        triple_count[prev_triple] -= 1

    return beautiful_count

def main():
    # Read the number of test cases
    t = int(input())

    # Iterate through each test case
    for _ in range(t):
        # Read the length of the array
        n = int(input())

        # Read the array of integers
        arr = list(map(int, input().split()))

        # Count beautiful pairs of triples
        beautiful_pairs_count = count_beautiful_pairs(arr)

        # Print the count of beautiful pairs
        print(beautiful_pairs_count)

if __name__ == "__main__":
    main()
