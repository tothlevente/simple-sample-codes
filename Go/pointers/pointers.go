package main

import (
	"fmt"
)

func main() {
	// a
	a := 7
	fmt.Println("a:", a)
	fmt.Println("&a:", &a)

	// b
	b := 7
	inc(&b)
	fmt.Println("b:", b)
	fmt.Println("&b:", &b)

}

func inc(x *int) {
	*x++
}
