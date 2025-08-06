// https://qiita.com/gold-kou/items/fdecea86fbe65e65160a
package main

type Counter interface {
	Increment()
	// Decrement()
	// Reset()
	Value() int
}

type counter struct {
	value int
}

func (c *counter) Value() int {
	return c.value
}

func (c *counter) Increment() {
	c.value++
}

type reverseCounter struct {
	counter
}

func (c *reverseCounter) Increment() {
	c.value--
}

func main() {
	c := &counter{value: 0}
	c.Increment()
	println("Counter value:", c.Value())

	rc := &reverseCounter{counter: counter{value: 0}}
	rc.Increment()
	println("Reverse Counter value:", rc.Value())
}
