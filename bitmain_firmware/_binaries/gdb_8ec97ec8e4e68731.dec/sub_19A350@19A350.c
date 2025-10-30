_DWORD *__fastcall sub_19A350(_DWORD *a1, _DWORD *a2, const char **a3, const void *a4)
{
  unsigned int v4; // r4
  unsigned int *v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r0
  unsigned int *v13; // r5
  _DWORD *v14; // r6
  const char *v15; // t1
  int v16; // r5
  int v17; // r0
  const char *v18; // r12
  const char *v19; // r3
  int v20; // r5
  int v21; // r4
  void *v22; // r10
  const char *v23; // r2
  _BYTE *v24; // r3
  int v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r3
  int v30; // r0
  int v31; // [sp+8h] [bp-7Ch] BYREF
  void *v32; // [sp+Ch] [bp-78h]
  unsigned int *v33; // [sp+14h] [bp-70h] BYREF
  _DWORD *v34; // [sp+18h] [bp-6Ch] BYREF
  int v35; // [sp+1Ch] [bp-68h] BYREF
  _DWORD *v36; // [sp+20h] [bp-64h] BYREF
  unsigned int *v37; // [sp+24h] [bp-60h] BYREF
  const char *v38; // [sp+28h] [bp-5Ch]
  const char *v39; // [sp+2Ch] [bp-58h]
  void *v40; // [sp+30h] [bp-54h] BYREF
  _QWORD v41[2]; // [sp+34h] [bp-50h] BYREF
  void *ptr; // [sp+48h] [bp-3Ch] BYREF
  _QWORD v43[2]; // [sp+4Ch] [bp-38h] BYREF

  v4 = 0;
  v33 = 0;
  v32 = sub_9253C((int)sub_1953FC, (int)&v33);
  v36 = a2;
  v37 = 0;
  v9 = sub_99FE0(0, 1);
  v10 = *v9;
  v11 = v9[1];
  v37 = v9;
  if ( v10 >= v11 )
  {
    v30 = sub_94700(
            (int)"linespec.c",
            3474,
            "%s: Assertion `%s' failed.",
            "symtab** VEC_symtab_ptr_quick_push(VEC_symtab_ptr*, symtab_ptr, const char*, unsigned int)",
            "quick_push");
    sub_338FFC(v30);
  }
  *v9 = v10 + 1;
  v9[v10 + 2] = 0;
  sub_9253C((int)sub_195384, (int)&v37);
  v38 = 0;
  v39 = 0;
  v12 = ((int (__fastcall *)(const void *, unsigned int **))loc_1B57B8)(a4, &v33);
  v13 = v33;
  v31 = v12;
  if ( v33 && *v33 )
  {
    v14 = v33 + 1;
    do
    {
      v15 = (const char *)v14[1];
      ++v14;
      sub_196FB4(v15, 1, (int)&v36, 0);
      ++v4;
    }
    while ( v4 < *v13 );
    if ( (!v38 || !*(_DWORD *)v38) && (!v39 || !*(_DWORD *)v39) )
    {
      sub_92620(v32);
      v21 = 0;
      v31 = 0;
      v22 = 0;
      goto LABEL_24;
    }
    v16 = v31 - (_DWORD)a4;
    memcpy(&v31, a4, v31 - (_DWORD)a4);
    *((_BYTE *)&v31 + v16) = 0;
    v17 = sub_327254(&v31);
    v18 = v38;
    v19 = v39;
    a3[1] = (const char *)v17;
    a3[7] = v18;
    a3[8] = v19;
    sub_19966C(&v40, a2, (int)a3);
    v20 = a2[7];
    v21 = HIDWORD(v41[0]);
    v22 = v40;
    v31 = v41[0];
    if ( !v20 )
    {
LABEL_23:
      sub_92620(v32);
LABEL_24:
      v28 = v31;
      *a1 = v22;
      a1[1] = v28;
      a1[2] = v21;
      return a1;
    }
    v23 = *a3;
    v40 = (char *)v41 + 4;
    LODWORD(v41[0]) = 0;
    BYTE4(v41[0]) = 0;
    *(_BYTE *)(v20 + 1) = 1;
    if ( !v23 )
    {
      v34 = &v31;
LABEL_18:
      sub_19CC9C(&v35, &v34, 1);
      v26 = *(_DWORD *)(v20 + 4);
      v27 = v35;
      v35 = 0;
      *(_DWORD *)(v20 + 4) = v27;
      if ( v26 )
      {
        ((void (__fastcall *)(int))loc_19D154)(v20 + 4);
        if ( v35 )
          ((void (__fastcall *)(int *))loc_19D154)(&v35);
      }
      if ( v40 != (char *)v41 + 4 )
        sub_339E64(v40);
      goto LABEL_23;
    }
    sub_931D8((char **)&ptr, "%s:%s", v23, (const char *)&v31);
    v24 = v40;
    if ( ptr == (char *)v43 + 4 )
    {
      sub_33B48C(&v40, &ptr);
      v24 = ptr;
      goto LABEL_15;
    }
    if ( v40 == (char *)v41 + 4 )
    {
      v40 = ptr;
      v41[0] = v43[0];
    }
    else
    {
      v40 = ptr;
      v25 = HIDWORD(v41[0]);
      v41[0] = v43[0];
      if ( v24 )
      {
        ptr = v24;
        HIDWORD(v43[0]) = v25;
LABEL_15:
        LODWORD(v43[0]) = 0;
        *v24 = 0;
        if ( ptr != (char *)v43 + 4 )
          sub_339E64(ptr);
        v20 = a2[7];
        v34 = v40;
        goto LABEL_18;
      }
    }
    ptr = (char *)v43 + 4;
    v24 = (char *)v43 + 4;
    goto LABEL_15;
  }
  sub_92620(v32);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return a1;
}
