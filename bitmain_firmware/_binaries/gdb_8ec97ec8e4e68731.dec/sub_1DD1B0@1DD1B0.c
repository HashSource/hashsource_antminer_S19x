_DWORD *__fastcall sub_1DD1B0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r4
  int v9; // r0
  int v10; // r5
  void *v11; // r0
  int v12; // r1
  int v13; // r4
  __int64 v14; // r2
  int v15; // r12
  int v16; // r0
  int v17; // r7
  int v18; // r0
  int *v19; // r3
  _DWORD *v20; // r1
  int v21; // t1

  if ( !a1 )
  {
LABEL_18:
    sub_94700(
      (int)"regcache.c",
      81,
      "%s: Assertion `%s' failed.",
      "void* init_regcache_descr(gdbarch*)",
      "gdbarch != NULL");
    JUMPOUT(0x1DD3B4);
  }
  v2 = sub_163938(a1, 0x1Cu);
  *v2 = a1;
  v3 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v4 = ((int (__fastcall *)(int))loc_166F48)(a1);
  v2[2] = v3 + v4;
  v5 = sub_163938(a1, 4 * (v3 + v4));
  v6 = v2[2];
  v7 = v5;
  v2[6] = v5;
  if ( v6 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = ((int (__fastcall *)(int, int))loc_1678C8)(a1, v8);
      v6 = v2[2];
      v7[v8++] = v9;
      if ( v6 <= v8 )
        break;
      v7 = (_DWORD *)v2[6];
    }
  }
  v10 = 0;
  v11 = sub_163938(a1, 4 * v6);
  v12 = v2[2];
  v13 = 0;
  v2[5] = v11;
  v2[4] = sub_163938(a1, 4 * v12);
  while ( v13 < ((int (__fastcall *)(int))loc_166E9C)(a1) )
  {
    v14 = *((_QWORD *)v2 + 2);
    *(_DWORD *)(HIDWORD(v14) + 4 * v13) = *(_DWORD *)(*(_DWORD *)(v2[6] + 4 * v13) + 20);
    *(_DWORD *)(v14 + 4 * v13) = v10;
    HIDWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 4 * v13);
    v10 += HIDWORD(v14);
    if ( SHIDWORD(v14) > 64 )
    {
      sub_94700(
        (int)"regcache.c",
        122,
        "%s: Assertion `%s' failed.",
        "void* init_regcache_descr(gdbarch*)",
        "MAX_REGISTER_SIZE >= descr->sizeof_register[i]");
      goto LABEL_17;
    }
    ++v13;
  }
  v15 = v2[2];
  v2[1] = v10;
  if ( v15 > v13 )
  {
    v16 = v2[6];
    v17 = *(_DWORD *)(v16 + 4 * v13);
    v18 = v16 + 4 * v13;
    v19 = (int *)(v2[5] + 4 * v13);
    v20 = (_DWORD *)(v2[4] + 4 * v13);
    *v19 = *(_DWORD *)(v17 + 20);
    *v20 = v10;
    v10 += *v19;
    if ( *v19 > 64 )
    {
LABEL_17:
      sub_94700(
        (int)"regcache.c",
        132,
        "%s: Assertion `%s' failed.",
        "void* init_regcache_descr(gdbarch*)",
        "MAX_REGISTER_SIZE >= descr->sizeof_register[i]");
      goto LABEL_18;
    }
    while ( v15 != ++v13 )
    {
      v21 = *(_DWORD *)(v18 + 4);
      v18 += 4;
      v19[1] = *(_DWORD *)(v21 + 20);
      ++v19;
      v20[1] = v10;
      ++v20;
      v10 += *v19;
      if ( *v19 > 64 )
        goto LABEL_17;
    }
  }
  v2[3] = v10;
  return v2;
}
