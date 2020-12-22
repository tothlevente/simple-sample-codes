package main

import (
	"fmt"
	"time"
)

func main() {
	go count("sheep") // try without "go" and the "count("bird")" will never execute
	count("bird")
}

func count(thing string) {
	for i := 1; true; i++ {
		fmt.Println(i, thing)
		time.Sleep(time.Second)
	}
}
