int sub_187A30()
{
  int v0; // r5
  const char *v1; // r1
  int result; // r0

  v0 = dword_487994;
  if ( !dword_46DBE8 && !dword_46DBF0 && dword_46DBF8 && !dword_46DC00 && dword_487950 )
  {
    if ( dword_487994 == 1 )
      goto LABEL_6;
    v1 = "on";
    v0 = 1;
    goto LABEL_5;
  }
  if ( dword_487994 )
  {
    v1 = "off";
    v0 = 0;
LABEL_5:
    result = sub_259F10("Observer mode is now %s.\n", v1);
  }
LABEL_6:
  dword_487990 = v0;
  dword_487994 = v0;
  return result;
}
