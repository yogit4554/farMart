# Log Extraction for Large Files

## Submission Guidelines

### 1. Fork the Repository:
- Fork the provided repository to your own GitHub account.

---

## *Discussion.md*

### *Solutions Considered:*

#### *1. Naïve Approach (Full File Loading) ❌*
- **Method:** Load the entire file into memory and filter the required logs.
- **Drawback:**
  - **High Memory Usage:** Not feasible for large files (e.g., 1 TB) due to excessive memory consumption.
  - **Slow Processing:** Requires unnecessary loading of non-relevant data.

#### *2. Line-by-Line Processing (Streaming) ✅ [Final Choice]*
- **Method:** Read the log file *line by line*, checking if each line starts with the given date.
- **Advantages:**
  - **Efficient Memory Usage:** Only keeps one line in memory at a time.
  - **Fast Execution:** Avoids unnecessary processing of the entire file.
  - **Scalability:** Works efficiently for very large files, including files over 1 TB.

#### *3. Indexed Searching (Future Enhancement) 🔍*
- **Method:** Maintain an indexed log file for quick lookups, leveraging binary search.
- **Drawback:** Requires preprocessing to create the index, adding complexity.
- **Best for:** Structured logs with a pre-built index.

---

### *Final Solution Summary:*

We chose the **Line-by-Line Processing** method as the final solution because it strikes a perfect balance between memory efficiency and speed. This approach allows us to:

- **Optimize memory usage** by reading the log file *line by line*, avoiding the need to load the entire file into memory.
- **Ensure fast execution** by processing only the relevant lines, improving performance.
- **Scalability** for handling very large log files, making it an ideal solution for files as large as 1 TB or beyond.

The program uses efficient I/O operations and ensures minimal memory overhead by processing one line at a time.

---

## *Steps to Run the Program*

### *1. Compile the C++ Program*
sh
g++ -o log_extractor log_extractor.cpp


### *2. Run the Program*
sh
./log_extractor <log_file_path> <YYYY-MM-DD>

Example:
sh
./log_extractor /var/logs/system.log 2024-01-31


### *3. Output Location*
The extracted logs will be saved in the output directory:

../output/output_YYYY-MM-DD.txt

Example:

../output/output_2024-01-31.txt


### *4. Verify Output*
You can check the extracted logs using:
sh
cat ../output/output_2024-01-31.txt


---

## *Performance Considerations*
- *Optimized for large files* (1 TB and beyond).
- *Minimal memory usage* (processes one line at a time).

---

## 🤝 Let's Connect

Have ideas or feedback? I’d love to hear from you!
- **Email**: yteewari@gmail.com
- **Linkedin**: https://www.linkedin.com/in/yogendra-teewari/
- **GitHub**: https://github.com/yogit4554