# Command pattern

## Definition
The command pattern encapsulates a request as an object.

## What does it mean?
The command pattern is an interface with a method to execute, typically called
`execute()`. An external object has a field of type Command, and it can only
call the `execute()` method. The main benefit of this pattern is that you can
inject any type of command to get executed; this could also be achieved with
function pointers, functors, or lambda functions (depending on the language).
