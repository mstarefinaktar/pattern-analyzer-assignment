# pattern-analyzer-assignment

# ATE Pattern Processor – Assignment Submission

This project was developed as part of a screening assignment for a Test Engineering role. It showcases a tool written in C++ to process and evaluate ATE-style test pattern files, producing rule-checked logs.

## 🧾 Assignment Summary

The assignment was to:
- Process pattern-like data using a programming language (C++ in this case)
- Generate a new pattern or cleaned output
- Log the results to output files

This submission includes:
- The source code: `src/rulescheck.cpp`
- The assignment description: `docs/Assignment_Recynergy.docx`
- The original input pattern: `input/pat_2`
- The result files: `output/rulescheck_rc.txt`, `output/rulescheck_rc_logout.txt`

## 🚀 How to Run

```bash
g++ -std=c++17 src/rulescheck.cpp -o rulescheck
./rulescheck input/pat_2
```

## 📂 Project Structure

| Folder        | Contents                                 |
|---------------|-------------------------------------------|
| `src/`        | Main source code (`rulescheck.cpp`)       |
| `input/`      | Input pattern file (`pat_2`)              |
| `output/`     | Processed results and logs                |
| `docs/`       | Original assignment instructions          |

## ✅ Output

After execution, the tool generates:
- `rulescheck_rc.txt` — Parsed or validated output
- `rulescheck_rc_logout.txt` — Log of rule checks and validations

## 📎 Outcome

This tool helps automate rule validation or transformation of pattern-based inputs common in ATE PGM development, speeding up manual review and preparation.
