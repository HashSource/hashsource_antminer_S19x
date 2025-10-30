int __fastcall sub_187168(int a1, int a2)
{
  int *v3; // r2
  _BOOL4 v4; // r3
  int result; // r0
  int v6; // r1

  if ( sub_22EBBC(a1) )
  {
    dword_487990 = dword_487994;
    sub_946E0("Cannot change this setting while the inferior is running.");
  }
  v3 = &dword_46DBF0;
  dword_487994 = dword_487990;
  v4 = dword_487990 == 0;
  dword_46DBF0 = v4;
  if ( dword_487990 )
    v3 = &dword_46DBF8;
  dword_46DBE8 = dword_487990 == 0;
  if ( dword_487990 )
    *v3 = 1;
  dword_46DBE0 = v4;
  dword_46DBC8 = v4;
  dword_46DC00 = v4;
  result = sub_2329A8();
  if ( dword_487994 )
  {
    LOWORD(v6) = 0;
    dword_46DDEC = 0;
    if ( a2 )
      LOWORD(v6) = -13268;
    dword_48798C = 1;
    dword_487950 = 1;
    if ( a2 )
    {
      HIWORD(v6) = 53;
      return sub_259F10("Observer mode is now %s.\n", v6);
    }
  }
  else if ( a2 )
  {
    return sub_259F10("Observer mode is now %s.\n", "off");
  }
  return result;
}
