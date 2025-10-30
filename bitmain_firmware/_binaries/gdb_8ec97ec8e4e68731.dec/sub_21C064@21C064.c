int __fastcall sub_21C064(int a1, unsigned int a2, _DWORD *a3, int a4)
{
  int result; // r0
  unsigned int v7; // r5
  unsigned int v8; // r2
  unsigned int v9; // r5
  int v10; // r11
  unsigned int v11; // r9
  int v12; // r3
  __int16 v13; // r4
  int v14; // r12
  int v15; // r7
  int v16; // r6
  int v17; // r10
  int v18; // r0
  int v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch]

  result = (int)sub_1B2144(a2, *(char **)a1, a3, a4);
  if ( result )
  {
    *(_WORD *)(a1 + 22) = *(_WORD *)(result + 22);
  }
  else
  {
    v7 = a3[42];
    v8 = a3[43];
    if ( v7 >= v8 )
      goto LABEL_16;
    v9 = v7 + 12;
    v10 = -1;
    do
    {
      result = *(_DWORD *)(v9 - 12);
      v11 = v9;
      if ( result )
      {
        v12 = (int)(v9 - 12 - a3[42]) >> 2;
        v13 = -21845 * v12;
        if ( v9 == a3[42] )
        {
          sub_94700((int)"symtab.c", 1695, "Section index is uninitialized");
          JUMPOUT(0x21C1E0);
        }
        v14 = *(_DWORD *)(v9 - 8);
        v15 = *(_DWORD *)(result + 28);
        if ( v10 == -1 )
          v10 = -1431655765 * v12;
        v16 = *(_DWORD *)(v14 + 144);
        v17 = *(_DWORD *)(a3[36] - 1431655764 * v12);
        result = sub_162FDC(*(_DWORD *)(v14 + 36), *(_DWORD *)(v9 - 12));
        if ( a2 >= v15 - v17 + *(_DWORD *)(v16 + 4 * result) )
        {
          v18 = *(_DWORD *)(v9 - 8);
          v21 = *(_DWORD *)(v18 + 144);
          v20 = *(_DWORD *)(*(_DWORD *)(v9 - 12) + 28) + *(_DWORD *)(*(_DWORD *)(v9 - 12) + 36);
          result = sub_162FDC(*(_DWORD *)(v18 + 36), *(_DWORD *)(v9 - 12));
          if ( a2 < v20 - v17 + *(_DWORD *)(v21 + 4 * result) )
          {
            *(_WORD *)(a1 + 22) = v13;
            return result;
          }
        }
        v8 = a3[43];
      }
      v9 += 12;
    }
    while ( v8 > v11 );
    if ( v10 == -1 )
LABEL_16:
      *(_WORD *)(a1 + 22) = 0;
    else
      *(_WORD *)(a1 + 22) = v10;
  }
  return result;
}
