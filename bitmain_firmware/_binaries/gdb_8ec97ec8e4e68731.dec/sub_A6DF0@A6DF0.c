void __fastcall sub_A6DF0(int a1, int a2, int a3, int a4)
{
  int v4; // r12
  int *i; // r6
  int v9; // r1
  int v10; // r3
  void (__fastcall *v11)(int *, int, int, int, int (__fastcall *)(int, int, _DWORD *), _DWORD *, int (__fastcall *)(const char *, unsigned __int8 *), int (__fastcall *)(const char *, unsigned __int8 *)); // r4
  int (__fastcall *v12)(const char *, unsigned __int8 *); // r3
  _DWORD *v13; // r4
  _BOOL4 v14; // r0
  const char *v15; // r4
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r12
  void *v20; // r3
  int *v21; // lr
  bool v22; // zf
  int v23; // r2
  int v24; // r6
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r12
  void *v29; // r3
  int *v30; // lr
  bool v31; // zf
  int v32; // r2
  int v33; // r2
  _DWORD *v34; // r0
  _DWORD *j; // r4
  int v36; // r12
  int v37; // [sp+14h] [bp-14h]
  int v39; // [sp+24h] [bp-4h]
  _DWORD v40[3]; // [sp+28h] [bp+0h] BYREF
  int v41; // [sp+34h] [bp+Ch]
  void *v42; // [sp+38h] [bp+10h]
  int v43; // [sp+3Ch] [bp+14h]
  _DWORD v44[4]; // [sp+40h] [bp+18h] BYREF
  void *v45[2]; // [sp+50h] [bp+28h] BYREF
  _BYTE v46[16]; // [sp+58h] [bp+30h] BYREF
  void *ptr; // [sp+68h] [bp+40h] BYREF
  int v48; // [sp+6Ch] [bp+44h]
  _DWORD v49[5]; // [sp+70h] [bp+48h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 60);
  v40[2] = 0;
  v40[0] = 0;
  v40[1] = a1;
  v39 = a2 + 32;
  v41 = 0;
  if ( !v4 )
  {
    sub_A3C94(a2 + 32, a2);
    *(_BYTE *)(a2 + 60) = 1;
  }
  v37 = (*(unsigned __int8 *)(a2 + 56) >> 1) & 1;
  for ( i = *(int **)(dword_487D2C + 36); i; i = (int *)*i )
  {
    v9 = *(_DWORD *)(a2 + 8);
    v10 = *(_DWORD *)(i[33] + 40);
    v40[0] = i;
    v11 = *(void (__fastcall **)(int *, int, int, int, int (__fastcall *)(int, int, _DWORD *), _DWORD *, int (__fastcall *)(const char *, unsigned __int8 *), int (__fastcall *)(const char *, unsigned __int8 *)))(v10 + 44);
    if ( v37 )
      v12 = 0;
    else
      v12 = sub_9D30C;
    if ( v37 )
      v11(i, v9, a3, a4, sub_9D7DC, v40, v12, v12);
    else
      v11(i, v9, a3, a4, sub_9D7DC, v40, (int (__fastcall *)(const char *, unsigned __int8 *))1, v12);
    v13 = (_DWORD *)i[5];
    while ( v13 )
    {
      v14 = sub_A6B40(a1, *(_DWORD *)(v13[8] + 8), a2, a3);
      v13 = (_DWORD *)*v13;
      if ( v14 )
        v41 = 1;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) <= 7 && (a4 & (v37 ^ 1)) != 0 )
  {
    if ( !*(_BYTE *)(a2 + 60) )
    {
      sub_A3C94(v39, a2);
      *(_BYTE *)(a2 + 60) = 1;
    }
    v15 = *(const char **)(a2 + 32);
    v45[0] = v46;
    sub_9D8E0(v45, "<_ada_", (int)"");
    v16 = strlen(v15);
    if ( 0x7FFFFFFF - (unsigned int)v45[1] < v16 )
      sub_33D184("basic_string::append");
    v17 = sub_33C320(v45, v15, v16);
    ptr = v49;
    v19 = v17;
    v21 = (int *)(v17 + 8);
    v20 = *(void **)v17;
    v22 = *(_DWORD *)v17 == v17 + 8;
    if ( *(_DWORD *)v17 == v17 + 8 )
    {
      v17 = *v21;
      i = v49;
      v18 = v21[1];
      v23 = v21[2];
      v20 = (void *)v21[3];
    }
    else
    {
      v23 = *(_DWORD *)(v17 + 8);
      ptr = *(void **)v17;
    }
    if ( v22 )
    {
      *i = v17;
      i[1] = v18;
      i[2] = v23;
      i[3] = (int)v20;
    }
    else
    {
      v49[0] = v23;
    }
    v24 = 62;
    v25 = *(_DWORD *)(v19 + 4);
    *(_BYTE *)(v19 + 8) = 0;
    v48 = v25;
    *(_DWORD *)v19 = v21;
    *(_DWORD *)(v19 + 4) = 0;
    v26 = sub_33BA6C((int)&ptr, v48, 0, 1u, 62);
    v42 = v44;
    v28 = v26;
    v30 = (int *)(v26 + 8);
    v29 = *(void **)v26;
    v31 = *(_DWORD *)v26 == v26 + 8;
    if ( *(_DWORD *)v26 == v26 + 8 )
    {
      v26 = *v30;
      v24 = (int)v44;
      v32 = v30[2];
      v29 = (void *)v30[3];
      v27 = v30[1];
    }
    else
    {
      v32 = *(_DWORD *)(v26 + 8);
      v42 = *(void **)v26;
    }
    if ( v31 )
    {
      *(_DWORD *)v24 = v26;
      *(_DWORD *)(v24 + 4) = v27;
      *(_DWORD *)(v24 + 8) = v32;
      *(_DWORD *)(v24 + 12) = v29;
    }
    else
    {
      v44[0] = v32;
    }
    v33 = *(_DWORD *)(v28 + 4);
    *(_BYTE *)(v28 + 8) = 0;
    v43 = v33;
    *(_DWORD *)v28 = v30;
    v34 = ptr;
    *(_DWORD *)(v28 + 4) = 0;
    if ( v34 != v49 )
      sub_339E64(v34);
    if ( v45[0] != v46 )
      sub_339E64(v45[0]);
    for ( j = *(_DWORD **)(dword_487D2C + 36); j; j = (_DWORD *)*j )
    {
      v36 = j[33];
      v40[0] = j;
      (*(void (__fastcall **)(_DWORD *, void *, int, int, int (__fastcall *)(int, int, _DWORD *), _DWORD *, int, int (__fastcall *)(const char *, unsigned __int8 *)))(*(_DWORD *)(v36 + 40) + 44))(
        j,
        v42,
        a3,
        1,
        sub_9D7DC,
        v40,
        1,
        sub_9D30C);
    }
    if ( v42 != v44 )
      sub_339E64(v42);
  }
}
