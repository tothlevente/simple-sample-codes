package main

import (
	"fmt"
)

func main() {

	// "for"
	for i := 1; i <= 9; i++ {
		fmt.Println(i)
	}

	// "while"
	a := 1
	for a <= 5 {
		fmt.Println(a)
		a++
	}

	// "arr"
	arr := []string{"a", "b", "c", "d"}
	for index, value := range arr {
		fmt.Println("index", index, "value", value)
	}

	// "map"
	m := make(map[string]string)

	m["a"] = "alfa"
	m["b"] = "beta"

	for key, value := range m {
		fmt.Println("key", key, "value", value)
	}

}
