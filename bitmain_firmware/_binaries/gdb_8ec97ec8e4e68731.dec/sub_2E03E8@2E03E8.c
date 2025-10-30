int __fastcall sub_2E03E8(_DWORD *a1, int a2)
{
  int v2; // r2
  int v5; // r5
  _DWORD *v6; // r7
  const char *v7; // r8
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r12
  int v13; // r0
  _BYTE *v14; // r0
  char v15; // r3
  int (__fastcall *v16)(int, int); // r3
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r0
  int v22; // r2
  int v23; // r1

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 40) != 1 )
    return 0;
  if ( *(_DWORD *)(v2 + 48) )
    return *(_DWORD *)(v2 + 40);
  if ( !sub_2DC9BC(a1, v2, (_DWORD *)(a2 + 56)) )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 56);
  v6 = *(_DWORD **)(*(_DWORD *)(v5 + 4) + 444);
  v7 = (const char *)v6[7];
  if ( (*(_BYTE *)a2 & 3u) <= 1
    && (*(_BYTE *)(a2 + 7) & 1) == 0
    && !sub_2ADB48(*(_DWORD *)(*(_DWORD *)(a2 + 28) + 56), ".interp", (const char *)((unsigned int)v7 | 8)) )
  {
    return 0;
  }
  v8 = sub_2ADB48(v5, ".gnu.version_d", (const char *)((unsigned int)v7 | 8));
  if ( !v8 )
    return 0;
  *(_DWORD *)(v8 + 64) = *(unsigned __int8 *)(v6[98] + 11);
  v9 = sub_2ADB48(v5, ".gnu.version", (const char *)((unsigned int)v7 | 8));
  if ( !v9 )
    return 0;
  *(_DWORD *)(v9 + 64) = 1;
  v10 = sub_2ADB48(v5, ".gnu.version_r", (const char *)((unsigned int)v7 | 8));
  if ( !v10 )
    return 0;
  *(_DWORD *)(v10 + 64) = *(unsigned __int8 *)(v6[98] + 11);
  v11 = sub_2ADB48(v5, ".dynsym", (const char *)((unsigned int)v7 | 8));
  if ( !v11 )
    return 0;
  v12 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(v11 + 64) = *(unsigned __int8 *)(v6[98] + 11);
  *(_DWORD *)(v12 + 268) = v11;
  if ( !sub_2ADB48(v5, ".dynstr", (const char *)((unsigned int)v7 | 8)) )
    return 0;
  v13 = sub_2ADB48(v5, ".dynamic", v7);
  if ( !v13 )
    return 0;
  *(_DWORD *)(v13 + 64) = *(unsigned __int8 *)(v6[98] + 11);
  v14 = sub_2E01A8(v5, a2, v13, (int)"_DYNAMIC");
  *(_DWORD *)(*(_DWORD *)(a2 + 28) + 124) = v14;
  if ( !v14 )
    return 0;
  v15 = *(_BYTE *)(a2 + 4);
  if ( (v15 & 2) != 0 )
  {
    v21 = sub_2ADB48(v5, ".hash", (const char *)((unsigned int)v7 | 8));
    if ( !v21 )
      return 0;
    v22 = v6[98];
    v23 = *(_DWORD *)(v21 + 140);
    *(_DWORD *)(v21 + 64) = *(unsigned __int8 *)(v22 + 11);
    v15 = *(_BYTE *)(a2 + 4);
    *(_DWORD *)(v23 + 40) = *(unsigned __int8 *)(v22 + 8);
  }
  if ( (v15 & 4) != 0 )
  {
    v17 = sub_2ADB48(v5, ".gnu.hash", (const char *)((unsigned int)v7 | 8));
    if ( !v17 )
      return 0;
    v18 = v6[98];
    v19 = *(_DWORD *)(v17 + 140);
    *(_DWORD *)(v17 + 64) = *(unsigned __int8 *)(v18 + 11);
    if ( *(_BYTE *)(v18 + 10) == 64 )
      v20 = 0;
    else
      v20 = 4;
    *(_DWORD *)(v19 + 40) = v20;
  }
  v16 = (int (__fastcall *)(int, int))v6[27];
  if ( v16 && v16(v5, a2) )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 28) + 48) = 1;
    return 1;
  }
  return 0;
}
