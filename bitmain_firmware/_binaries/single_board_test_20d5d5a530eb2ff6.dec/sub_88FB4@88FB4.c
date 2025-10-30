int __fastcall sub_88FB4(_DWORD *a1)
{
  _DWORD *v1; // r2
  _BOOL4 v3; // r0
  int (__fastcall *v4)(_DWORD *); // r2

  v1 = (_DWORD *)a1[1];
  if ( (*(_DWORD *)(v1[25] + 48) & 8) != 0 )
    goto LABEL_5;
  v3 = *v1 >= 772;
  if ( *v1 == 0x10000 )
    v3 = 0;
  if ( v3 )
  {
    sub_D0048(20, 516, 266, "ssl/ssl_lib.c", 2157);
    return 0;
  }
  else
  {
LABEL_5:
    if ( (a1[315] & 0x40000000) != 0 )
    {
      sub_D0048(20, 516, 339, "ssl/ssl_lib.c", 2162);
      return 0;
    }
    else
    {
      v4 = (int (__fastcall *)(_DWORD *))v1[12];
      a1[379] = 1;
      a1[8] = 1;
      return v4(a1);
    }
  }
}
