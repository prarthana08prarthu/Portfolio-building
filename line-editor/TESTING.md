# Testing Report

## Project

Simple Line Editor in C

## Team Members

* Prarthana HS
* Pradnya
* Priya

## Testing Environment

* Operating System: Windows
* IDE: Visual Studio Code
* Compiler: GCC
* Language: C

## Test Cases

| Test Case           | Input             | Expected Result                | Status |
| ------------------- | ----------------- | ------------------------------ | ------ |
| Insert at beginning | `I 1 New first line` | New line inserted at position 1 | Passed |
| Insert at end | `I 3 Last line` | New line inserted at the end | Passed |
| Delete only line | `D 1` | Only line deleted and document becomes empty | Passed |
| Insert line         | `I 1 Hello`       | Line inserted                  | Passed |
| Insert another line | `I 2 Welcome`     | Line inserted                  | Passed |
| Display document    | `P`               | All lines displayed            | Passed |
| Modify line         | `M 1 Hello World` | Line 1 modified                | Passed |
| Delete line         | `D 2`             | Line 2 deleted                 | Passed |
| Count lines         | `C`               | Number of lines displayed      | Passed |
| Help                | `H`               | Help menu displayed            | Passed |
| Invalid line number | `D 10`            | Error message displayed        | Passed |
| Empty document      | `D 1`             | Empty document error displayed | Passed |
| Quit                | `Q`               | Program exits safely           | Passed |

## Result

The Simple Line Editor was successfully compiled using GCC and tested through the terminal.

The core operations Insert, Delete, Modify, Display, and Line Count were tested successfully. Error handling for invalid operations was also tested.

The program successfully releases dynamically allocated memory before exiting.
The Simple Line Editor was successfully compiled using GCC and tested through the terminal.

The core operations Insert, Delete, Modify, Display, and Line Count were tested successfully. Edge cases including insertion at the beginning, insertion at the end, deletion of the only line, empty document handling, and deletion of a non-existing line were also tested successfully.

The program handles invalid operations with appropriate error messages and releases dynamically allocated memory before exiting.

## Priyadarshini's Verification

The project was independently compiled and executed using GCC on Windows.

The following tests were personally verified:
- Insert at beginning
- Insert at end
- Display document
- Delete line
- Delete the only line
- Empty document handling
- Invalid delete on an empty document

All tested operations produced the expected results without crashing.
