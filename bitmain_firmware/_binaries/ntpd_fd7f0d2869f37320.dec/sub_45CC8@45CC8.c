int __fastcall sub_45CC8(int a1, int a2)
{
  int v2; // r5
  _DWORD *v4; // r4
  int v5; // r8
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int result; // r0
  int v11; // r1
  _DWORD *v12; // r3
  _DWORD *v13; // r5
  int v14; // r1
  int v15; // r3

  v2 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v2;
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 8);
  ++*(_DWORD *)(v2 + 776);
  v6 = *(_DWORD *)(v2 + 220);
  v7 = *(_DWORD *)(v2 + 216);
  if ( v5 == a2 )
  {
    if ( v7 == v6 )
    {
      v15 = *(_DWORD *)(v5 + 68);
      *(_BYTE *)(v5 + 95) = -20;
      *(_DWORD *)(v5 + 68) = v15 & 0xFFFFFF7F;
      return sub_39C88(v5, 1);
    }
    else
    {
      v12 = (_DWORD *)(v2 + 232);
      v13 = (_DWORD *)(v2 + 224);
      v14 = v12[1];
      *v13 = *v12;
      v13[1] = v14;
      sub_39C88(v5, 0);
      return sub_3A534(v5);
    }
  }
  else
  {
    if ( v7 == v6 )
    {
      *(_BYTE *)(a2 + 95) = -9;
      if ( *(_DWORD *)(v2 + 28) == -1 )
      {
        result = sub_39C88(a2, 3);
      }
      else
      {
        if ( v4[39] )
          v11 = 2;
        else
          v11 = 1;
        result = sub_39C88(a2, v11);
      }
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 236);
      *(_DWORD *)(v2 + 224) = *(_DWORD *)(v2 + 232);
      *(_DWORD *)(v2 + 228) = v8;
      sub_39C88(a2, 0);
      result = sub_3A534(a2);
    }
    if ( (*(_BYTE *)(v2 + 768) & 8) != 0 )
      result = sub_42E1C(a2 + 16, (int)"%u %u %u %u %u %u %u", v4[38], v4[39], v4[40], v4[41], v4[42], v4[43], v4[44]);
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
