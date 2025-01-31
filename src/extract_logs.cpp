#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

void extractLogsForDate(const string& filePath, const string& date, const string& outputFilePath) {
    // Open the input log file for reading
    ifstream logFile(filePath);

    //checking Error  in case the log file cannot be opene
    if (!logFile.is_open()) {
        cerr << "Error opening file: " << filePath << endl;
        return;
    }
     // Open the output file for writing the extracted logs
    ofstream outputFile(outputFilePath);
    if (!outputFile.is_open()) {
        cerr << "Error opening output file: " << outputFilePath << endl;
        return;
    }

    string line;
    while (getline(logFile, line)) {
        if (line.find(date) == 0) { 
            outputFile << line << endl;
        }
    }

    logFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <date>" << endl;
        return 1;
    }

    string filePath = "logs_2024.log";  
    string date = argv[1];              // Date in YYYY-MM-DD format
    string outputFilePath = "../output/output_" + date + ".txt";  // Output file path

    extractLogsForDate(filePath, date, outputFilePath);

    return 0;
}
