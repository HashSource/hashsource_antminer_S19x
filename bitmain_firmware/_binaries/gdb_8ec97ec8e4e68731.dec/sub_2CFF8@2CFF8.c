int __fastcall sub_2CFF8(_DWORD *a1, unsigned int a2)
{
  int v4; // r4
  int v5; // r0
  int (__fastcall **v6)(int, int, _DWORD); // r3
  unsigned int v7; // r0
  unsigned __int16 v8; // r0
  unsigned __int16 v9; // r6
  unsigned __int16 v10; // r0
  int v11; // r1

  if ( a2 <= 0xFFFF0000 )
    return a2;
  v4 = sub_1DFB3C(a1[4]);
  v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v6 = (int (__fastcall **)(int, int, _DWORD))*a1;
  if ( v5 )
  {
    v8 = (*v6)(v4, 2, a1[2]);
    v9 = v8;
    if ( HIBYTE(v8) == 71 && (v8 & 0x80) != 0 )
    {
      v11 = 3;
    }
    else
    {
      if ( sub_1829C(v8) != 4 )
        return sub_92FEC(a1[4], 14);
      v10 = (*(int (__fastcall **)(int, int, _DWORD))*a1)(v4 + 2, 2, a1[2]);
      if ( (v9 & 0xF800) != 0xF000 || v10 >> 14 != 3 )
        return sub_92FEC(a1[4], 14);
      v11 = 5;
    }
  }
  else
  {
    v7 = (*v6)(v4, 4, a1[2]);
    if ( v7 >> 28 == 15 )
    {
      if ( ((v7 >> 25) & 7) != 5 )
        return sub_92FEC(a1[4], 14);
    }
    else if ( (HIBYTE(v7) & 0xF) != 0xB
           && (_UNKNOWN **)((v7 >> 4) & 0xFFFFFF) != (_UNKNOWN **)((char *)&jpt_12FFD8[4] + 3) )
    {
      return sub_92FEC(a1[4], 14);
    }
    v11 = 4;
  }
  return v4 + v11;
}
