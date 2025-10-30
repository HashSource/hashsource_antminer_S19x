int __fastcall sub_2DCA88(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  unsigned int v7; // r4
  int v9; // r0
  int v11; // r2
  int v12; // r8
  int v13; // r1
  unsigned int v14; // r5
  int v15; // r1
  int v16; // r9
  int v17; // r2
  void (__fastcall *v18)(int, unsigned int, _DWORD *); // r10
  unsigned int v19; // r8
  unsigned int v20; // r2
  int v21; // r1

  v7 = a4;
  v9 = sub_2A87D8(a4, *(_DWORD *)(a3 + 24), a1);
  if ( v9 != *(_DWORD *)(a3 + 24) )
    return 0;
  v11 = *(_DWORD *)(a1 + 160);
  v12 = v9;
  v13 = *(_DWORD *)(v11 + 112);
  if ( v13 )
    v14 = sub_347418(*(_DWORD *)(v11 + 96), v13);
  else
    v14 = 0;
  v15 = *(_DWORD *)(a3 + 40);
  v16 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v17 = *(_DWORD *)(v16 + 392);
  if ( v15 == *(unsigned __int8 *)(v17 + 3) )
  {
    v18 = *(void (__fastcall **)(int, unsigned int, _DWORD *))(v17 + 56);
  }
  else
  {
    if ( v15 != *(unsigned __int8 *)(v17 + 4) )
    {
      ((void (__fastcall *)(int))loc_2A6C48)(3);
      return 0;
    }
    v18 = *(void (__fastcall **)(int, unsigned int, _DWORD *))(v17 + 64);
  }
  v19 = v7 + v12;
  if ( v7 >= v19 )
    return 1;
  while ( 1 )
  {
    v18(a1, v7, a5);
    v21 = *(_DWORD *)(v16 + 392);
    if ( *(_BYTE *)(v21 + 10) == 64 )
    {
      v20 = 0;
      if ( !v14 )
        goto LABEL_14;
      goto LABEL_17;
    }
    v20 = a5[1] >> 8;
    if ( !v14 )
      break;
LABEL_17:
    if ( v14 <= v20 )
    {
      sub_2A6A5C("%B: bad reloc symbol index (%#Lx >= %#lx) for offset %#Lx in section `%A'", a1);
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return 0;
    }
LABEL_14:
    v7 += *(_DWORD *)(a3 + 40);
    a5 += 3 * *(unsigned __int8 *)(v21 + 9);
    if ( v19 <= v7 )
      return 1;
  }
  if ( !v20 )
    goto LABEL_14;
  sub_2A6A5C(
    "%B: non-zero symbol index (%#Lx) for offset %#Lx in section `%A' when the object file has no symbol table",
    a1,
    v20,
    *a5,
    a2);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
