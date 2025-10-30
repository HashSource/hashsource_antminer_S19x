int __fastcall sub_8105C(int a1)
{
  int v2; // r7
  int v3; // r9
  unsigned int v4; // r3
  unsigned int v5; // r5
  int result; // r0
  void (__fastcall *v7)(_DWORD, _DWORD, int, unsigned __int8 *, int, int, _DWORD); // r10
  unsigned __int8 *v8; // r5
  int v9; // r0
  int v10; // r3
  bool v11; // zf
  int v12; // r0
  _BOOL4 v13; // r3
  int v14; // r10
  int v15; // r1
  int v16; // r2
  int v17; // r5
  int v18; // r3
  unsigned __int8 v19; // r3
  unsigned __int16 *v20; // r0
  int v21; // r5
  unsigned int v22; // [sp+10h] [bp-8h] BYREF
  int v23; // [sp+14h] [bp-4h] BYREF

  v2 = a1 + 2296;
  v3 = a1 + 2336;
LABEL_2:
  if ( sub_7D23C((_DWORD *)a1) )
  {
    while ( 1 )
    {
      if ( sub_7C7A8(a1, *(_DWORD *)(a1 + 3896) + 36) )
        return 1;
      if ( *(_DWORD *)(a1 + 1624) == 241 )
      {
        v4 = *(_DWORD *)(a1 + 3836);
        if ( v4 > 0xC )
          break;
      }
      result = sub_7D598((_DWORD *)a1, 0xDu, *(_DWORD *)(a1 + 1644), 0, 1, &v22);
      if ( result <= 0 )
        return result;
      if ( *(_DWORD *)(a1 + 3836) != 13 )
      {
        *(_DWORD *)(a1 + 3836) = 0;
        goto LABEL_2;
      }
      v7 = *(void (__fastcall **)(_DWORD, _DWORD, int, unsigned __int8 *, int, int, _DWORD))(a1 + 132);
      *(_DWORD *)(a1 + 1624) = 241;
      v8 = *(unsigned __int8 **)(a1 + 3832);
      if ( v7 )
        v7(0, 0, 256, v8, 13, a1, *(_DWORD *)(a1 + 136));
      v9 = *v8;
      v10 = *(_DWORD *)(a1 + 1280);
      *(_DWORD *)(a1 + 2300) = v9;
      v11 = v9 == 21;
      v12 = v8[2];
      v13 = v10 == 0;
      v14 = v8[1];
      if ( v11 )
        v13 = 0;
      *(_DWORD *)(a1 + 2332) = v8[4] | (v8[3] << 8);
      v15 = v12 | (v14 << 8);
      *(_DWORD *)(a1 + 3874) = *(_DWORD *)(v8 + 5);
      *(_WORD *)(a1 + 3878) = *(_WORD *)(v8 + 9);
      v16 = v8[11];
      v17 = v8[12];
      *(_DWORD *)(a1 + 2328) = 0;
      v5 = v17 | (v16 << 8);
      *(_DWORD *)(a1 + 2304) = v5;
      if ( v13 )
      {
        if ( v15 != *(_DWORD *)a1 )
          goto LABEL_10;
      }
      else if ( ((v15 ^ *(_DWORD *)a1) & 0xFF00) != 0 )
      {
        goto LABEL_10;
      }
      if ( v5 > 0x4540 )
        goto LABEL_10;
      v18 = *(_DWORD *)(a1 + 1140);
      if ( v18 )
      {
        v19 = *(_BYTE *)(v18 + 492) - 1;
        if ( v19 <= 3u && v5 > (512 << v19) + 320 )
          goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 3836) - 13 < v5 )
        goto LABEL_7;
LABEL_27:
      *(_DWORD *)(a1 + 1624) = 240;
      v20 = sub_7D204(a1, v2, &v23);
      v21 = (int)v20;
      if ( !v20 )
      {
        *(_DWORD *)(a1 + 2304) = 0;
        *(_DWORD *)(a1 + 3836) = 0;
        goto LABEL_2;
      }
      if ( sub_A87B0(a1, v20) )
      {
        if ( !*(_DWORD *)(a1 + 2304) )
        {
          *(_DWORD *)(a1 + 2328) = 1;
          goto LABEL_2;
        }
        if ( !v23 )
        {
          if ( sub_80CA8((_DWORD *)a1, v21) )
            return 1;
LABEL_9:
          if ( sub_95D8C(a1) )
            return -1;
          goto LABEL_10;
        }
        if ( (sub_95448(a1) || sub_95DA0(a1)) && sub_7C644((_DWORD *)a1, *(_DWORD *)(a1 + 3896) + 28, v3) < 0 )
          return -1;
      }
LABEL_10:
      *(_DWORD *)(a1 + 2304) = 0;
      *(_DWORD *)(a1 + 3836) = 0;
      *(_DWORD *)(a1 + 2328) = 1;
      if ( !sub_7D23C((_DWORD *)a1) )
        return -1;
    }
    v5 = *(_DWORD *)(a1 + 2304);
    if ( v4 - 13 >= v5 )
      goto LABEL_27;
LABEL_7:
    if ( sub_7D598((_DWORD *)a1, v5, v5, 1, 1, &v22) <= 0 || v22 != v5 )
      goto LABEL_9;
    goto LABEL_27;
  }
  return -1;
}
