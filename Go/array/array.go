package main

import (
	"fmt"
)

func main() {

	var a [5]int
	fmt.Println("a: ", a)

	var b [5]int
	b[2] = 3
	fmt.Println("b: ", b)

	c := [5]int{5, 4, 3, 2, 1}
	fmt.Println("c: ", c)

	d := []int{5, 4, 3, 2, 1}
	d = append(d, 9)
	fmt.Println("d: ", d)

}
