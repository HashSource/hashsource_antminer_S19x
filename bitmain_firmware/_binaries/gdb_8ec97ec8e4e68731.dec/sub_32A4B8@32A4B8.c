int __fastcall sub_32A4B8(int a1, int a2, int a3, int *a4)
{
  __int64 v4; // r6
  int v6; // r12
  unsigned __int16 *v7; // r1
  unsigned __int16 *v8; // r0
  unsigned int v9; // r12
  int v10; // r2
  char *v11; // r5
  unsigned int v12; // r2
  int v13; // r12
  unsigned __int16 *v14; // r9
  int v15; // r2
  unsigned int v16; // r10
  int v17; // r2
  _WORD *v18; // r2
  unsigned int v19; // r8
  unsigned int v20; // r3
  unsigned int v21; // r12
  char v22; // r5
  int v24; // lr
  __int16 v25; // r4
  unsigned int v26; // r5
  __int16 v27; // r6
  int v28; // r1
  int v29; // [sp+8h] [bp-14h]
  int v30; // [sp+Ch] [bp-10h]
  int *v31; // [sp+10h] [bp-Ch]
  int v32; // [sp+14h] [bp-8h]

  if ( *(_DWORD *)(a2 + 4)
    || (*(_BYTE *)(a2 + 8) & 0x70) != 0
    || (*(_BYTE *)(a2 + 8) & 0x80) != 0
    || *(_DWORD *)(a3 + 4)
    || (*(_BYTE *)(a3 + 8) & 0x70) != 0
    || (*(_BYTE *)(a3 + 8) & 0x80) != 0 )
  {
    goto LABEL_31;
  }
  v6 = *(_DWORD *)a2;
  v7 = (unsigned __int16 *)(a2 + 10);
  v8 = (unsigned __int16 *)(a3 + 10);
  v29 = a1 + 10;
  if ( v6 <= 49 )
  {
    v9 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v6) + 0x7FFFFFFF);
  }
  else
  {
    v4 = 2863311531LL * (unsigned int)(v6 + 2);
    v9 = (HIDWORD(v4) & 0xFFFFFFFE) - 2;
  }
  v10 = *(_DWORD *)a3;
  v11 = (char *)v7 + v9;
  if ( v10 > 49 )
  {
    v4 = 2863311531LL * (unsigned int)(v10 + 2);
    v12 = (HIDWORD(v4) & 0xFFFFFFFE) - 2;
  }
  else
  {
    v12 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v10) + 0x7FFFFFFF);
  }
  v13 = *a4;
  v14 = (unsigned __int16 *)((char *)v8 + v12);
  if ( *a4 <= 49 )
  {
    v15 = 35608;
  }
  else
  {
    v15 = -1431655765;
    LODWORD(v4) = v13 + 2;
  }
  if ( *a4 <= 49 )
  {
    HIWORD(v15) = 67;
    v15 = *(unsigned __int8 *)(v15 + v13 + 20);
  }
  else
  {
    v4 = (unsigned int)v4 * (unsigned __int64)(unsigned int)v15;
  }
  if ( *a4 > 49 )
    v15 = HIDWORD(v4) >> 1;
  v16 = a1 + 10 + 2 * (v15 + 0x7FFFFFFF);
  v17 = v13 - 3 * (v15 - 1);
  if ( a1 + 10 > v16 )
  {
    v28 = 0;
LABEL_42:
    *(_DWORD *)a1 = sub_327CA8(v29, v28);
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    return a1;
  }
  v32 = v17 - 1;
  v18 = (_WORD *)(a1 + 10);
  v19 = (unsigned int)v11;
  v30 = a1;
  v31 = a4;
  while ( 1 )
  {
    if ( (unsigned int)v7 <= v19 )
    {
      v20 = *v7;
      if ( v8 > v14 )
      {
        v21 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      if ( v8 > v14 )
      {
        *v18 = 0;
        goto LABEL_25;
      }
      v20 = 0;
    }
    v21 = *v8;
LABEL_24:
    v22 = v21 | v20;
    *v18 = 0;
    if ( v21 | v20 )
      break;
LABEL_25:
    ++v18;
    ++v7;
    ++v8;
    if ( (unsigned int)v18 > v16 )
    {
      a1 = v30;
      v28 = ((int)v18 - v29) >> 1;
      goto LABEL_42;
    }
  }
  v24 = 0;
  while ( 1 )
  {
    if ( (v22 & 1) != 0 )
      *v18 += dword_438D00[v24];
    v25 = v20 % 0xA;
    v20 = (unsigned __int16)(v20 / 0xA);
    v26 = v21 / 0xA;
    v27 = v21 % 0xA;
    v21 = (unsigned __int16)(v21 / 0xA);
    v22 = v26 | v20;
    if ( (unsigned __int16)(v27 | v25) > 1u )
      break;
    if ( (v18 != (_WORD *)v16 || v32 != v24) && ++v24 != 3 )
      continue;
    goto LABEL_25;
  }
  a1 = v30;
  a4 = v31;
LABEL_31:
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 10) = 0;
  *(_DWORD *)a1 = 1;
  *(_BYTE *)(a1 + 8) = 32;
  sub_3313E4(a4);
  return a1;
}
