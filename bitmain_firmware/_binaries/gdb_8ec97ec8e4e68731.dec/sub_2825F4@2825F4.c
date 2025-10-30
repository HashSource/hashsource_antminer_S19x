int __fastcall sub_2825F4(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r1

  if ( a1 < 0 )
    return sub_28292C(-a1);
  if ( !dword_4900DC )
  {
    sub_2945C8();
    return -1;
  }
  if ( _ctype_get_mb_cur_max() <= 1 )
  {
    v4 = dword_4900D8;
  }
  else
  {
    v4 = dword_4900D8;
    if ( !dword_48BB60 )
    {
      v5 = sub_29B4D0(dword_48AAD4);
      v4 = dword_4900D8;
      goto LABEL_6;
    }
  }
  v5 = a1 + v4;
LABEL_6:
  v6 = dword_4900DC;
  if ( v5 < dword_4900DC )
    v6 = v5;
  sub_291D70(v4, v6);
  if ( dword_4900D8 <= 0 || dword_4900D8 != dword_4900DC )
    return 0;
  sub_29534C(1, a2);
  return 0;
}
