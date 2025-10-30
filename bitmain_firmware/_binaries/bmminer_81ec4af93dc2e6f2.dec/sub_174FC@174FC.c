int __fastcall sub_174FC(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v5; // r6
  int j; // r8
  __int16 v10; // r10
  bool v11; // zf
  int v13; // r11
  int i; // r10
  __int16 v15; // r8

  v5 = a4;
  if ( a4 )
  {
    v13 = 2;
    for ( i = 0; ; i = 1 )
    {
      sub_174BC(a2, a1);
      sub_27990(152, a3, (unsigned __int8)*a5, 1, a2, a1);
      sub_174BC(a2, a1);
      usleep(0x3E8u);
      sub_174BC(a2, a1);
      sub_27990(152, a3, 0, 0, a2, a1);
      v15 = sub_174BC(a2, a1);
      usleep(0x3E8u);
      if ( HIBYTE(v15) == a3 || (unsigned __int8)v15 == (unsigned __int8)*a5 )
        break;
      v11 = v13 == 1;
      v13 = 1;
      if ( v11 )
        return 0;
    }
    if ( !i )
      return v5;
    return 0;
  }
  for ( j = 2; ; j = 1 )
  {
    sub_174BC(a2, a1);
    sub_27990(152, a3, 0, 0, a2, a1);
    usleep(0x3E8u);
    v10 = sub_174BC(a2, a1);
    usleep(0x3E8u);
    if ( HIBYTE(v10) == a3 )
      break;
    v11 = j == 1;
    v5 = 1;
    if ( v11 )
      return 0;
  }
  if ( v5 || !(_BYTE)v10 )
    return 0;
  *a5 = v10;
  return 1;
}
