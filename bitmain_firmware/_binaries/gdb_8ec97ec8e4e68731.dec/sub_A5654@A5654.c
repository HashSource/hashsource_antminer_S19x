void __fastcall sub_A5654(const char *a1, int a2, char *a3, _DWORD *a4)
{
  int *v4; // r9
  int *v5; // r10
  size_t v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r12
  void *v14; // r3
  int *v15; // lr
  bool v16; // zf
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r12
  void *v22; // r3
  int *v23; // lr
  bool v24; // zf
  int v25; // r2
  int v26; // r2
  _DWORD *v27; // r0
  void *v28; // r3
  int v29; // r1
  void *v30; // r0
  int v31[2]; // [sp+8h] [bp-50h] BYREF
  void *v32; // [sp+10h] [bp-48h]
  int v33; // [sp+14h] [bp-44h]
  _DWORD v34[4]; // [sp+18h] [bp-40h] BYREF
  void *v35[2]; // [sp+28h] [bp-30h] BYREF
  _BYTE v36[16]; // [sp+30h] [bp-28h] BYREF
  void *ptr; // [sp+40h] [bp-18h] BYREF
  int v38; // [sp+44h] [bp-14h]
  _DWORD v39[4]; // [sp+48h] [bp-10h] BYREF

  v35[0] = v36;
  sub_9D8E0(v35, &word_364FA4, (int)&word_364FA4 + 1);
  v10 = strlen(a1);
  if ( 0x7FFFFFFF - (unsigned int)v35[1] < v10 )
    sub_33D184("basic_string::append");
  v11 = sub_33C320(v35, a1, v10);
  ptr = v39;
  v13 = v11;
  v15 = (int *)(v11 + 8);
  v14 = *(void **)v11;
  v16 = *(_DWORD *)v11 == v11 + 8;
  if ( *(_DWORD *)v11 == v11 + 8 )
  {
    v11 = *v15;
    v4 = v39;
    v12 = v15[1];
    v17 = v15[2];
    v14 = (void *)v15[3];
  }
  else
  {
    v17 = *(_DWORD *)(v11 + 8);
    ptr = *(void **)v11;
  }
  if ( v16 )
  {
    *v4 = v11;
    v4[1] = v12;
    v4[2] = v17;
    v4[3] = (int)v14;
  }
  else
  {
    v39[0] = v17;
  }
  v18 = *(_DWORD *)(v13 + 4);
  *(_BYTE *)(v13 + 8) = 0;
  v38 = v18;
  *(_DWORD *)v13 = v15;
  *(_DWORD *)(v13 + 4) = 0;
  v19 = sub_33BA6C((int)&ptr, v38, 0, 1u, 62);
  v32 = v34;
  v21 = v19;
  v23 = (int *)(v19 + 8);
  v22 = *(void **)v19;
  v24 = *(_DWORD *)v19 == v19 + 8;
  if ( *(_DWORD *)v19 == v19 + 8 )
  {
    v19 = *v23;
    v5 = v34;
    v25 = v23[2];
    v22 = (void *)v23[3];
    v20 = v23[1];
  }
  else
  {
    v25 = *(_DWORD *)(v19 + 8);
    v32 = *(void **)v19;
  }
  if ( v24 )
  {
    *v5 = v19;
    v5[1] = v20;
    v5[2] = v25;
    v5[3] = (int)v22;
  }
  else
  {
    v34[0] = v25;
  }
  v26 = *(_DWORD *)(v21 + 4);
  *(_BYTE *)(v21 + 8) = 0;
  v33 = v26;
  *(_DWORD *)v21 = v23;
  v27 = ptr;
  *(_DWORD *)(v21 + 4) = 0;
  if ( v27 != v39 )
    sub_339E64(v27);
  if ( v35[0] != v36 )
    sub_339E64(v35[0]);
  if ( !a4 )
  {
    sub_94700(
      (int)"ada-lang.c",
      5922,
      "%s: Assertion `%s' failed.",
      "void ada_lookup_encoded_symbol(const char*, const block*, domain_enum, block_symbol*)",
      "info != NULL");
    v30 = v32;
    if ( v32 != v34 )
      sub_339E64(v32);
    sub_338FFC(v30);
  }
  sub_A55C0(v31, (char *)v32, a2, a3, 0);
  v28 = v32;
  v29 = v31[1];
  v16 = v32 == v34;
  *a4 = v31[0];
  a4[1] = v29;
  if ( !v16 )
    sub_339E64(v28);
}
