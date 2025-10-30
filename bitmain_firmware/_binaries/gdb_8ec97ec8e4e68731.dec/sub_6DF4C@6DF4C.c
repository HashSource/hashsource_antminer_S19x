int sub_6DF4C()
{
  int v0; // r1
  int v1; // r0
  int **v2; // r0

  if ( dword_487D14 == dword_487D18 )
  {
    sub_6E474();
  }
  else
  {
    v0 = dword_487D14 + 4;
    if ( dword_487D14 )
      *(_DWORD *)dword_487D14 = &off_35D410;
    dword_487D14 = v0;
  }
  v1 = sub_53934(
         "stap-expression",
         11,
         (int)&dword_4748C0,
         "Set SystemTap expression debugging.",
         "Show SystemTap expression debugging.",
         "When non-zero, the internal representation of SystemTap expressions will be printed.",
         0,
         (int)sub_6C584,
         (int **)&dword_474750,
         (int **)&dword_474748);
  v2 = (int **)sub_1CA83C(v1);
  return sub_53274(
           "stap",
           5,
           (int)sub_6C578,
           (int)"Show information about SystemTap static probes.\n"
                "Usage: info probes stap [PROVIDER [NAME [OBJECT]]]\n"
                "Each argument is a regular expression, used to select probes.\n"
                "PROVIDER matches probe provider names.\n"
                "NAME matches the probe names.\n"
                "OBJECT matches the executable or shared library name.",
           v2);
}
