int __fastcall sub_124A4C(int result, int a2, int a3)
{
  int v5; // r2
  bool v6; // cc
  int v7; // r3
  int *v8; // r3
  int v9; // r12
  unsigned __int8 *v10; // r2
  int v11; // r6
  int v12; // r3
  char *v13; // r2
  char *v14; // r3
  int v15; // t1
  __int64 v16; // r0
  int v17; // r2
  __int64 v18; // r0
  int v19; // [sp+Ch] [bp-4h] BYREF

  if ( !result )
    goto LABEL_13;
  v5 = *(_WORD *)(result + 2) & 0x7FFF;
  v6 = (unsigned int)(v5 - 3) > 1;
  if ( (unsigned int)(v5 - 3) > 1 )
    v6 = (unsigned int)(v5 - 9) > 1;
  v7 = !v6;
  if ( v5 == 24 )
    v7 |= 1u;
  if ( !v7 )
    goto LABEL_13;
  v8 = *(int **)(result + 8);
  v9 = *v8;
  if ( !*v8 )
  {
    *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 32) & 7 | 0x68;
    return result;
  }
  v10 = (unsigned __int8 *)v8[1];
  v11 = *(_DWORD *)a3;
  v12 = *v10;
  if ( v12 != 3 )
  {
    if ( v12 == 251 )
    {
      v13 = (char *)(v10 + 1);
      v14 = v13;
      do
        v15 = *v14++;
      while ( v15 < 0 );
      if ( v9 == v14 - v13 + 1 )
      {
        *(_DWORD *)(a2 + 8) = sub_122EAC((unsigned __int8 *)(a3 + 14), (__int64 *)(a3 + 176), v13, &v19);
        goto LABEL_23;
      }
    }
LABEL_13:
    result = ((int (*)(void))loc_124768)();
    if ( *(_BYTE *)(*((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a2 + 32) >> 3) + 1) + 16) )
      *(_BYTE *)(a3 + 192) |= 2u;
    return result;
  }
  if ( v9 != *(unsigned __int8 *)(a3 + 14) + 1 )
    goto LABEL_13;
  HIDWORD(v16) = *(_DWORD *)(v11 + 36);
  LODWORD(v16) = *(_DWORD *)HIDWORD(v16);
  HIDWORD(v16) += 4;
  *(_DWORD *)(a2 + 8) = sub_11E3C0(v16, (int)(v10 + 1), a3, &v19);
LABEL_23:
  *(_BYTE *)(a2 + 32) = *(_BYTE *)(a2 + 32) & 7 | 0x10;
  result = sub_21C7C8(a2, v11);
  v17 = *(__int16 *)(a2 + 22);
  if ( v17 == -1 )
  {
    v18 = sub_94700((int)"dwarf2read.c", 21159, "Section index is uninitialized");
    return sub_124BE8(v18, HIDWORD(v18));
  }
  else
  {
    *(_DWORD *)(a2 + 8) += *(_DWORD *)(*(_DWORD *)(v11 + 144) + 4 * v17);
  }
  return result;
}
