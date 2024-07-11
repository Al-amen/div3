#include <iostream>
#include <cmath>

// Function to count lattice points
long long countLatticePoints(int r) {
    // Count of lattice points within the annulus
    long long annulus_points = 4 * r; // 4 sides of length r

    // Subtract the lattice points within the circle of radius r
    long long circle_points = 0;
    for (int x = 0; x <= r; x++) {
        int y = sqrt(r*r - x*x); // Calculate y-coordinate using Pythagoras theorem
        circle_points += y + 1; // Add lattice points in one quadrant and include the origin
    }
    circle_points *= 4; // Multiply by 4 for all quadrants

    // Count of lattice points within the annulus
    return annulus_points - circle_points;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int r;
        std::cin >> r;
        long long result = countLatticePoints(r);
        std::cout << result << std::endl;
    }
    return 0;
}
