#!/usr/bin/env python3
# @category Decompiler
# @description Export all functions to C files with improved settings

import os

from ghidra.app.decompiler import DecompileOptions, DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

# Get output directory from environment or use default
output_dir = os.getenv("GHIDRA_OUTPUT_PATH", "_ghidra")
output_path = os.path.join(os.getcwd(), output_dir)

# Create output directory if it doesn't exist
if not os.path.exists(output_path):
    os.makedirs(output_path)

# Get current program
program = getCurrentProgram()
if program is None:
    print("ERROR: No program is currently open")
    exit(1)

program_name = program.getName()
print("Decompiling program: {}".format(program_name))

# Initialize decompiler with improved options
monitor = ConsoleTaskMonitor()
decompiler = DecompInterface()
decompiler.openProgram(program)

# Configure decompiler options for better output
options = DecompileOptions()

# Code cleanup options
options.setEliminateUnreachable(True)  # Remove unreachable code blocks
options.setSimplifyDoublePrecision(True)  # Better floating point handling

# Comment inclusion (include all available comments for better context)
options.setPRECommentIncluded(True)  # PRE comments (function headers)
options.setPLATECommentIncluded(True)  # PLATE comments (repeatable)
options.setPOSTCommentIncluded(True)  # POST comments (end of line)
options.setEOLCommentIncluded(True)  # End of line comments
options.setWARNCommentIncluded(True)  # Warning comments from analysis

# Display options for better readability
options.setNoCastPrint(False)  # Show casts (important for understanding types)
options.setConventionPrint(True)  # Show calling conventions
options.setMaxWidth(120)  # Wider lines for better readability

# Set options
decompiler.setOptions(options)

# Enable C code output (not just syntax tree)
decompiler.toggleCCode(True)
decompiler.toggleSyntaxTree(True)

# Set simplification style for better decompilation
decompiler.setSimplificationStyle("decompile")

# Get all functions
function_manager = program.getFunctionManager()
all_functions = list(function_manager.getFunctions(True))

# Filter out external/thunk functions (library stubs)
functions = []
for func in all_functions:
    if func.isExternal() or func.isThunk():
        continue
    functions.append(func)

print(
    "Found {} total functions ({} internal, {} external/thunk)".format(
        len(all_functions), len(functions), len(all_functions) - len(functions)
    )
)

# Create output file
output_file = os.path.join(output_path, program_name + ".c")
print("Writing to: {}".format(output_file))

with open(output_file, "w") as f:
    f.write("// Decompiled: {}\n\n".format(program_name))

    # Export each function
    for i, func in enumerate(functions, 1):
        if monitor.isCancelled():
            break

        func_name = func.getName()

        # Decompile function with 60 second timeout
        results = decompiler.decompileFunction(func, 60, monitor)

        if results and results.decompileCompleted():
            decomp_code = results.getDecompiledFunction().getC()
            f.write(decomp_code)
            f.write("\n\n")

            if i % 10 == 0:
                print("  Decompiled {}/{} functions".format(i, len(functions)))
        else:
            # Include error message if available
            error_msg = results.getErrorMessage() if results else "Unknown error"
            f.write("// Failed to decompile: {} ({})\n\n".format(func_name, error_msg))

decompiler.dispose()
print("Decompilation complete: {}".format(output_file))
