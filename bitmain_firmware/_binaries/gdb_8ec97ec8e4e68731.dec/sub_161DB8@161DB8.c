int sub_161DB8()
{
  sub_539C0(
    "generate-core-file",
    3,
    (int)sub_161918,
    (int)"Save a core file with the current state of the debugged process.\n"
         "Argument is optional filename.  Default filename is 'core.<process_id>'.");
  return sub_547B0((int)"gcore", "generate-core-file", 3, 1);
}
