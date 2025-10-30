int __fastcall sub_32A2F4(int a1, int a2, int *a3)
{
  __int64 v3; // r4
  int v5; // r3
  char *v6; // r1
  unsigned int v7; // r11
  int v8; // r0
  _WORD *v9; // lr
  char *v10; // r11
  int v11; // r3
  unsigned int v12; // r9
  int v13; // r3
  int v14; // r4
  unsigned int v15; // r12
  unsigned __int16 v16; // r3
  int v17; // r1
  int v19; // [sp+0h] [bp-Ch]
  int v20; // [sp+4h] [bp-8h]

  if ( *(_DWORD *)(a2 + 4) || (*(_BYTE *)(a2 + 8) & 0x70) != 0 || (*(_BYTE *)(a2 + 8) & 0x80) != 0 )
  {
LABEL_28:
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 10) = 0;
    *(_DWORD *)a1 = 1;
    *(_BYTE *)(a1 + 8) = 32;
    sub_3313E4(a3);
    return a1;
  }
  v5 = *(_DWORD *)a2;
  v6 = (char *)(a2 + 10);
  v19 = a1 + 10;
  if ( v5 <= 49 )
  {
    v7 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v5) + 0x7FFFFFFF);
  }
  else
  {
    v3 = 2863311531LL * (unsigned int)(v5 + 2);
    v7 = (HIDWORD(v3) & 0xFFFFFFFE) - 2;
  }
  v8 = *a3;
  v9 = (_WORD *)(a1 + 10);
  v10 = &v6[v7];
  if ( *a3 <= 49 )
  {
    v11 = 35608;
  }
  else
  {
    v11 = -1431655765;
    LODWORD(v3) = v8 + 2;
  }
  if ( *a3 <= 49 )
  {
    HIWORD(v11) = 67;
    v11 = *(unsigned __int8 *)(v11 + v8 + 20);
  }
  else
  {
    v3 = (unsigned int)v3 * (unsigned __int64)(unsigned int)v11;
  }
  if ( *a3 > 49 )
    v11 = HIDWORD(v3) >> 1;
  v12 = a1 + 10 + 2 * (v11 + 0x7FFFFFFF);
  v13 = v8 - 3 * (v11 - 1);
  if ( (unsigned int)v9 <= v12 )
  {
    v20 = v13 - 1;
LABEL_16:
    v14 = 0;
    if ( v10 >= v6 )
      v15 = *(unsigned __int16 *)v6;
    else
      v15 = 0;
    *v9 = 0;
    while ( 1 )
    {
      if ( (v15 & 1) == 0 )
        *v9 += LOWORD(dword_438D00[v14]);
      v16 = v15 % 0xA;
      v15 = (unsigned __int16)(v15 / 0xA);
      if ( v16 > 1u )
        goto LABEL_28;
      if ( (v9 != (_WORD *)v12 || v20 != v14) && ++v14 != 3 )
        continue;
      ++v9;
      v6 += 2;
      if ( (unsigned int)v9 <= v12 )
        goto LABEL_16;
      v17 = ((int)v9 - v19) >> 1;
      goto LABEL_27;
    }
  }
  v17 = 0;
LABEL_27:
  *(_DWORD *)a1 = sub_327CA8(v19, v17);
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  return a1;
}
