void __fastcall sub_1C9EE0(
        _DWORD *a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12)
{
  void (__fastcall *v13)(void **); // r2
  const char *v14; // r0
  const char *v15; // r5
  int v16; // r7
  int v17; // r4
  bool v18; // zf
  _DWORD *(__fastcall *v19)(void **); // r3
  int v20; // r7
  char *v21; // r6
  int v22; // r2
  char *v23; // r9
  int v24; // r2
  char *v25; // r11
  const char *v26; // t1
  void *v27; // r0
  const char **v28; // [sp+8h] [bp-54h]
  const char **v29; // [sp+10h] [bp-4Ch]
  void *v31; // [sp+1Ch] [bp-40h] BYREF
  const char **v32; // [sp+20h] [bp-3Ch]
  void *v33[2]; // [sp+28h] [bp-34h] BYREF
  _BYTE v34[16]; // [sp+30h] [bp-2Ch] BYREF
  void *ptr; // [sp+40h] [bp-1Ch] BYREF
  _BYTE *v36; // [sp+44h] [bp-18h]
  _DWORD v37[5]; // [sp+48h] [bp-14h] BYREF

  if ( !a2 )
  {
    sub_94700(
      (int)"probe.c",
      365,
      "%s: Assertion `%s' failed.",
      "void gen_ui_out_table_header_info(const std::vector<bound_probe>&, const static_probe_ops*)",
      "spops != NULL");
    v27 = v31;
    if ( v31 )
      sub_339E64(v31);
    sub_338FFC(v27);
  }
  v13 = *(void (__fastcall **)(void **))(*(_DWORD *)a2 + 16);
  if ( v13 == (void (__fastcall *)(void **))sub_1C9ADC )
    return;
  v13(&v31);
  v29 = v32;
  if ( v31 == v32 )
    goto LABEL_35;
  v28 = (const char **)((char *)v31 + 8);
  while ( 2 )
  {
    v14 = (const char *)strlen(*(v28 - 1));
    v15 = v14;
    v16 = a1[1];
    if ( *a1 == v16 )
      goto LABEL_13;
    v17 = *a1 + 8;
    while ( 1 )
    {
      v14 = (const char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v17 - 8) + 36))(*(_DWORD *)(v17 - 8));
      if ( a2 != v14 )
        goto LABEL_8;
      v19 = *(_DWORD *(__fastcall **)(void **))(**(_DWORD **)(v17 - 8) + 40);
      if ( (char *)v19 != (char *)sub_6E030 )
        break;
      ptr = 0;
      v36 = 0;
      v37[0] = 0;
      if ( v32 != v31 )
        goto LABEL_12;
LABEL_8:
      v18 = v16 == v17;
      v17 += 8;
      if ( v18 )
        goto LABEL_13;
    }
    v14 = (const char *)v19(&ptr);
    if ( (v36 - (_BYTE *)ptr) >> 2 == ((char *)v32 - (_BYTE *)v31) >> 3 )
    {
      if ( ptr != v36 )
      {
        v25 = (char *)ptr - 4;
        do
        {
          v26 = (const char *)*((_DWORD *)v25 + 1);
          v25 += 4;
          v14 = v26;
          if ( v26 )
          {
            v14 = (const char *)strlen(v14);
            if ( v15 < v14 )
              v15 = v14;
          }
        }
        while ( v36 - 4 != v25 );
      }
      if ( ptr )
        sub_339E64(ptr);
      goto LABEL_8;
    }
LABEL_12:
    v14 = (const char *)sub_94700(
                          (int)"probe.c",
                          385,
                          "%s: Assertion `%s' failed.",
                          "void gen_ui_out_table_header_info(const std::vector<bound_probe>&, const static_probe_ops*)",
                          "probe_fields.size () == headings.size ()");
LABEL_13:
    v20 = *(_DWORD *)sub_242FDC(v14);
    v21 = (char *)*(v28 - 2);
    v33[0] = v34;
    if ( v21 )
      v22 = (int)&v21[strlen(v21)];
    else
      v22 = -1;
    sub_1C9B48(v33, v21, v22);
    v23 = (char *)*(v28 - 1);
    ptr = v37;
    if ( v23 )
      v24 = (int)&v23[strlen(v23)];
    else
      v24 = -1;
    sub_1C9B48(&ptr, v23, v24);
    sub_2571B8(v20, v15, -1, v33, &ptr);
    if ( ptr != v37 )
      sub_339E64(ptr);
    if ( v33[0] != v34 )
      sub_339E64(v33[0]);
    if ( v29 != v28 )
    {
      v28 += 2;
      continue;
    }
    break;
  }
  v29 = (const char **)v31;
LABEL_35:
  if ( v29 )
    sub_339E64(v29);
}
