# Log Extraction for Large Files

## Overview

This project provides an efficient solution to extract log entries for a specific date from a large log file (up to 1 TB). The script processes the log file line by line, ensuring minimal memory usage and fast execution, even for large files.

## Features

- Efficient extraction of log entries based on a specified date.
- Optimized for large files (1 TB and beyond).
- Minimal memory usage by processing one line at a time.
- Supports multiple log formats (based on timestamp YYYY-MM-DD).
- Outputs extracted logs into a file named `output_YYYY-MM-DD.txt`.

## Requirements

- C++ Compiler (e.g., g++) for compiling the program.
- Access to a terminal/command line for running the program.

## Installation

1. Fork the repository to your GitHub account.
2. Clone the repository to your local machine:

```bash
git clone https://github.com/yogit4554/farMart/edit/main/Readme.md
cd log-extraction```



## Usage

### 1. Compile the C++ Program
First, compile the C++ code to create the executable:

```bash
g++ -o log_extractor log_extractor.cpp
```

### 2. Run the Program
To extract logs for a specific date, run the program with the following command:

```bash
./log_extractor <log_file_path> <YYYY-MM-DD>
```

- `<log_file_path>`: Path to the large log file.
- `<YYYY-MM-DD>`: Date for which you want to extract the logs.

#### Example:
```bash
./log_extractor /var/logs/system.log 2024-01-31
```
This command will extract logs from `system.log` for the date `2024-01-31`.

### 3. Output Location
The extracted logs will be saved in the output directory as `output_YYYY-MM-DD.txt`.

For example, logs for `2024-01-31` will be saved in:

```bash
output/output_2024-01-31.txt
```

### 4. Verify Output
You can verify the extracted logs by displaying the output file:

```bash
cat output/output_2024-01-31.txt
```

---

## Discussion of Solution

### Solutions Considered:

#### 1. Naïve Approach (Full File Loading):
- **Drawback**: High memory usage and slow processing for large files.

#### 2. Line-by-Line Processing (Final Choice):
- **Advantages**: Efficient memory usage, fast execution, and scalability for large files.

#### 3. Indexed Searching (Future Enhancement):
- **Drawback**: Requires preprocessing for building an index.

### Final Solution
We chose the **Line-by-Line Processing** method due to its optimal balance between memory efficiency and speed. The solution reads the file line by line, processes only relevant logs for the given date, and stores the results in a new output file. This method ensures minimal memory usage and is scalable for handling large log files (1 TB or more).

### Performance Considerations
- **Memory Efficiency**: The program processes one line at a time, avoiding high memory consumption even with large files.
- **Speed**: Fast execution due to focused processing of relevant log entries.

## 🤝 Let's Connect

Have ideas or feedback? I’d love to hear from you!
- **Email**: yteewari@gmail.com
- **Linkedin**: https://www.linkedin.com/in/yogendra-teewari/
- **GitHub**: https://github.com/yogit4554
