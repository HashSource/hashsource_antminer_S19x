int __fastcall sub_32A034(int a1, int a2, int a3, int *a4)
{
  __int64 v4; // r6
  int v6; // r0
  unsigned __int16 *v7; // r1
  unsigned __int16 *v8; // lr
  unsigned int v9; // r0
  int v10; // r2
  unsigned __int16 *v11; // r8
  unsigned int v12; // r2
  int v13; // r0
  int v14; // r2
  unsigned int v15; // r9
  int v16; // r2
  _WORD *v17; // r2
  unsigned int v18; // r12
  unsigned int v19; // r3
  unsigned int v20; // r0
  int v21; // r12
  __int16 v22; // r4
  __int16 v23; // lr
  int v24; // r1
  unsigned __int16 *v26; // [sp+4h] [bp-20h]
  unsigned __int16 *v27; // [sp+8h] [bp-1Ch]
  int v28; // [sp+10h] [bp-14h]
  int v29; // [sp+14h] [bp-10h]
  int *v30; // [sp+18h] [bp-Ch]
  int v31; // [sp+1Ch] [bp-8h]

  if ( *(_DWORD *)(a2 + 4)
    || (*(_BYTE *)(a2 + 8) & 0x70) != 0
    || (*(_BYTE *)(a2 + 8) & 0x80) != 0
    || *(_DWORD *)(a3 + 4)
    || (*(_BYTE *)(a3 + 8) & 0x70) != 0
    || (*(_BYTE *)(a3 + 8) & 0x80) != 0 )
  {
    goto LABEL_38;
  }
  v6 = *(_DWORD *)a2;
  v7 = (unsigned __int16 *)(a2 + 10);
  v8 = (unsigned __int16 *)(a3 + 10);
  v28 = a1 + 10;
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
  v11 = (unsigned __int16 *)((char *)v7 + v9);
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
  v26 = (unsigned __int16 *)((char *)v8 + v12);
  if ( *a4 <= 49 )
  {
    v14 = 35608;
  }
  else
  {
    v14 = -1431655765;
    LODWORD(v4) = v13 + 2;
  }
  if ( v13 <= 49 )
  {
    HIWORD(v14) = 67;
    v14 = *(unsigned __int8 *)(v14 + v13 + 20);
  }
  else
  {
    v4 = (unsigned int)v4 * (unsigned __int64)(unsigned int)v14;
  }
  if ( v13 > 49 )
    v14 = HIDWORD(v4) >> 1;
  v15 = a1 + 10 + 2 * (v14 + 0x7FFFFFFF);
  v16 = v13 - 3 * (v14 - 1);
  if ( a1 + 10 > v15 )
  {
    v24 = 0;
LABEL_36:
    *(_DWORD *)a1 = sub_327CA8(v28, v24);
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    return a1;
  }
  v31 = v16 - 1;
  v17 = (_WORD *)(a1 + 10);
  v29 = a1;
  v30 = a4;
  while ( v7 > v11 )
  {
    if ( v8 <= v26 )
    {
      v18 = 0;
LABEL_25:
      v19 = *v8;
      v20 = v18;
      v18 |= v19;
      goto LABEL_26;
    }
    *v17 = 0;
LABEL_34:
    ++v17;
    ++v7;
    ++v8;
    if ( (unsigned int)v17 > v15 )
    {
      a1 = v29;
      v24 = ((int)v17 - v28) >> 1;
      goto LABEL_36;
    }
  }
  v18 = *v7;
  if ( v8 <= v26 )
    goto LABEL_25;
  v19 = 0;
  v20 = *v7;
LABEL_26:
  *v17 = 0;
  if ( !v18 )
    goto LABEL_34;
  v21 = 0;
  v27 = v8;
  while ( 1 )
  {
    if ( (v20 & v19 & 1) != 0 )
      *v17 += dword_438D00[v21];
    v22 = v20 % 0xA;
    v20 = (unsigned __int16)(v20 / 0xA);
    v23 = v19 % 0xA;
    v19 = (unsigned __int16)(v19 / 0xA);
    if ( (unsigned __int16)(v23 | v22) > 1u )
      break;
    if ( (v17 != (_WORD *)v15 || v31 != v21) && ++v21 != 3 )
      continue;
    v8 = v27;
    goto LABEL_34;
  }
  a1 = v29;
  a4 = v30;
LABEL_38:
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 10) = 0;
  *(_DWORD *)a1 = 1;
  *(_BYTE *)(a1 + 8) = 32;
  sub_3313E4(a4);
  return a1;
}
