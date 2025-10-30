int __fastcall sub_C6980(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r11
  _DWORD *i; // r3
  int v11; // r3
  _DWORD *v12; // r5

  if ( *a4 == 3 )
    return 1;
  v4 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    return 0;
  v5 = *(_DWORD **)(a1 + 16);
  for ( i = v5; ; i = *(_DWORD **)(a1 + 16) )
  {
    if ( v4 != i && v4[3] == 20 )
    {
      v11 = v5[18];
      if ( !v11 || v11 == v4[18] )
      {
        v12 = (_DWORD *)v4[7];
        if ( v12 )
          break;
      }
    }
LABEL_4:
    v4 = (_DWORD *)v4[2];
    if ( !v4 )
      return 0;
  }
  while ( !(*(int (__fastcall **)(_DWORD *, int, int, _DWORD *))(v4[1] + 16))(v12, a2, a3, a4) )
  {
    v12 = (_DWORD *)*v12;
    if ( !v12 )
      goto LABEL_4;
  }
  return 1;
}
