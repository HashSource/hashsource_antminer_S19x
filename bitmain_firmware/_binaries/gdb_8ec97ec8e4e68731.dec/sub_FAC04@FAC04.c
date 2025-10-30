int sub_FAC04()
{
  int v0; // r0
  int v1; // r0
  char *v2; // r0

  v0 = sub_53274(
         "core-file",
         3,
         (int)sub_FA354,
         (int)"Use FILE as core dump for examining memory and registers.\n"
              "No arg means have no core file.  This command has been superseded by the\n"
              "`target core' and `detach' commands.",
         (int **)&dword_474744);
  sub_5324C(v0, (int)&loc_F6D00);
  v1 = sub_536E0(
         "gnutarget",
         3,
         (int)&dword_47ACA4,
         "Set the current BFD target.",
         "Show the current BFD target.",
         "Use `set gnutarget auto' to specify automatic detection.",
         (int)sub_FA228,
         (int)sub_FA344,
         (int **)&dword_47475C,
         (int **)&dword_47474C);
  sub_5324C(v1, 1024636);
  sub_54724((int)"g", "gnutarget", 3, 1, &dword_47475C);
  if ( !getenv("GNUTARGET") )
    return sub_FABC4((int)"auto");
  v2 = getenv("GNUTARGET");
  return sub_FABC4((int)v2);
}
