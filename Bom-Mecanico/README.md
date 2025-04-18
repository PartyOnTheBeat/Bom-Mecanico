# Bom Mecânico

## Overview
Bom Mecânico is a command-line interface (CLI) application designed to help students prepare for the Portuguese driving test. The application focuses on questions related to the car's dashboard and engine components, providing users with an interactive way to learn and test their knowledge.

## Features
- Interactive questions about the car's dashboard and engine.
- User-friendly command-line interface.
- Easy to extend with additional questions and features.

## Project Structure
```
Bom-Mecanico
├── src
│   └── main.cpp          # Entry point of the application
├── include
│   └── dashboard.h       # Declaration of the Dashboard class
├── CMakeLists.txt        # CMake configuration file
└── README.md             # Project documentation
```

## Building the Project
To build the Bom Mecânico project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```

## Running the Application
After building the project, you can run the application from the build directory:
```
./Bom-Mecanico
```

## Contributing
Contributions are welcome! If you would like to contribute to the project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your branch and create a pull request.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.