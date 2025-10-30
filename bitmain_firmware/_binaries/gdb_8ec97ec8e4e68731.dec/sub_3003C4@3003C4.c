int __fastcall sub_3003C4(int a1, int a2, int a3)
{
  int v4; // r5
  int v6; // r1
  int v7; // r12
  int v8; // r8
  unsigned int v9; // r3
  int v10; // r9
  __int64 v11; // r6
  int v12; // r3
  size_t v13; // r10
  int v14; // r11
  void *v15; // r0
  unsigned int v16; // r4
  void *v17; // r0
  unsigned int v18; // r4
  int v20; // r0
  int v21; // r2
  size_t v22; // r4
  void *src; // [sp+8h] [bp-14h]
  int v25; // [sp+14h] [bp-8h]

  if ( !a3 )
    return 0;
  v4 = *(_DWORD *)(a3 + 16);
  if ( !v4 )
    return 1;
  v6 = *(_DWORD *)(a2 + 60);
  v7 = *(_DWORD *)(v6 + 140);
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    v20 = sub_2A8A04(a1, *(_QWORD *)(v6 + 80) + *(unsigned int *)(a2 + 56), 0);
    v8 = v20;
    if ( !v20 )
    {
      v4 = *(_DWORD *)(a3 + 16);
      goto LABEL_8;
    }
    return 0;
  }
  v8 = *(_DWORD *)(v7 + 48);
  v9 = ((*(_DWORD *)(v6 + 20) ^ 0x8000000u) >> 27) & 1;
  if ( !v8 )
    v9 = 1;
  if ( v9 )
    sub_2A6BF0((int)"merge.c", 828, (int)"_bfd_write_merged_section");
LABEL_8:
  v10 = *(_DWORD *)(v4 + 24);
  LODWORD(v11) = *(_DWORD *)(a2 + 56);
  v25 = *(_DWORD *)(v10 + 4);
  v12 = *(_DWORD *)(*(_DWORD *)(v25 + 60) + 64);
  if ( v12 )
    v13 = 1;
  else
    v13 = 16;
  if ( v12 )
    v13 <<= v12;
  src = sub_2AB4EC(v13);
  if ( !src )
    return 0;
  HIDWORD(v11) = 0;
  v14 = 0;
  while ( v10 == *(_DWORD *)(v4 + 24) )
  {
    v16 = (*(_DWORD *)(v4 + 16) - 1) & -v14;
    if ( !v16 )
      goto LABEL_23;
    if ( v13 < v16 )
    {
      sub_2A6BBC("merge.c", 313);
      if ( !v8 )
      {
LABEL_30:
        if ( v16 != sub_2A8884((int)src, v16, a1) )
          goto LABEL_25;
        goto LABEL_22;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_30;
    }
    v17 = (void *)(v8 + v11);
    v11 += v16;
    memcpy(v17, src, v16);
LABEL_22:
    v14 += v16;
LABEL_23:
    v18 = *(_DWORD *)(v4 + 12);
    if ( v8 )
    {
      v15 = (void *)(v8 + v11);
      v11 += v18;
      memcpy(v15, *(const void **)(v4 + 4), *(_DWORD *)(v4 + 12));
    }
    else if ( v18 != sub_2A8884(*(_DWORD *)(v4 + 4), *(_DWORD *)(v4 + 12), a1) )
    {
      goto LABEL_25;
    }
    v4 = *(_DWORD *)(v4 + 28);
    v14 += v18;
    if ( !v4 )
      break;
  }
  v21 = *(_DWORD *)(v25 + 36);
  v22 = v21 - v14;
  if ( v21 != v14 )
  {
    if ( v13 < v22 )
      sub_2A6BBC("merge.c", 342);
    if ( v8 )
    {
      memcpy((void *)(v8 + v11), src, v22);
    }
    else if ( v22 != sub_2A8884((int)src, v22, a1) )
    {
LABEL_25:
      free(src);
      return 0;
    }
  }
  free(src);
  return 1;
}
