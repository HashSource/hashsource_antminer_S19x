int __fastcall sub_295C9C(int a1, int a2)
{
  int v3; // r7
  int v5; // r8
  int v7; // r0
  int v8; // r1

  if ( a1 >= 0 )
  {
    v3 = dword_4900D8;
    if ( dword_4900D8 == dword_4900DC )
    {
      sub_2945C8();
      return -1;
    }
    if ( a1 > 1 || dword_48AB0C )
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        sub_2952A4(a1);
      else
        sub_295408(a1, a2);
      v5 = 0;
      sub_291D70(v3, dword_4900D8);
      dword_4900D8 = v3;
      return v5;
    }
    if ( _ctype_get_mb_cur_max() <= 1 )
    {
      v7 = dword_4900D8;
    }
    else
    {
      v7 = dword_4900D8;
      if ( !dword_48BB60 )
      {
        v8 = sub_29B4D0(dword_48AAD4);
        v7 = dword_4900D8;
        goto LABEL_14;
      }
    }
    v8 = v7 + 1;
LABEL_14:
    sub_294F5C(v7, v8);
    return 0;
  }
  return sub_295ED4(-a1, a2);
}
