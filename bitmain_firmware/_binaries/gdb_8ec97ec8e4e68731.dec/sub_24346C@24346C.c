int __fastcall sub_24346C(int a1)
{
  int v1; // r0
  int v2; // r6
  int result; // r0
  int v4; // r3

  v1 = sub_15F884(a1);
  v2 = v1;
  if ( off_46D5A4[0] != (char **)dword_487A08 )
  {
    if ( !dword_487A04 && dword_48A514 )
      v1 = sub_19422C(1);
    dword_48A518 = 0;
  }
  result = sub_15D504(v1);
  if ( result )
  {
    result = sub_160314(v2);
    v4 = result;
    if ( result )
      v4 = 1;
    if ( dword_48A518 )
      v4 = 0;
    if ( v4 )
    {
      if ( off_46D5A4[0][2] != (char *)result )
      {
        result = sub_259F10("%s\n", aWarningTheCurr);
        dword_48A518 = 1;
      }
    }
  }
  return result;
}
