# Parallel Data Processing — Matrix Operations

A C project exploring parallel computing techniques and performance
optimization applied to matrix operations. Built using OpenMP (`#pragma`)
and low-level optimizations in Code::Blocks.

##  Overview

The project benchmarks and compares different parallelization and
optimization strategies for matrix operations in C:

| Module | Description |
|--------|-------------|
| `LoopUnrolling` | Performance optimization via manual loop unrolling |
| `Pragma` | Parallelism using OpenMP `#pragma omp` directives |
| `PeakPerformance` | Benchmarking to measure theoretical peak performance |

##  Key Concepts

- **Loop Unrolling** — reduces loop overhead by manually expanding
  iterations, improving CPU pipeline efficiency
- **OpenMP Pragmas** — enables multi-threaded parallel execution
  with minimal code changes
- **Peak Performance** — measures FLOPS (Floating Point Operations
  per Second) to evaluate hardware utilization

##  How to Run

Open any `.cbp` file in **Code::Blocks** and build & run.

Or compile manually with GCC + OpenMP:

```bash
gcc -O2 -fopenmp main.c -o main
./main
```

##  Technologies
- C
- OpenMP (`#pragma omp`)
- Code::Blocks IDE
- GCC compiler

##  Context
University project — Parallel Computing / High Performance Computing course.
