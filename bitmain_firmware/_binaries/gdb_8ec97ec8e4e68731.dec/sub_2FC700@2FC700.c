int __fastcall sub_2FC700(int a1, int *a2)
{
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v7; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r0
  unsigned int *v11; // r2

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
    return 1;
  v3 = *a2;
  *(_DWORD *)(a1 + 28) = 1;
  v4 = *(_BYTE *)(v3 + 1) & 0x60;
  if ( v4 == 96 || v4 == 64 && !sub_2AAC2C(*(_DWORD **)(v3 + 32), *(const char **)(a1 + 4), 0, 0) )
    return 1;
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 )
  {
LABEL_7:
    sub_2FC544(v7, a1);
    v10 = a2[1];
    v11 = (unsigned int *)a2[2];
    *(_DWORD *)(v7 + 12) |= 2u;
    if ( !sub_2FC690((int *)(v10 + 120), (unsigned int *)(v10 + 124), v11, v7) )
      sub_2A6BF0((int)"linker.c", 2295, (int)"_bfd_generic_link_write_global_symbol");
    return 1;
  }
  v8 = (*(int (**)(void))(*(_DWORD *)(a2[1] + 4) + 268))();
  v7 = v8;
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 4) = v9;
    goto LABEL_7;
  }
  return v2;
}
