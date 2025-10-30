int __fastcall sub_12B490(int a1, char *s)
{
  char *v3; // r10
  char *v4; // r3
  bool v5; // cc
  int v6; // r3
  int (*v7)(const char *, const char *); // r9
  int v8; // r4
  unsigned __int8 *v9; // r6
  int v10; // r0
  int v11; // t1
  __int64 v12; // r0
  int v13; // r0
  unsigned int v14; // r6
  int v15; // r7
  int v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r8
  int v20; // r11
  int v21; // r9
  const char *v22; // r0
  const char *v24; // r0
  int (__fastcall *v25)(const char *, const char *); // [sp+Ch] [bp-10h]
  void *ptr; // [sp+14h] [bp-8h] BYREF

  v3 = s;
  v4 = off_46D5A4[0][2];
  v5 = (unsigned int)v4 > 7;
  if ( v4 != (char *)7 )
    v5 = (unsigned int)(v4 - 4) > 1;
  if ( !v5 )
  {
    if ( strchr(s, 40) )
    {
      sub_100138(&ptr, (int)v3);
      if ( ptr )
      {
        v3 = (char *)ptr;
        free(ptr);
      }
    }
  }
  v6 = (unsigned __int8)*v3;
  v7 = strcmp;
  v8 = 5381;
  v9 = (unsigned __int8 *)(v3 + 1);
  if ( dword_4879F4 )
    v7 = strcasecmp;
  v25 = v7;
  if ( *v3 )
  {
    do
    {
      v10 = tolower(v6);
      v11 = *v9++;
      v6 = v11;
      v8 = v10 + 33 * v8;
    }
    while ( v11 );
  }
  v12 = sub_347674(v8, *(_DWORD *)(a1 + 36));
  v13 = sub_15C250(*(_DWORD *)(a1 + 52) + 4 * HIDWORD(v12), 4, *(_DWORD *)(a1 + 20));
  if ( !v13 )
    return 0;
  v14 = *(_DWORD *)(a1 + 40);
  v15 = v13 - 1;
  if ( v14 > v13 - 1 )
  {
    v16 = 4 * (v13 + 0x3FFFFFFF);
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 56) + v16;
      v16 += 4;
      v18 = sub_15C250(v17, 4, *(_DWORD *)(a1 + 20));
      v19 = *(_DWORD *)(a1 + 36);
      v20 = v18;
      v21 = (unsigned __int64)sub_347674(v8, v19) >> 32;
      if ( v21 != (unsigned __int64)sub_347674(v20, v19) >> 32 )
        break;
      if ( v20 == v8 )
      {
        v22 = sub_12B42C(a1, v15);
        if ( !v25(v22, v3) )
          return *(_DWORD *)(a1 + 68)
               + sub_15C250(
                   *(_DWORD *)(a1 + 64) + v15 * (unsigned int)*(unsigned __int8 *)(a1 + 26),
                   *(unsigned __int8 *)(a1 + 26),
                   *(_DWORD *)(a1 + 20));
      }
      if ( *(_DWORD *)(a1 + 40) <= (unsigned int)++v15 )
        return 0;
    }
    return 0;
  }
  if ( dword_47AC88 <= 0 )
    return 0;
  v24 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
  sub_F43B4(&off_46D334, "Wrong .debug_names with name index %u but name_count=%u [in module %s]", v15, v14, v24);
  return 0;
}
