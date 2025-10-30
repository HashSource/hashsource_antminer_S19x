int __fastcall sub_9C62C(_DWORD *a1, unsigned int *a2)
{
  int v2; // r3
  int v3; // r5
  int v5; // r3
  int v7; // r7
  int v8; // r5
  int *v10; // r3
  int v11; // r3
  unsigned int v12; // r5
  int v13; // r6
  void (__fastcall *v14)(_DWORD, _DWORD, int, _DWORD, unsigned int, _DWORD *, _DWORD); // r6
  int v15; // r2
  int v16; // r3
  bool v17; // zf
  void (__fastcall *v18)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD *, _DWORD); // r5
  int v19; // [sp+14h] [bp-8h] BYREF

  v2 = a1[31];
  if ( *(_DWORD *)(v2 + 524) == 257 )
  {
    *a2 = a1[29];
    return 1;
  }
  v3 = *(_DWORD *)(v2 + 520);
  v5 = a1[29];
  v7 = a1[28];
  v8 = v3 - v5;
  if ( !v8 )
  {
LABEL_7:
    if ( **(_BYTE **)(a1[27] + 4) == 20 && !sub_9BE38(a1) )
      goto LABEL_28;
    if ( sub_7EF80((int)(a1 + 404)) )
    {
      if ( sub_A91B0(a1, *(_DWORD *)(a1[27] + 4), a1[29]) )
      {
        v18 = (void (__fastcall *)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD *, _DWORD))a1[33];
        if ( v18 )
        {
          v18(0, 2, 0, *(_DWORD *)(a1[27] + 4), a1[29], a1, a1[34]);
          v12 = a1[29];
          goto LABEL_18;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v10 = (int *)a1[1];
      if ( (*(_DWORD *)(v10[25] + 48) & 8) != 0 )
        goto LABEL_10;
      v15 = *v10;
      v16 = *v10 == 0x10000;
      if ( v15 < 772 )
        v16 |= 1u;
      if ( v16 )
      {
LABEL_10:
        v11 = *(_DWORD *)(a1[31] + 524);
      }
      else
      {
        v11 = *(_DWORD *)(a1[31] + 524);
        v17 = v11 == 4;
        if ( v11 != 4 )
          v17 = v11 == 24;
        if ( v17 )
          goto LABEL_14;
      }
      if ( v11 == 2 )
      {
        v12 = a1[29];
        if ( v12 > 0x25 )
        {
          v13 = *(_DWORD *)(a1[27] + 4);
          if ( !memcmp(&hrrrandom, (const void *)(v13 + 6), 0x20u) )
            goto LABEL_15;
        }
        else
        {
          v13 = *(_DWORD *)(a1[27] + 4);
        }
      }
      else
      {
        v12 = a1[29];
        v13 = *(_DWORD *)(a1[27] + 4);
      }
      if ( sub_A91B0(a1, v13, v12 + 4) )
      {
LABEL_14:
        v12 = a1[29];
LABEL_15:
        v14 = (void (__fastcall *)(_DWORD, _DWORD, int, _DWORD, unsigned int, _DWORD *, _DWORD))a1[33];
        if ( !v14 )
        {
LABEL_18:
          *a2 = v12;
          return 1;
        }
        v14(0, *a1, 22, *(_DWORD *)(a1[27] + 4), v12 + 4, a1, a1[34]);
LABEL_17:
        v12 = a1[29];
        goto LABEL_18;
      }
    }
LABEL_28:
    *a2 = 0;
    return 0;
  }
  while ( (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int, _DWORD, int *))(a1[1] + 56))(
            a1,
            22,
            0,
            v5 + v7,
            v8,
            0,
            &v19) > 0 )
  {
    v8 -= v19;
    v5 = a1[29] + v19;
    a1[29] = v5;
    if ( !v8 )
      goto LABEL_7;
  }
  a1[5] = 3;
  *a2 = 0;
  return 0;
}
