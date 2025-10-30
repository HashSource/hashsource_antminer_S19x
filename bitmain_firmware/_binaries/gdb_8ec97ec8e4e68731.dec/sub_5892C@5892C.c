int sub_5892C()
{
  sub_539C0(
    "document",
    4,
    (int)sub_584D4,
    (int)"Document a user-defined command.\n"
         "Give command name as argument.  Give documentation on following lines.\n"
         "End with a line of just \"end\".");
  sub_539C0(
    "define",
    4,
    (int)sub_58220,
    (int)"Define a new command name.  Command name is argument.\n"
         "Definition appears on following lines, one command per line.\n"
         "End with a line of just \"end\".\n"
         "Use the \"document\" command to give documentation for the new command.\n"
         "Commands defined in this way may have up to ten arguments.");
  sub_539C0(
    "while",
    4,
    (int)sub_590F4,
    (int)"Execute nested commands WHILE the conditional expression is non zero.\n"
         "The conditional expression must follow the word `while' and must in turn be\n"
         "followed by a new line.  The nested commands must be entered one per line,\n"
         "and should be terminated by the word `end'.");
  return sub_539C0(
           "if",
           4,
           (int)sub_59050,
           (int)"Execute nested commands once IF the conditional expression is non zero.\n"
                "The conditional expression must follow the word `if' and must in turn be\n"
                "followed by a new line.  The nested commands must be entered one per line,\n"
                "and should be terminated by the word 'else' or `end'.  If an else clause\n"
                "is used, the same rules apply to its nested commands as to the first ones.");
}
