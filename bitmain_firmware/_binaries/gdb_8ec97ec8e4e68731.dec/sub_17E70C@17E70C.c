int sub_17E70C()
{
  sub_535B8(
    "coerce-float-to-double",
    10,
    (int)&unk_46D518,
    "Set coercion of floats to doubles when calling functions.",
    "Show coercion of floats to doubles when calling functions",
    "Variables of type float should generally be converted to doubles before\n"
    "calling an unprototyped function, and left alone when calling a prototyped\n"
    "function.  However, some older debug info formats do not provide enough\n"
    "information to determine that a function is prototyped.  If this flag is\n"
    "set, GDB will perform the conversion for a function it considers\n"
    "unprototyped.\n"
    "The default is to perform the conversion.\n",
    0,
    (int)sub_17D308,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535B8(
    "unwindonsignal",
    -1,
    (int)&dword_4878E8,
    "Set unwinding of stack if a signal is received while in a call dummy.",
    "Show unwinding of stack if a signal is received while in a call dummy.",
    "The unwindonsignal lets the user determine what gdb should do if a signal\n"
    "is received while in a function called from gdb (call dummy).  If set, gdb\n"
    "unwinds the stack and restore the context to what as it was before the call.\n"
    "The default is to stop in the frame where the signal was received.",
    0,
    (int)sub_17D2F8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_535B8(
           "unwind-on-terminating-exception",
           -1,
           (int)&dword_46D51C,
           "Set unwinding of stack if std::terminate is called while in call dummy.",
           "Show unwinding of stack if std::terminate() is called while in a call dummy.",
           "The unwind on terminating exception flag lets the user determine\n"
           "what gdb should do if a std::terminate() call is made from the\n"
           "default exception handler.  If set, gdb unwinds the stack and restores\n"
           "the context to what it was before the call.  If unset, gdb allows the\n"
           "std::terminate call to proceed.\n"
           "The default is to unwind the frame.",
           0,
           (int)sub_17D2E8,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
