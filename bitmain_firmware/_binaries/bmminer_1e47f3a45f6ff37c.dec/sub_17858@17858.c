bool __fastcall sub_17858(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v8; // r4
  __int16 v9; // r8
  int v11; // r4
  __int16 v12; // r8

  if ( a4 )
  {
    v11 = 0;
    while ( 1 )
    {
      sub_17810(a2, a1);
      ++v11;
      sub_27ED8(152, a3, (unsigned __int8)*a5, 1, a2, a1);
      sub_17810(a2, a1);
      usleep(0x3E8u);
      sub_17810(a2, a1);
      sub_27ED8(152, a3, 0, 0, a2, a1);
      v12 = sub_17810(a2, a1);
      usleep(0x3E8u);
      if ( HIBYTE(v12) == a3 || (unsigned __int8)v12 == (unsigned __int8)*a5 )
        break;
      if ( v11 != 1 )
        return 0;
    }
    return v11 == 1;
  }
  v8 = 0;
  while ( 1 )
  {
    sub_17810(a2, a1);
    ++v8;
    sub_27ED8(152, a3, 0, 0, a2, a1);
    usleep(0x3E8u);
    v9 = sub_17810(a2, a1);
    usleep(0x3E8u);
    if ( HIBYTE(v9) == a3 )
      break;
    if ( v8 != 1 )
      return 0;
  }
  if ( v8 != 1 || !(_BYTE)v9 )
    return 0;
  *a5 = v9;
  return 1;
}
