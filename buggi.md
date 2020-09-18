* Some assembly code to interact with hardware
*
1. main file is -> main.c
2. init -> registers, pages, frames
3. mpmain()
4. proc.c ->
    1. struct proc in proc.c
    2. proc.h
    3. RUNNABLE process is to be scheduled
    4. swtch(&(c->scheduler), p->context); -> Dispacher
    5. Round robin sort of
5. make qemu -> an emulator
6. shell program in sh.c
7. create file echo_t.c
8. make file -> objectds -> .o file
9. ctrl + a  ; c -> type quit
10. defs have syscalls -> you need to make both syscalls and user programs
11. stack overflow -> find what to do in a syscall
  1. defs.h
  2. void syscall -> loops across functions to find which number to run
12. documentation -> find


> defs.c
>
> proc.c //add addition in the end
> sysproc.c // Define args and check them // See already wriiten commands
> syscall.h -> add the name
> addition  ->

---
Default is round robin
Change it to priority based scheduler
No priorites actually
But define them initially ,in struct proc -> create a new var int priority
Default priority is 60
----
Benchmark program -> should run for atleast sometime
atleast 20 seconds
Higher priority -> More number
Report--------------------------------------
-> Round robin -> Each takes same time
-> Priority should take time
-------------------------------------------
Mutex Semaphores viva
