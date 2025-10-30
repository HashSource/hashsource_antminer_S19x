int sub_C0440()
{
  sub_53274(
    "agent",
    11,
    (int)sub_C0324,
    (int)"Translate an expression into remote agent bytecode for tracing.\n"
         "Usage: maint agent [-at location,] EXPRESSION\n"
         "If -at is given, generate remote agent bytecode for this location.\n"
         "If not, generate remote agent bytecode for current frame pc address.",
    (int **)&dword_47478C);
  sub_53274(
    "agent-eval",
    11,
    (int)sub_C031C,
    (int)"Translate an expression into remote agent bytecode for evaluation.\n"
         "Usage: maint agent-eval [-at location,] EXPRESSION\n"
         "If -at is given, generate remote agent bytecode for this location.\n"
         "If not, generate remote agent bytecode for current frame pc address.",
    (int **)&dword_47478C);
  return sub_53274(
           "agent-printf",
           11,
           (int)sub_C04C4,
           (int)"Translate an expression into remote agent bytecode for evaluation and display the bytecodes.",
           (int **)&dword_47478C);
}
