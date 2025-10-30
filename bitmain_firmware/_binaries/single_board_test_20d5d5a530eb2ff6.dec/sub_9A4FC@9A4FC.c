int __fastcall sub_9A4FC(_DWORD *a1, int a2)
{
  unsigned int v4; // r4
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r11
  int v11; // r0
  int v12; // r0
  int result; // r0
  int v14; // r9
  int v15; // r7
  unsigned int v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r4
  unsigned int v19; // r3
  size_t v20; // r4
  int v21; // r2
  int v22; // r3
  char v23; // r0
  int v24; // r1
  _BYTE *v25; // r3
  int v26; // r3
  int v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r2
  int v34; // lr
  _BYTE *v35; // r1
  size_t v36; // r2
  __int16 v37; // r0
  void (__fastcall *v38)(int, _DWORD, int, _DWORD, size_t, _DWORD *, _DWORD); // r7
  int v39; // [sp+14h] [bp-10h]
  size_t v40[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( !((int (*)(void))sub_A79F4)() )
    return -1;
  v4 = *(_DWORD *)(a1[32] + 284);
  if ( v4 < sub_A79DC(a1) )
    return -1;
  v5 = a1[30];
  v6 = v5 == 0;
  if ( !v5 )
    v6 = a2 == 22;
  if ( v6 && a1[29] != *(_DWORD *)(a1[32] + 292) + 12 )
    return -1;
  v7 = a1[256];
  if ( !v7 )
    goto LABEL_9;
  v8 = a1[251];
  if ( !v8 )
  {
LABEL_40:
    v30 = sub_D8D8C(v7);
    v10 = sub_D8C78(v30);
    goto LABEL_10;
  }
  v9 = sub_D8920(v8);
  if ( (sub_D8928(v9) & 0x200000) == 0 )
  {
    v7 = a1[256];
    goto LABEL_40;
  }
LABEL_9:
  v10 = 0;
LABEL_10:
  v11 = a1[251];
  if ( v11 && (v12 = sub_D8920(v11), (sub_D8928(v12) & 0xF0007) == 2) )
    v39 = 2 * sub_D8904(a1[251]);
  else
    v39 = 0;
  result = a1[29];
  a1[5] = 1;
  v14 = 1;
  v15 = 0;
  while ( result )
  {
    if ( a2 == 22 )
    {
      v16 = a1[30];
      if ( v16 )
      {
        if ( v15 )
        {
          if ( v16 <= 0xC )
            return -1;
          a1[30] = v16 - 12;
          a1[29] = result + 12;
        }
        else
        {
          v15 = *(_DWORD *)(a1[32] + 300);
        }
      }
    }
    v17 = sub_B6ECC(a1[3], 13, 0, 0) + v10 + 13 + v39;
    v18 = *(_DWORD *)(a1[32] + 284);
    if ( v17 >= v18 || (v20 = v18 - v17, v20 <= 0xC) )
    {
      result = sub_B6ECC(a1[3], 11, 0, 0);
      if ( result <= 0 )
      {
        a1[5] = 2;
        return result;
      }
      v19 = *(_DWORD *)(a1[32] + 284);
      if ( v19 <= v10 + v39 + 25 )
        return -1;
      v20 = v19 - 13 - (v10 + v39);
    }
    if ( v20 >= a1[29] )
      v20 = a1[29];
    if ( sub_8CD40((int)a1) < v20 )
      v20 = sub_8CD40((int)a1);
    if ( a2 == 22 )
    {
      if ( v20 <= 0xB )
        return -1;
      v21 = a1[32];
      v22 = a1[30];
      v23 = *(_BYTE *)(v21 + 288);
      v24 = *(_DWORD *)(a1[27] + 4);
      *(_DWORD *)(v21 + 300) = v15;
      *(_DWORD *)(v21 + 304) = v20 - 12;
      *(_BYTE *)(v24 + v22) = v23;
      v25 = (_BYTE *)(v22 + v24);
      v25[1] = *(_WORD *)(v21 + 294);
      v25[2] = BYTE1(*(_DWORD *)(v21 + 292));
      v25[3] = *(_DWORD *)(v21 + 292);
      v25[4] = HIBYTE(*(_WORD *)(v21 + 296));
      v25[5] = *(_WORD *)(v21 + 296);
      v25[6] = *(_WORD *)(v21 + 302);
      v25[7] = BYTE1(*(_DWORD *)(v21 + 300));
      v25[8] = *(_DWORD *)(v21 + 300);
      v25[9] = *(_WORD *)(v21 + 306);
      v25[10] = BYTE1(*(_DWORD *)(v21 + 304));
      v25[11] = *(_DWORD *)(v21 + 304);
    }
    if ( sub_7D1C4((int)a1, a2, (const void *)(a1[30] + *(_DWORD *)(a1[27] + 4)), v20, v40) <= 0 )
    {
      if ( !v14 )
        return -1;
      v31 = sub_882E4((int)a1);
      if ( sub_B6ECC(v31, 43, 0, 0) <= 0 )
        return -1;
      v14 = sub_8B860((int)a1) & 0x1000;
      if ( v14 || !sub_A79F4(a1) )
        return -1;
      result = a1[29];
    }
    else
    {
      if ( v20 != v40[0] )
        return -1;
      if ( a2 != 22 || (v32 = a1[32], *(_DWORD *)(v32 + 400)) )
      {
        v26 = a1[29];
        if ( v26 == v20 )
          goto LABEL_54;
      }
      else
      {
        v33 = a1[30];
        v34 = *(_DWORD *)(a1[27] + 4);
        v35 = (_BYTE *)(v34 + v33);
        if ( v15 || *a1 == 256 )
        {
          v35 += 12;
          v36 = v20 - 12;
        }
        else
        {
          *(_BYTE *)(v34 + v33) = *(_BYTE *)(v32 + 288);
          v35[1] = *(_WORD *)(v32 + 294);
          v35[2] = BYTE1(*(_DWORD *)(v32 + 292));
          v35[3] = *(_DWORD *)(v32 + 292);
          v36 = v40[0];
          v35[4] = HIBYTE(*(_WORD *)(v32 + 296));
          v37 = *(_WORD *)(v32 + 296);
          v35[6] = 0;
          v35[7] = 0;
          v35[5] = v37;
          v35[8] = 0;
          v35[9] = *(_WORD *)(v32 + 294);
          v35[10] = BYTE1(*(_DWORD *)(v32 + 292));
          v35[11] = *(_DWORD *)(v32 + 292);
        }
        if ( !sub_A91B0(a1, v35, v36) )
          return -1;
        v20 = v40[0];
        v26 = a1[29];
        if ( v26 == v40[0] )
        {
LABEL_54:
          v38 = (void (__fastcall *)(int, _DWORD, int, _DWORD, size_t, _DWORD *, _DWORD))a1[33];
          if ( v38 )
            v38(1, *a1, a2, *(_DWORD *)(a1[27] + 4), v20 + a1[30], a1, a1[34]);
          a1[30] = 0;
          a1[29] = 0;
          return 1;
        }
      }
      v27 = a1[30];
      v28 = a1[32];
      v29 = v26 - v20;
      v15 += v20 - 12;
      a1[29] = v29;
      v40[0] = v20 - 12;
      a1[30] = v20 + v27;
      result = v29;
      *(_DWORD *)(v28 + 300) = v15;
      *(_DWORD *)(v28 + 304) = 0;
    }
  }
  return result;
}
