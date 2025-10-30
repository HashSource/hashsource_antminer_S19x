_DWORD *__fastcall sub_1F960C(_DWORD *a1, int a2, char *a3, int a4, int a5)
{
  char *v5; // r9
  int v7; // r1
  char *v11; // r0
  char *v12; // r7
  size_t v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r12
  void *v17; // r3
  int *v18; // lr
  bool v19; // zf
  int v20; // r2
  int v21; // r2
  size_t v22; // r2
  _DWORD *v23; // r0
  int v24; // r1
  _DWORD *v25; // r12
  _DWORD *v26; // r3
  _DWORD *v27; // lr
  bool v28; // zf
  int v29; // r2
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  int v32; // r7
  char *v33; // r8
  const char *v34; // r0
  _DWORD *v35; // [sp+8h] [bp-4Ch]
  _DWORD v36[4]; // [sp+10h] [bp-44h] BYREF
  void *v37; // [sp+20h] [bp-34h] BYREF
  int v38; // [sp+24h] [bp-30h]
  _BYTE v39[16]; // [sp+28h] [bp-2Ch] BYREF
  void *ptr; // [sp+38h] [bp-1Ch] BYREF
  int v41; // [sp+3Ch] [bp-18h]
  _DWORD v42[5]; // [sp+40h] [bp-14h] BYREF

  v7 = dword_48970C;
  *a1 = 0;
  a1[1] = 0;
  if ( v7 )
  {
    v32 = *(_DWORD *)sub_242FC8(0);
    v33 = sub_98EEC(a4);
    v5 = sub_C25A8(a4);
    v34 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    sub_2594B0(v32, "rust_lookup_symbol_non_local (%s, %s (scope %s), %s)\n", a3, v33, v5, v34);
  }
  if ( !a3[sub_100308(a3)] )
  {
    v11 = sub_C25A8(a4);
    v12 = v11;
    if ( *v11 )
    {
      v37 = v39;
      v13 = strlen(v11);
      sub_1F955C(&v37, v12, (int)&v12[v13]);
      if ( v38 == 2147483646 || v38 == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      v14 = sub_33C320(&v37, "::", 2);
      ptr = v42;
      v16 = v14;
      v18 = (int *)(v14 + 8);
      v17 = *(void **)v14;
      v19 = *(_DWORD *)v14 == v14 + 8;
      if ( *(_DWORD *)v14 == v14 + 8 )
      {
        v14 = *v18;
        v5 = (char *)v42;
        v15 = v18[1];
        v20 = v18[2];
        v17 = (void *)v18[3];
      }
      else
      {
        v20 = *(_DWORD *)(v14 + 8);
        ptr = *(void **)v14;
      }
      if ( v19 )
      {
        *(_DWORD *)v5 = v14;
        *((_DWORD *)v5 + 1) = v15;
        *((_DWORD *)v5 + 2) = v20;
        *((_DWORD *)v5 + 3) = v17;
        v5 += 16;
      }
      else
      {
        v42[0] = v20;
      }
      v21 = *(_DWORD *)(v16 + 4);
      *(_BYTE *)(v16 + 8) = 0;
      v41 = v21;
      *(_DWORD *)(v16 + 4) = 0;
      *(_DWORD *)v16 = v18;
      v22 = strlen(a3);
      if ( 0x7FFFFFFF - v41 < v22 )
        sub_33D184("basic_string::append");
      v23 = (_DWORD *)sub_33C320(&ptr, a3, v22);
      v35 = v36;
      v25 = v23;
      v27 = v23 + 2;
      v26 = (_DWORD *)*v23;
      v28 = *v23 == (_DWORD)(v23 + 2);
      if ( (_DWORD *)*v23 == v23 + 2 )
      {
        v23 = (_DWORD *)*v27;
        v5 = (char *)v36;
        v29 = v27[2];
        v26 = (_DWORD *)v27[3];
        v24 = v27[1];
      }
      else
      {
        v29 = v23[2];
        v35 = (_DWORD *)*v23;
      }
      if ( v28 )
      {
        *(_DWORD *)v5 = v23;
        *((_DWORD *)v5 + 1) = v24;
        *((_DWORD *)v5 + 2) = v29;
        *((_DWORD *)v5 + 3) = v26;
      }
      else
      {
        v36[0] = v29;
      }
      *((_BYTE *)v25 + 8) = 0;
      *v25 = v27;
      v30 = ptr;
      v25[1] = 0;
      if ( v30 != v42 )
        sub_339E64(v30);
      if ( v37 != v39 )
        sub_339E64(v37);
      sub_21CFB4(a1, v35, a4, a5);
      v31 = v35;
      if ( !*a1 )
      {
        sub_21D720(a1, v35, a4, a5);
        v31 = v35;
      }
      if ( v31 != v36 )
        sub_339E64(v31);
    }
  }
  return a1;
}
