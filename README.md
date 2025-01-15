# C Programming Exercises: Early Projects from Mechanical Engineering

This repository showcases two small C programs that I developed during my first year of Mechanical Engineering in 2008. These projects were part of my introduction to programming and represent foundational steps in understanding logic, algorithms, and user interaction in software development.

## Projects Included

### 1. **Decimal to Degrees Converter**

A utility program for converting between decimal degrees and various degree formats.

#### Features:
- Convert **Decimal Degrees** to **Degrees, Minutes, Seconds (DMS)**.
- Convert **Degrees (ddmm.mm)** to **Decimal Degrees**.
- Convert **Degrees (ddmmss.ss)** to **Decimal Degrees**.
- Interactive menu to select the desired conversion type or exit.

#### Example Outputs:
- `123.4567` → `123 degrees 27.402' = 123 deg. 27' 24.12"`
- `123 deg, 45.67'` → `123.761167`
- `123 deg, 45', 30.5"` → `123.758472`

---

### 2. **Temperature Converter**

A simple program for converting temperatures between Fahrenheit and Celsius.

#### Features:
- Convert **Fahrenheit** to **Celsius**.
- Convert **Celsius** to **Fahrenheit**.
- User-friendly interface with a clear menu.

#### Example Outputs:
- `98.6 F` → `37.00 C`
- `25.00 C` → `77.00 F`

---

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/meierrene/c-programming-exercises.git
   ```

   Navigate to the Project Directory:
  ```bash
cd c-programming-exercises
  ```
Compile the Programs:
For the Decimal to Degrees Converter:
  ```bash
gcc decimal_to_degrees_converter.c -o degrees_converter
  ```
For the Temperature Converter:
  ```bash
gcc temperature_converter.c -o temp_converter
  ```
Run the Compiled Executables:
Decimal to Degrees Converter:
  ```bash
./degrees_converter
  ```
Temperature Converter:
  ```bash
./temp_converter
  ```
Why These Projects?
These exercises are a "resume" of my early exploration into programming during my Mechanical Engineering course. They highlight:

Applying mathematical formulas programmatically.
Creating interactive user experiences in C.
Building problem-solving skills that would later influence my development journey.
Future Enhancements
While these projects are basic, they could be expanded with:

Input validation to handle errors gracefully.
Extended functionality (e.g., additional conversion formats, more temperature units).
Improved user interface for modern systems.
License
This repository is licensed under the MIT License.

Acknowledgments
These programs mark the beginning of my journey into programming, blending engineering principles with computational logic. They represent not only a technical milestone but also a nostalgic step in my growth as a developer.
