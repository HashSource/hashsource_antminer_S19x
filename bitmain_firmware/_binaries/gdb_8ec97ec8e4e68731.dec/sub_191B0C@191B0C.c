int sub_191B0C()
{
  int v0; // r0

  v0 = sub_53274(
         "interpreter-exec",
         4,
         (int)&loc_191854,
         (int)"Execute a command in an interpreter.  It takes two arguments:\n"
              "The first argument is the name of the interpreter to use.\n"
              "The second argument is the command to execute.\n",
         (int **)&dword_474744);
  return sub_5324C(v0, 1642992);
}
