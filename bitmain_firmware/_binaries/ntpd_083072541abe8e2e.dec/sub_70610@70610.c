int __fastcall sub_70610(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v7; // r3
  char *v9; // r9
  _DWORD *v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r3

  if ( !a1 || *a1 != 1281582695 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      1063,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v7 = a1[1];
  if ( *(_DWORD *)(v7 + 12) <= a2 )
    sub_6ECC0((int)"./../lib/isc/log.c", 1067, 0, "category_id < lctx->category_count");
  if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v7 + 20) )
    sub_6ECC0((int)"./../lib/isc/log.c", 1068, 0, "module == ((void *)0) || module->id < lctx->module_count");
  if ( !a4 )
    sub_6ECC0((int)"./../lib/isc/log.c", 1069, 0, "channel != ((void *)0)");
  v9 = sub_704E0((int)a1);
  if ( !v9 )
  {
    v11 = sub_63BA4(0, 0x10u, 0, 0);
    if ( v11 )
    {
      v12 = a1[4];
      *v11 = a3;
      v11[1] = a4;
      v13 = *(_DWORD *)(v12 + 8 * a2);
      if ( !v13 )
        *(_DWORD *)(v12 + 8 * a2 + 4) = v11;
      v14 = *(_DWORD *)(a4 + 4);
      if ( v13 )
        *(_DWORD *)(v13 + 8) = v11;
      v11[3] = v13;
      v11[2] = 0;
      *(_DWORD *)(v12 + 8 * a2) = v11;
      if ( v14 != 1 )
      {
        v15 = *(_DWORD *)(a4 + 8);
        if ( a1[7] < v15 )
          a1[7] = v15;
        if ( !v15 )
          a1[9] = 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return (int)v9;
}
