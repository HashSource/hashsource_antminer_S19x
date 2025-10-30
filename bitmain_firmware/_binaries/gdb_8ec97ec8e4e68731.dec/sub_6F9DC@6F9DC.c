int sub_6F9DC()
{
  int *v0; // r0
  int v1; // r1
  int **v2; // r0
  int (**v4)(); // [sp+Ch] [bp-8h] BYREF

  v0 = &dword_487D10;
  v4 = &off_35DF1C;
  if ( dword_487D14 == dword_487D18 )
  {
    sub_6E474(&dword_487D10, (char *)dword_487D14, &v4);
  }
  else
  {
    v1 = dword_487D14 + 4;
    if ( dword_487D14 )
      *(_DWORD *)dword_487D14 = &off_35DF1C;
    dword_487D14 = v1;
  }
  v2 = (int **)sub_1CA83C(v0);
  return sub_53274(
           "dtrace",
           5,
           (int)sub_6E5C8,
           (int)"Show information about DTrace static probes.\n"
                "Usage: info probes dtrace [PROVIDER [NAME [OBJECT]]]\n"
                "Each argument is a regular expression, used to select probes.\n"
                "PROVIDER matches probe provider names.\n"
                "NAME matches the probe names.\n"
                "OBJECT matches the executable or shared library name.",
           v2);
}
