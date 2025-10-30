int __fastcall sub_2E3134(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r5
  int v8; // r0
  int v9; // r7
  int v11; // r0
  int v12; // r9
  const char **v13; // r0
  const char **v14; // r10
  unsigned int v15; // r4
  int v16; // r2
  _DWORD v17[3]; // [sp+0h] [bp-Ch] BYREF

  if ( !sub_2DC9BC(a1, *(_DWORD *)(a2 + 28), (_DWORD *)(a2 + 56)) )
    return -1;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = sub_2F0184(*(_DWORD *)(v7 + 84), a3, 0);
  v9 = v8;
  if ( v8 == -1 )
    return -1;
  if ( sub_2F037C(*(_DWORD *)(v7 + 84), v8) == 1
    || (v11 = *(_DWORD *)(v7 + 56),
        v12 = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 444),
        v13 = sub_2AD864(v11, ".dynamic"),
        (v14 = v13) == 0)
    || (v15 = (unsigned int)v13[27], v15 >= (unsigned int)&v13[9][v15]) )
  {
LABEL_4:
    if ( !a4 )
    {
      sub_2F02DC(*(_DWORD *)(v7 + 84), v9);
      return 0;
    }
    if ( sub_2E03E8(*(_DWORD **)(v7 + 56), a2) )
      return -(sub_2E3078(a2, 1, v9) == 0);
    return -1;
  }
  v16 = *(_DWORD *)(v12 + 392);
  while ( 1 )
  {
    (*(void (__fastcall **)(_DWORD, unsigned int, _DWORD *))(v16 + 48))(*(_DWORD *)(v7 + 56), v15, v17);
    if ( v17[0] == 1 && v17[1] == v9 )
      break;
    v16 = *(_DWORD *)(v12 + 392);
    v15 += *(unsigned __int8 *)(v16 + 6);
    if ( (const char *)v15 >= &v14[9][(int)v14[27]] )
      goto LABEL_4;
  }
  sub_2F02DC(*(_DWORD *)(v7 + 84), v9);
  return 1;
}
