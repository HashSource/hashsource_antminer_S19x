int __fastcall sub_32F480(int a1, int a2, int *a3)
{
  void *v4; // r7
  int v7; // r4
  void *v8; // r8
  int v10; // r3
  signed int v11; // lr
  int v12; // r3
  int v13; // r7
  size_t v14; // r0
  void *v15; // r0
  int *v16; // r9
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r10
  __int64 v22; // r2
  size_t v23; // r0
  void *v24; // r0
  int *v25; // r4
  signed int v26; // r0
  int v27; // r3
  int v28; // [sp+Ch] [bp-84h] BYREF
  int v29; // [sp+10h] [bp-80h] BYREF
  int v30; // [sp+14h] [bp-7Ch] BYREF
  signed int v31; // [sp+18h] [bp-78h]
  char v32; // [sp+1Ch] [bp-74h]
  unsigned __int16 v33[7]; // [sp+1Eh] [bp-72h] BYREF
  int v34[6]; // [sp+2Ch] [bp-64h] BYREF
  char v35; // [sp+44h] [bp-4Ch]
  int v36[9]; // [sp+48h] [bp-48h] BYREF
  int v37[9]; // [sp+6Ch] [bp-24h] BYREF

  v4 = 0;
  v28 = 0;
  v29 = 0;
  if ( sub_327A48((int *)a2, a3, &v28) )
  {
    v7 = v28;
    v8 = 0;
    goto LABEL_3;
  }
  sub_3312AC(v34, 64);
  if ( (*(_BYTE *)(a2 + 8) & 0xF0) != 0 )
  {
LABEL_10:
    v10 = *(_DWORD *)a2;
    goto LABEL_11;
  }
  v10 = *(_DWORD *)a2;
  if ( *(_WORD *)(a2 + 10) || v10 != 1 )
  {
    v11 = *(_DWORD *)(a2 + 4);
    v32 = *(_BYTE *)(a2 + 8);
    v36[0] = 0;
    v37[0] = 0;
    v31 = v11;
    v34[0] = 1;
    sub_328A00((int)&v30, v34, (unsigned __int16 *)(a2 + 10), v10, v36, v37);
    v4 = (void *)(v37[0] & 0x20);
    if ( (v37[0] & 0x20) == 0 && v33[0] == 1 )
    {
      sub_329718((int)&v30, v31);
      v26 = v31;
      v27 = v30;
      v8 = v4;
      *(_BYTE *)(a1 + 8) = v32;
      *(_DWORD *)(a1 + 4) = v26;
      v36[0] = (int)v4;
      sub_328A00(a1, a3, v33, v27, v36, &v28);
      sub_329598((_DWORD *)a1, a3, v36, &v28);
      v7 = v28;
      goto LABEL_3;
    }
    goto LABEL_10;
  }
LABEL_11:
  v12 = v10 + 6;
  if ( v12 < *a3 )
    v12 = *a3;
  v13 = v12 + 3;
  if ( v12 + 3 <= 49 )
  {
    v14 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v13) + 5);
    if ( v14 > 0x24 )
      goto LABEL_15;
  }
  else
  {
    v14 = 2 * ((v12 + 5) / 3 + 5);
    if ( v14 > 0x24 )
    {
LABEL_15:
      v15 = malloc(v14);
      v8 = v15;
      if ( !v15 )
      {
        v7 = v28 | 0x10;
        v28 |= 0x10u;
LABEL_20:
        free(v8);
        goto LABEL_21;
      }
      v16 = (int *)v15;
      goto LABEL_18;
    }
  }
  v16 = v36;
  v8 = 0;
LABEL_18:
  v34[1] = (int)&loc_F423C + 3;
  v34[2] = -999999;
  v34[0] = v13;
  v35 = 0;
  v17 = sub_32EC90((int)v16, a2, v34, &v28);
  v7 = v28;
  if ( (v28 & 0xDD) != 0 && (v28 & 0x40000000) == 0 )
    goto LABEL_20;
  if ( (v16[2] & 0x70) != 0 || !*((_WORD *)v16 + 5) && *v16 == 1 )
  {
    sub_32AB6C(a1, (int)v16);
    v4 = 0;
    v7 = v28;
  }
  else
  {
    v20 = *a3;
    v21 = *a3 + 3;
    if ( v21 <= 49 )
    {
      LOWORD(v20) = -29928;
    }
    else
    {
      v19 = 1431655766;
      v18 = v20 + 5;
    }
    if ( v21 <= 49 )
    {
      HIWORD(v20) = 67;
      HIDWORD(v22) = v20 + v21;
      v17 = *(unsigned __int8 *)(HIDWORD(v22) + 20);
    }
    else
    {
      v22 = v18 * (__int64)v19;
    }
    if ( v21 > 49 )
      v17 = HIDWORD(v22) - (v18 >> 31);
    v23 = 2 * (v17 + 5);
    if ( v23 <= 0x24 )
    {
      v25 = v37;
      v4 = 0;
    }
    else
    {
      v24 = malloc(v23);
      v4 = v24;
      if ( !v24 )
      {
        v7 |= 0x10u;
        v28 = v7;
        goto LABEL_20;
      }
      v25 = (int *)v24;
    }
    v32 = 0;
    v31 = 0;
    v33[0] = 10;
    v30 = 2;
    v34[0] = v21;
    sub_32EC90((int)v25, (int)&v30, v34, &v29);
    v34[0] = *a3;
    sub_32D3F8(a1, (int)v16, __PAIR64__(v34, (unsigned int)v25), 0x80u, &v28);
    v7 = v28;
  }
LABEL_3:
  free(v8);
  free(v4);
  if ( !v7 )
    return a1;
LABEL_21:
  sub_327DE4(a1, v7, (int)a3);
  return a1;
}
