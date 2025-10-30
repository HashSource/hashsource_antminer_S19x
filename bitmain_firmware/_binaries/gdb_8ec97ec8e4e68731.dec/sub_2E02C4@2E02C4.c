bool __fastcall sub_2E02C4(int a1, int a2)
{
  _DWORD *v2; // r5
  const char *v5; // r1
  int v7; // r6
  const char *v8; // r8
  int v9; // r3
  int v10; // r0
  int v11; // r2
  char v12; // r3
  char v13; // r0
  _BYTE *v14; // r3
  int v15; // r0

  v2 = *(_DWORD **)(a2 + 28);
  if ( v2[54] )
    return 1;
  v5 = ".rela.got";
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v8 = *(const char **)(v7 + 28);
  if ( (*(_BYTE *)(v7 + 464) & 0x20) == 0 )
    v5 = ".rel.got";
  v9 = sub_2ADB48(a1, v5, (const char *)((unsigned int)v8 | 8));
  if ( !v9 )
    return 0;
  *(_DWORD *)(v9 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v7 + 392) + 11);
  v2[56] = v9;
  v10 = sub_2ADB48(a1, ".got", v8);
  v11 = v10;
  if ( !v10 )
    return 0;
  *(_DWORD *)(v10 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v7 + 392) + 11);
  v12 = *(_BYTE *)(v7 + 465);
  v2[54] = v10;
  if ( (v12 & 2) != 0 )
  {
    v15 = sub_2ADB48(a1, ".got.plt", v8);
    v11 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v7 + 392) + 11);
      v2[55] = v15;
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v13 = *(_BYTE *)(v7 + 466);
  *(_DWORD *)(v11 + 36) += *(_DWORD *)(v7 + 400);
  if ( (v13 & 8) == 0 )
    return 1;
  v14 = sub_2E01A8(a1, a2, v11, (int)"_GLOBAL_OFFSET_TABLE_");
  *(_DWORD *)(*(_DWORD *)(a2 + 28) + 116) = v14;
  return v14 != 0;
}
