void *__fastcall sub_2D280(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r4
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r4
  __int16 v12; // r3
  int v14; // [sp+4h] [bp-8h]

  if ( *(_WORD *)(a2 + 32) )
  {
    v6 = a2 + 80;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_6EAC0(a3, v6);
      v9 = *(unsigned __int16 *)(a2 + 32);
      if ( v8 >= 0 )
        break;
      ++v7;
      v6 += 16;
      if ( v9 == v7 )
        goto LABEL_8;
    }
    if ( v9 <= v7 )
    {
LABEL_8:
      v11 = v7 - 1;
      goto LABEL_9;
    }
    v10 = a2 + 16 * v7;
    v11 = v7 - 1;
    v12 = *(_WORD *)(v10 + 92);
    *(_QWORD *)a1 = *(_QWORD *)(v10 + 80);
    *(_WORD *)(a1 + 16) = v12;
    if ( v11 < 0 )
      return memset((void *)(a1 + 8), 255, 8u);
    goto LABEL_7;
  }
  v11 = -1;
LABEL_9:
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = 0;
  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)(a1 + 3) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 6) = 0;
  *(_BYTE *)(a1 + 7) = 0;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a2 + 34);
  if ( v11 >= 0 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 16 * v11 + 80);
    return (void *)v14;
  }
  return memset((void *)(a1 + 8), 255, 8u);
}
