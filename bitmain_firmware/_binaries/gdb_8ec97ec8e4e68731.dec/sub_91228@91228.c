int __fastcall sub_91228(unsigned int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r2
  void ***v5; // r4
  void ***v6; // r8
  void **v7; // r5
  void **v8; // t1
  void ***v9; // r4
  void ***v10; // r8
  void **v11; // r5
  void **v12; // t1
  void ***v14; // r7
  void ***i; // r4
  void **v16; // r5
  void **v17; // t1
  void ***v18; // r7
  void ***j; // r4
  void **v20; // r5
  void **v21; // t1
  int v22; // r0
  struct obstack v23; // [sp+Ch] [bp-4Ch] BYREF
  int v24; // [sp+38h] [bp-20h]
  void *v25; // [sp+3Ch] [bp-1Ch]
  void *v26; // [sp+40h] [bp-18h]
  int v27; // [sp+44h] [bp-14h]
  void *v28; // [sp+48h] [bp-10h]
  void *ptr; // [sp+4Ch] [bp-Ch]
  int v30; // [sp+50h] [bp-8h]
  unsigned int v31; // [sp+54h] [bp-4h]

  v2 = obstack_begin(&v23, 0, 0, (void *(*)(int))sub_93028, sub_8D034);
  v31 = a1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  ptr = 0;
  v30 = 0;
  if ( dword_4751A0 )
  {
    sub_94700(
      "rust-exp.y",
      191,
      "%s: Assertion `%s' failed.",
      "rust_parser::rust_parser(parser_state*)",
      "current_parser == nullptr");
    v14 = (void ***)ptr;
    for ( i = (void ***)v28; v14 != i; ++i )
    {
      v17 = *i;
      v16 = v17;
      if ( v17 )
      {
        if ( *v16 )
          sub_339E64(*v16);
        sub_33AC04(v16);
      }
    }
    if ( v28 )
      sub_339E64(v28);
    v18 = (void ***)v26;
    for ( j = (void ***)v25; v18 != j; ++j )
    {
      v21 = *j;
      v20 = v21;
      if ( v21 )
      {
        if ( *v20 )
          sub_339E64(*v20);
        sub_33AC04(v20);
      }
    }
    if ( v25 )
      sub_339E64(v25);
    obstack_free(&v23, 0);
    sub_338FFC(v22);
  }
  dword_4751A0 = (int)&v23;
  dword_4751A4 = (int)&v23;
  v3 = ((int (__fastcall *)(int))loc_8DAF8)(v2);
  if ( !v3 )
  {
    v4 = v24;
LABEL_5:
    sub_907B8(__SPAIR64__(v4, a1), v4, 0);
    goto LABEL_6;
  }
  if ( dword_487CAC )
  {
    v4 = v24;
    if ( v24 )
      goto LABEL_5;
  }
LABEL_6:
  v5 = (void ***)v28;
  v6 = (void ***)ptr;
  dword_4751A0 = 0;
  dword_4751A4 = 0;
  if ( v28 != ptr )
  {
    do
    {
      v8 = *v5++;
      v7 = v8;
      if ( v8 )
      {
        if ( *v7 )
          sub_339E64(*v7);
        sub_33AC04(v7);
      }
    }
    while ( v6 != v5 );
    v6 = (void ***)v28;
  }
  if ( v6 )
    sub_339E64(v6);
  v9 = (void ***)v25;
  v10 = (void ***)v26;
  if ( v25 != v26 )
  {
    do
    {
      v12 = *v9++;
      v11 = v12;
      if ( v12 )
      {
        if ( *v11 )
          sub_339E64(*v11);
        sub_33AC04(v11);
      }
    }
    while ( v10 != v9 );
    v10 = (void ***)v25;
  }
  if ( v10 )
    sub_339E64(v10);
  obstack_free(&v23, 0);
  return v3;
}
