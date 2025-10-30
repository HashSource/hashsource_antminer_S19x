__int16 *__fastcall sub_44E70(int a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r4
  int v5; // r1
  int v6; // r8
  int v7; // r3
  int v8; // r1
  __int16 *result; // r0
  int v10; // r1
  _DWORD *v11; // r3
  _DWORD *v12; // r5
  int v13; // r1
  int v14; // r3

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  v5 = *(_DWORD *)(v3 + 216);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 8);
  ++*(_DWORD *)(v3 + 776);
  v7 = *(_DWORD *)(v3 + 220);
  if ( v6 == a2 )
  {
    if ( v7 == v5 )
    {
      v14 = *(_DWORD *)(v6 + 68);
      *(_BYTE *)(v6 + 95) = -20;
      *(_DWORD *)(v6 + 68) = v14 & 0xFFFFFF7F;
      return sub_394A0((__int16 *)v6, 1);
    }
    else
    {
      v11 = (_DWORD *)(v3 + 232);
      v12 = (_DWORD *)(v3 + 224);
      v13 = v11[1];
      *v12 = *v11;
      v12[1] = v13;
      sub_394A0((__int16 *)v6, 0);
      return (__int16 *)sub_39D44(v6);
    }
  }
  else
  {
    if ( v7 == v5 )
    {
      *(_BYTE *)(a2 + 95) = -9;
      if ( *(_DWORD *)(v3 + 28) == -1 )
      {
        result = sub_394A0((__int16 *)a2, 3);
      }
      else
      {
        if ( v4[39] )
          v8 = 2;
        else
          v8 = 1;
        result = sub_394A0((__int16 *)a2, v8);
      }
    }
    else
    {
      v10 = *(_DWORD *)(v3 + 236);
      *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 232);
      *(_DWORD *)(v3 + 228) = v10;
      sub_394A0((__int16 *)a2, 0);
      result = (__int16 *)sub_39D44(a2);
    }
    if ( (*(_BYTE *)(v3 + 768) & 8) != 0 )
      result = (__int16 *)sub_42050(
                            a2 + 16,
                            (int)"%u %u %u %u %u %u %u",
                            v4[38],
                            v4[39],
                            v4[40],
                            v4[41],
                            v4[42],
                            v4[43],
                            v4[44]);
    v4[39] = 0;
    v4[38] = 0;
    v4[40] = 0;
    v4[41] = 0;
    v4[42] = 0;
    v4[43] = 0;
    v4[44] = 0;
  }
  return result;
}
