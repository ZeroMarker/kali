# Modern Operating Systems

by	Andrew S. Tanenbaum
	U. Vrije

## Preface

## About the author

# 1
## Introduction

	software
		^
		|	
	operating system
		^
		|
	hardware

Shell
GUI Graphical User Interface gooey

kernel mode	supervisor
user mode	web browser E-mail reader music player
		program that allow user to change password


## 1.1 what if an operating system?

## 1.1.1 the operating system as an extend machine

architecture: instruction, memory organization, I/O, bus structure

NEC PD765
16 command
reading && writing date, moving the disk arm, and formatting tracks,
initializing, sensing, resetting, and recalibrating the controller and the dirvers.

The job of the operating system is to create good abstractions and then implement and manage the abstract objects
thus created.

One of the  major tasks of the operating system is to hide the hardware and present programs with nice, clean,
elegant, consistent, abstractions to work with instead.

OS abstractions are same to applications, but application give user different user interface.

## 1.1.2 the  operating system as a resource manager

Modern operating system allow multiple programs to run at the same time.

In short, this view of the operating system holds that its primary task is to keep track of which programs are 
using which resource,

Resource management includes multiplexing(sharing) resources in two different ways: in time and in space.

Time: CPU
Space: memory, disk

## 1.2 history of operating system

## 1.2.1 the first generation(1945-55) vacuum tubes

The programmer insert plugboard into the computer,

By the early 1950s, the routine had improved somewhat with the introduction of puncheed cards.

## 1.2.2 the second generation(1955-65) transistors and batch system

The introduction of the transistor in the mid-1950s changed the picture radically.
For the first time, there was a clear separation between designers, builders, operators, programmers, and 
maintenance personnel.

These machines, now called mainframes,
To run a job(i.e, a program or set of programs), a programmer would first write the program on paper (in
FORTRAN or assembler), then punch it on cards. He would then bring the card deck down to the input room and
hand it to one of the operators and go drink coffee until the output was ready.
Much computer time was wasted while operators were walking around the machine room.

The batch system to reduce the wasted time.

$JOB, 10,6610802, MARVIN TANENBAUM

$FORTRAN 

Fortran program
///////////////
///////////////

$LOAD

$RUN

Data for program
//////////////
//////////////

$END

Large second-generation computers were used mostly for scientific and engineering calculations,

## 1.2.3 the third generation(1965-1980) ICs and multiprogramming

The IBM 360 was designed to handle both scientific(i.e., numerical) and commercial computing.
The IBM 360 was the first major computer line to use (small-scale) ICs (Integrated Circuits),

The intention was that all software, including the operating system OS/360 had to work on all models.

multiprogramming
On the 7094, when the current job paused to wait for a tape or other I/O operation to complete, the CPU simply 
sat idle until the I/O finished.
The solution that evolved was to partition memory into several pieces, with a different job in each partition,
While on job was waiting for I/O to complete, another job could be using the CPU.
