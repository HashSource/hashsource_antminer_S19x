char *__fastcall sub_715E8(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v7; // r3
  char *result; // r0
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r3

  if ( !a1 || *a1 != 1281582695 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      1063,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v7 = a1[1];
  if ( *(_DWORD *)(v7 + 12) <= a2 )
    sub_6FC54((int)"./../lib/isc/log.c", 1067, 0, "category_id < lctx->category_count");
  if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v7 + 20) )
    sub_6FC54((int)"./../lib/isc/log.c", 1068, 0, "module == ((void *)0) || module->id < lctx->module_count");
  if ( !a4 )
    sub_6FC54((int)"./../lib/isc/log.c", 1069, 0, "channel != ((void *)0)");
  result = sub_714BC((int)a1);
  if ( !result )
  {
    v10 = sub_64B04(0, 0x10u, 0, 0);
    if ( v10 )
    {
      v11 = a1[4];
      *v10 = a3;
      v10[1] = a4;
      v12 = *(_DWORD *)(v11 + 8 * a2);
      if ( !v12 )
        *(_DWORD *)(v11 + 8 * a2 + 4) = v10;
      v13 = *(_DWORD *)(a4 + 4);
      if ( v12 )
        *(_DWORD *)(v12 + 8) = v10;
      v10[3] = v12;
      v10[2] = 0;
      *(_DWORD *)(v11 + 8 * a2) = v10;
      if ( v13 == 1 )
        return 0;
      v14 = *(_DWORD *)(a4 + 8);
      if ( a1[7] < v14 )
        a1[7] = v14;
      if ( v14 )
      {
        return 0;
      }
      else
      {
        a1[9] = 1;
        return 0;
      }
    }
    else
    {
      return (_BYTE *)(&dword_0 + 1);
    }
  }
  return result;
}
