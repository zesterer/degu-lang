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

main()
{
	stdout.print("Hello, World!\n");
}
```

User greeting program

```
#import stdout;

main (<int argc, char[][] argv> ~ void)
{
	if (argc > 1)
		stdout.print_format("Greetings, %s!\n", argv[1]);
	else
		stdout.print("No name was given.");
}
```

Factorial calculator program

```
#import stdout, stdconvert;

factorial(int n ~ int out)
{
	if (n > 1)
		out = n * factorial(n - 1);
	else
		out = 1;
}

main(<int argc, char[]* argv> ~ int status)
{
	if (argc < 2)
	{
		status = 1;
	}
	else
	{
		int value = stdconvert.to_int(argv[1]);

		if (value > 1)
		{
			stdout.print_format("%i! = %i\n", value, factorial(value));
			status = 0;
		}
		else
			status = 1;
	}
}
```
