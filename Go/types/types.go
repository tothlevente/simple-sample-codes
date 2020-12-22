package main

import (
	"fmt"
)

type person struct {
	name string
	age  int
}

func main() {
	p := person{name: "Levente", age: 28}
	fmt.Println("p:", p)
	fmt.Println("Name:", p.name)
	fmt.Println("Age:", p.age)
}
