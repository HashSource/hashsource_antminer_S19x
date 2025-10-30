int __fastcall sub_2E0660(int a1, int a2)
{
  _DWORD *v3; // r8
  int v5; // r4
  const char *v6; // r7
  unsigned int v7; // r2
  int v8; // r0
  char v9; // r3
  const char *v10; // r1
  int v11; // r3
  _BYTE *v13; // r0
  int v14; // r0
  char v15; // r3
  const char *v16; // r1
  int v17; // r0
  char v18; // r3
  const char *v19; // r1
  int v20; // r3
  int v21; // r0

  v3 = *(_DWORD **)(a2 + 28);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v6 = *(const char **)(v5 + 28);
  if ( (*(_BYTE *)(v5 + 465) & 0x10) != 0 )
    v7 = (unsigned int)v6 & 0xFFFFFEEF;
  else
    v7 = (unsigned int)v6 | 0x13;
  if ( (*(_BYTE *)(v5 + 465) & 0x10) != 0 )
    v7 &= ~2u;
  if ( (*(_BYTE *)(v5 + 465) & 4) != 0 )
    v7 |= 8u;
  v8 = sub_2ADB48(a1, ".plt", (const char *)v7);
  if ( !v8 )
    return 0;
  *(_DWORD *)(v8 + 64) = (*(_DWORD *)(v5 + 464) >> 13) & 0xF;
  v9 = *(_BYTE *)(v5 + 465);
  v3[57] = v8;
  if ( (v9 & 8) != 0 )
  {
    v13 = sub_2E01A8(a1, a2, v8, (int)"_PROCEDURE_LINKAGE_TABLE_");
    *(_DWORD *)(*(_DWORD *)(a2 + 28) + 120) = v13;
    if ( !v13 )
      return 0;
  }
  v10 = ".rela.plt";
  if ( (*(_BYTE *)(v5 + 464) & 0x20) == 0 )
    v10 = ".rel.plt";
  v11 = sub_2ADB48(a1, v10, (const char *)((unsigned int)v6 | 8));
  if ( !v11 )
    return 0;
  *(_DWORD *)(v11 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 392) + 11);
  v3[58] = v11;
  if ( !sub_2E02C4(a1, a2) )
    return 0;
  if ( (*(_BYTE *)(v5 + 466) & 0x10) == 0 )
    return 1;
  v14 = sub_2ADB48(a1, ".dynbss", (const char *)&loc_100000 + 1);
  if ( !v14 )
    return 0;
  v15 = *(_BYTE *)(v5 + 466);
  v3[59] = v14;
  if ( (v15 & 0x20) != 0 )
  {
    v21 = sub_2ADB48(a1, ".data.rel.ro", v6);
    if ( !v21 )
      return 0;
    v3[61] = v21;
  }
  if ( (*(_BYTE *)a2 & 3u) > 1 )
    return 1;
  v16 = ".rela.bss";
  if ( (*(_BYTE *)(v5 + 464) & 0x20) == 0 )
    v16 = ".rel.bss";
  v17 = sub_2ADB48(a1, v16, (const char *)((unsigned int)v6 | 8));
  if ( !v17 )
    return 0;
  *(_DWORD *)(v17 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 392) + 11);
  v18 = *(_BYTE *)(v5 + 466);
  v3[60] = v17;
  if ( (v18 & 0x20) == 0 )
    return 1;
  v19 = ".rela.data.rel.ro";
  if ( (*(_BYTE *)(v5 + 464) & 0x20) == 0 )
    v19 = ".rel.data.rel.ro";
  v20 = sub_2ADB48(a1, v19, (const char *)((unsigned int)v6 | 8));
  if ( !v20 )
    return 0;
  *(_DWORD *)(v20 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 392) + 11);
  v3[62] = v20;
  return 1;
}
