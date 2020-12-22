package main

import (
	"errors"
	"fmt"
	"math"
)

func main() {
	// sum
	res := sum(2, 3)
	fmt.Println(res)

	// sqrt
	result, err := sqrt(16) // try sqrt(-16) to get error
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(result)
	}
}

func sum(x int, y int) int {
	return x + y
}

func sqrt(x float64) (float64, error) {
	if x < 0 {
		return 0, errors.New("undefined for negative numbers")
	}

	return math.Sqrt(x), nil
}
