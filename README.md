# Degu
------

An object-oriented compiled language designed for systems development.

'The street-wise brain-child of C++ and assembly'

## Why use Degu?

Degu is designed to fulfill several objectives.

* Low-level structure that maps well to assembly code
* Object-oriented model that allows for abstraction
* Context-aware syntax that respects the principle of encapsulation
* Logical structure that makes clear ambiguities that exist in other compiled languages such as C

## Status

As of the current time, Degu is still in heavy development.

## Who or what uses Degu?

Currently, no projects officially use Degu.

## Getting a copy of Degu

`git clone https://www.github.com/zesterer/degu-lang.git`

## Building Degu

`cd degu-lang`

`mkdir build && cd build`

`cmake ..`

`make`

## Running Degu

`./bin/degu <args>`

## Examples

Standard "Hello, World!" program

```
#import stdout;

// Functions with no input or output can be shortened from "foo(void ~ void)" to simply "foo()"
main()
{
	stdout.print("Hello, World!\n");
}
```

User greeting program

```
#import stdout;

// Here, the function input is a tuple containing the function inputs
// In Degu, functions may only have one input and one output value
// For multiple input or return values, a tuple is used
main (<int argc, char** argv> input ~ void)
{
	if (input.argc > 1)
	{
		// Here, we use the dereference operator '@' to convert from a char** to a char*
		// Unlike in C where the pointer access ptr[x] returns a value type, in Degu it returns a pointer
		// This means it must be dereferenced to obtain the value it points to
		stdout.print_format("Greetings, %s!\n", input.argv[1]@);
	}
	else
		stdout.print("No name was given.");
}
```

Factorial calculator program

```
#import stdout, stdconvert;

// Functions are only allowed a single input and output value
// For multiple values, tuples are used
factorial(int n ~ int out)
{
	if (n > 1)
		out = n * factorial(n - 1);
	else
		out = 1;
}

main(<int argc, char** argv> input ~ int status)
{
	if (input.argc < 2)
	{
		// In Degu, return values are allocated on function call
		// This means that there is no "return x;" requirement for all code-paths
		// It's also sensible because return space is usually allocated by the caller at a machine-code level
		status = 1;
	}
	else
	{
		// In Degu, deference (@) and reference (&) operators are located to the right of a variable
		// This is done to prevent ambiguities when chaining (i.e: "@a.b.c.d.e" is ambiguous in C)
		int value = stdconvert.to_int(input.argv[1]@);

		if (value > 1)
		{
			// Degu includes a large and intuitive standard library
			stdout.print_format("%i! = %i\n", value, factorial(value));
			status = 0;
		}
		else
			status = 1;
	}
}
```

Array sum program

```
#import stdout;

main()
{
	// In Degu, arrays are value-type blocks of memory, unlike in C where they are pointers
	// Array sizes are considered part of their type
	<5 * int> myarray = <3, 4, 5, 6, 7>; // Equivalent to "= {3, 4, 5, 6, 7}" in C

	int mytotal = 0;
	for (int i = 0; i < size(myarray); i ++) // The size() operator evaluates to the size of a type
		total += myarray<i>;

	stdout.print_format("Total of myarray is %i.\n", mytotal);

	// We can also tell the compiler to guess the size of an array at compile-time based on the value assigned to it
	<? * char> mystring = "This is my string!\n";

	// mystring& means "mystring's location" and returns a pointer to the start of mystring
	stdout.print_format(mystring&);
}
```
