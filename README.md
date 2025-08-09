# 🔢 Numerical Methods Collection

[![C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![MIT License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)
[![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)](CONTRIBUTING.md)

> A comprehensive collection of numerical methods implementations in C for solving various mathematical problems including linear equations, differential equations, and algebraic equations.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Categories](#categories)
  - [Simultaneous Linear Equations](#simultaneous-linear-equations)
  - [Ordinary Differential Equations](#ordinary-differential-equations)
  - [Algebraic and Transcendental Equations](#algebraic-and-transcendental-equations)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)
- [Author](#author)

## 🎯 Overview

This repository contains well-documented implementations of essential numerical methods used in computational mathematics and engineering. Each algorithm is implemented in C with clear, readable code and proper documentation to help students and professionals understand the underlying mathematical concepts.

## ✨ Features

- **Clean C implementations** with detailed comments
- **Modular design** for easy understanding and modification
- **Educational focus** with clear variable naming and structure
- **Performance optimized** algorithms
- **Cross-platform compatibility**
- **Well-documented** code with mathematical explanations

## 📚 Categories

### 🔧 Simultaneous Linear Equations

Methods for solving systems of linear equations of the form **Ax = b**:

| Method | File | Description | Complexity |
|--------|------|-------------|------------|
| **Jacobi Method** | [`jacobi.c`](jacobi.c) | Iterative method for 3×3 matrices | O(n³) per iteration |
| **Gauss-Seidel Method** | [`gauss_seidel.c`](gauss_seidel.c) | Improved iterative method for 3×3 matrices | O(n³) per iteration |

**Key Features:**
- ✅ Handles 3×3 matrix systems
- ✅ Convergence checking
- ✅ Error tolerance control
- ✅ Iteration count limiting

### 🧮 Ordinary Differential Equations (ODEs)

Numerical methods for solving first-order differential equations:

| Method | File | Description | Order of Accuracy |
|--------|------|-------------|-------------------|
| **Euler's Method** | [`euler.c`](euler.c) | Basic first-order method | O(h) |
| **Modified Euler's Method** | [`euler_modified.c`](euler_modified.c) | Improved predictor-corrector method | O(h²) |
| **4th Order Runge-Kutta** | [`rk.c`](rk.c) | High-accuracy method for ODEs | O(h⁴) |
| **Picard's Method** | [`picad.c`](picad.c) | Method for 2-variable polynomial derivatives | Analytical |

**Supported Equation Types:**
- ✅ First-order ODEs: `dy/dx = f(x,y)`
- ✅ Initial value problems
- ✅ 2-variable polynomial functions
- ✅ Configurable step sizes

### 🔍 Algebraic and Transcendental Equations

*Coming Soon* - Methods for finding roots of nonlinear equations:
- Newton-Raphson Method
- Bisection Method
- Secant Method
- False Position Method

## 🚀 Getting Started

### Prerequisites

- **C Compiler** (GCC, Clang, or MSVC)
- **Standard C Library**
- **Make** (optional, for automated building)

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Karri-Tirumala-Venkatesh/Numerical-Methods.git
   cd Numerical-Methods
   ```

2. **Compile individual programs:**
   ```bash
   # Compile Jacobi method
   gcc -o jacobi jacobi.c -lm
   
   # Compile Runge-Kutta method
   gcc -o rk rk.c -lm
   
   # Compile all programs
   gcc -o euler euler.c -lm
   gcc -o euler_modified euler_modified.c -lm
   gcc -o gauss_seidel gauss_seidel.c -lm
   gcc -o picad picad.c -lm
   ```

3. **Run the programs:**
   ```bash
   ./jacobi
   ./rk
   # ... and so on
   ```

## 💻 Usage

### Example: Solving Linear System with Jacobi Method

```c
// Example system: 3x + y - z = 4
//                 x + 4y + 2z = 11  
//                 2x - y + 5z = 3

./jacobi
// Follow the interactive prompts to input coefficients
```

### Example: Solving ODE with Runge-Kutta

```c
// Example: dy/dx = x + y, y(0) = 1
// Find y(0.5) with step size h = 0.1

./rk
// Input the function parameters when prompted
```

## 📁 File Structure

```
Numerical-Methods/
├── README.md                 # This file
├── LICENSE                   # MIT License
├── jacobi.c                 # Jacobi method implementation
├── gauss_seidel.c          # Gauss-Seidel method implementation  
├── euler.c                  # Euler's method implementation
├── euler_modified.c         # Modified Euler's method implementation
├── rk.c                     # 4th order Runge-Kutta implementation
├── picad.c                  # Picard's method implementation
└── docs/                    # Additional documentation (coming soon)
    ├── theory/              # Mathematical theory explanations
    └── examples/            # Worked examples and tutorials
```

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/new-method`)
3. **Implement** your numerical method following our coding standards:
   - Use clear, descriptive variable names
   - Add comprehensive comments
   - Include input validation
   - Test with multiple examples
4. **Commit** your changes (`git commit -m 'Add Newton-Raphson method'`)
5. **Push** to the branch (`git push origin feature/new-method`)
6. **Open** a Pull Request

### 📋 Coding Guidelines

- Follow **C99 standard**
- Use **meaningful variable names** (e.g., `coefficient_matrix` instead of `a`)
- **Comment extensively** explaining the mathematical steps
- **Validate inputs** and handle edge cases
- **Use consistent indentation** (2 spaces)
- **Include example usage** in comments

### 🎯 Areas for Contribution

- [ ] Root-finding methods (Newton-Raphson, Bisection, etc.)
- [ ] Numerical integration (Simpson's rule, Trapezoidal rule)
- [ ] Interpolation methods (Lagrange, Newton's divided difference)
- [ ] Matrix operations (LU decomposition, eigenvalues)
- [ ] Documentation and tutorials
- [ ] Performance optimizations
- [ ] Unit tests

## 📜 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**Karri Tirumala Venkatesh**
- GitHub: [@Karri-Tirumala-Venkatesh](https://github.com/Karri-Tirumala-Venkatesh)
- Repository: [Numerical-Methods](https://github.com/Karri-Tirumala-Venkatesh/Numerical-Methods)

## 🙏 Acknowledgments

- Inspired by classical numerical analysis textbooks
- Built for educational purposes and practical applications
- Thanks to the open-source community for continuous inspiration

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

[![GitHub stars](https://img.shields.io/github/stars/Karri-Tirumala-Venkatesh/Numerical-Methods.svg?style=social&label=Star)](https://github.com/Karri-Tirumala-Venkatesh/Numerical-Methods)
[![GitHub forks](https://img.shields.io/github/forks/Karri-Tirumala-Venkatesh/Numerical-Methods.svg?style=social&label=Fork)](https://github.com/Karri-Tirumala-Venkatesh/Numerical-Methods/fork)

</div>
