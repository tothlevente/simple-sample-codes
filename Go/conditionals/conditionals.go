package main

import (
	"fmt"
)

func main() {
	a := 5

	if a > 6 {
		fmt.Println(a, "is more than 6!")
	} else if a < 2 {
		fmt.Println(a, "is less than 3!")
	}
}
