package v1

// V1:
// Take a number n, calculate all its factors,
// for each factor f, test if f is itself
// prime by getting all its factors.  If only 1 and f
// are divisors of f, then f is prime, and a factor
// of n, and therefore a prime factor.

import (
	"math"
)

// If the only divisors of n are 1 and n, then n is prime
func isPrime(n int) bool {
	if n == 0 || n == 1 {
		return false
	}
	facs := factors(n)
	if len(facs) != 0 {
		return false
	}
	return true
}

// Generate all factors
func factors(n int) []int {
	facs := make([]int, 0)
	for i := 2; i < n; i++ {
		if math.Mod(float64(n), float64(i)) == 0.0 {
			facs = append(facs, i)
		}
	}
	return facs
}

// Given some n, return the largest prime factor of n
func LargestPrimeFactor(n int) int {
	biggest := 0
	for i := 2; i < n; i++ {
		if math.Mod(float64(n), float64(i)) == 0.0 { // i divides n evenly
			if isPrime(i) { // i is prime
				if i > biggest { // i is new biggest prime
					biggest = i
				}
			}
		}
	}
	return biggest
}