int __fastcall sub_2FE748(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r4
  int v11; // r2
  int v12; // r3
  size_t n; // r10
  void *v15; // r0
  int v16; // r3
  void *v17; // r4
  char *v18; // r0
  int v19; // r0
  int v20; // lr
  _DWORD *v21; // r2
  int v22; // r5
  int v23; // r0
  int v24; // r3
  int v25; // r5

  if ( (*(_BYTE *)a2 & 3) != 2 )
    sub_2A6BF0((int)"linker.c", 2312, (int)"_bfd_generic_reloc_link_order");
  if ( !a3[18] )
    sub_2A6BF0((int)"linker.c", 2314, (int)"_bfd_generic_reloc_link_order");
  v8 = (_DWORD *)sub_2ACBF4(a1, 16);
  if ( !v8 )
    return 0;
  v9 = **(_DWORD **)(a4 + 16);
  v8[1] = *(_DWORD *)(a4 + 8);
  v10 = sub_301758(a1, v9);
  v8[3] = v10;
  if ( v10 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(a4 + 16) + 4);
    if ( *(_DWORD *)(a4 + 4) == 3 )
    {
      *v8 = *(_DWORD *)(v11 + 156);
LABEL_8:
      if ( !*(_DWORD *)(v10 + 36) )
      {
        v8[2] = *(_DWORD *)(*(_DWORD *)(a4 + 16) + 8);
LABEL_10:
        v12 = a3[19];
        *(_DWORD *)(a3[18] + 4 * v12) = v8;
        a3[19] = v12 + 1;
        return 1;
      }
      n = sub_300850(v10);
      v15 = sub_2AB4EC(n);
      v16 = n;
      v17 = v15;
      if ( n )
        v16 = 1;
      if ( v15 )
        v16 = 0;
      if ( !v16 )
      {
        v19 = sub_30120C(v8[3], a1, *(_DWORD *)(*(_DWORD *)(a4 + 16) + 8), v15);
        if ( v19 != 2 )
        {
          if ( v19 != 3 )
            sub_2A6BF0((int)"linker.c", 2375, (int)"_bfd_generic_reloc_link_order");
          v20 = *(_DWORD *)(a4 + 16);
          v21 = *(_DWORD **)(v20 + 4);
          if ( *(_DWORD *)(a4 + 4) == 3 )
            v21 = (_DWORD *)*v21;
          (*(void (__fastcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a2 + 24)
                                                                                                + 28))(
            a2,
            0,
            v21,
            *(_DWORD *)(v8[3] + 32),
            *(_DWORD *)(v20 + 8),
            0,
            0,
            0);
        }
        v22 = *(_DWORD *)(a4 + 8);
        v23 = sub_2A6904(a1);
        v25 = sub_2ADDE8(a1, a3, v17, v24, (unsigned int)(v23 * v22), n);
        free(v17);
        if ( v25 )
        {
          v8[2] = 0;
          goto LABEL_10;
        }
      }
      return 0;
    }
    v18 = sub_2FC960(a1, a2, (const char *)v11, 0, 0, 1);
    if ( v18 && *((_DWORD *)v18 + 7) )
    {
      v10 = v8[3];
      *v8 = v18 + 32;
      goto LABEL_8;
    }
    v10 = 0;
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a2 + 24) + 36))(
      a2,
      *(_DWORD *)(*(_DWORD *)(a4 + 16) + 4),
      0,
      0,
      0);
  }
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return v10;
}
