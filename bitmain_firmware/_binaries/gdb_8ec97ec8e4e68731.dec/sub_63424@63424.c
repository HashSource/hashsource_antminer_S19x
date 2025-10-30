void __fastcall sub_63424(char *a1, int *a2, int a3)
{
  size_t v6; // r0
  size_t v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r12
  void *v11; // r3
  int *v12; // lr
  bool v13; // zf
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r3
  int v18; // r1
  void *ptr; // [sp+0h] [bp-4Ch] BYREF
  int v20; // [sp+4h] [bp-48h]
  _DWORD v21[4]; // [sp+8h] [bp-44h] BYREF
  void *v22; // [sp+18h] [bp-34h] BYREF
  int v23; // [sp+1Ch] [bp-30h]
  _BYTE v24[16]; // [sp+20h] [bp-2Ch] BYREF
  void *v25; // [sp+30h] [bp-1Ch] BYREF
  int v26; // [sp+34h] [bp-18h]
  _DWORD v27[4]; // [sp+38h] [bp-14h] BYREF

  ptr = v21;
  v6 = strlen(a1);
  sub_63198(&ptr, a1, (int)&a1[v6]);
  if ( !a3 )
    goto LABEL_2;
  v22 = v24;
  sub_63198(&v22, ptr, (int)ptr + v20);
  if ( v23 == 0x7FFFFFFF )
    sub_33D184("basic_string::append");
  sub_33C320(&v22, &word_3E1F84, 1);
  v7 = strlen((const char *)*a2);
  if ( 0x7FFFFFFF - v23 < v7 )
    sub_33D184("basic_string::append");
  v8 = sub_33C320(&v22, *a2, v7);
  v25 = v27;
  v10 = v8;
  v12 = (int *)(v8 + 8);
  v11 = *(void **)v8;
  v13 = *(_DWORD *)v8 == v8 + 8;
  if ( *(_DWORD *)v8 == v8 + 8 )
  {
    v8 = *v12;
    a2 = v27;
    v9 = v12[1];
    v14 = v12[2];
    v11 = (void *)v12[3];
  }
  else
  {
    v14 = *(_DWORD *)(v8 + 8);
    v25 = *(void **)v8;
  }
  if ( v13 )
  {
    *a2 = v8;
    a2[1] = v9;
    a2[2] = v14;
    a2[3] = (int)v11;
  }
  else
  {
    v27[0] = v14;
  }
  v15 = *(_DWORD *)(v10 + 4);
  *(_BYTE *)(v10 + 8) = 0;
  v26 = v15;
  *(_DWORD *)v10 = v12;
  v16 = v25;
  v17 = ptr;
  *(_DWORD *)(v10 + 4) = 0;
  if ( v16 == v27 )
  {
    sub_33B48C(&ptr, &v25);
    v17 = v25;
    goto LABEL_19;
  }
  if ( v17 == v21 )
  {
    ptr = v16;
    v20 = v26;
    v21[0] = v27[0];
    goto LABEL_26;
  }
  ptr = v16;
  v20 = v26;
  v18 = v21[0];
  v21[0] = v27[0];
  if ( !v17 )
  {
LABEL_26:
    v25 = v27;
    v17 = v27;
    goto LABEL_19;
  }
  v25 = v17;
  v27[0] = v18;
LABEL_19:
  v26 = 0;
  *(_BYTE *)v17 = 0;
  if ( v25 != v27 )
    sub_339E64(v25);
  if ( v22 != v24 )
    sub_339E64(v22);
LABEL_2:
  if ( dword_474864 && off_489AF8() )
  {
    if ( v20 == 0x7FFFFFFF )
      sub_33D184("basic_string::append");
    sub_33C320(&ptr, &unk_35AF90, 1);
  }
  sub_2435B0(ptr, 0);
  if ( ptr != v21 )
    sub_339E64(ptr);
}
