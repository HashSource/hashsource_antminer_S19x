int __fastcall sub_28292C(int a1, int a2)
{
  int v3; // r7
  int v5; // r1
  int v6; // r0

  if ( a1 < 0 )
    return sub_2825F4(-a1, a2);
  v3 = dword_4900D8;
  if ( !dword_4900D8 )
  {
    sub_2945C8();
    return -1;
  }
  if ( a1 <= 1 || _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
  {
    if ( _ctype_get_mb_cur_max() <= 1 )
    {
      v5 = dword_4900D8;
    }
    else
    {
      v5 = dword_4900D8;
      if ( !dword_48BB60 )
      {
        v6 = sub_29B610(dword_48AAD4, dword_4900D8, 1);
        dword_4900D8 = v6;
        goto LABEL_9;
      }
    }
    v6 = v5 - a1;
    dword_4900D8 = v5 - a1;
  }
  else
  {
    sub_29534C(a1, a2);
    v6 = dword_4900D8;
  }
LABEL_9:
  if ( v6 < 0 )
  {
    v6 = 0;
    dword_4900D8 = 0;
  }
  sub_291D70(v6, v3);
  return 0;
}
