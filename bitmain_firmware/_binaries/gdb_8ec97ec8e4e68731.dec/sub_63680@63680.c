void __fastcall sub_63680(char *a1, int a2, int *a3)
{
  size_t v6; // r0
  void *v7; // r0
  _DWORD *v8; // r0
  size_t v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r12
  void *v13; // r3
  int *v14; // lr
  bool v15; // zf
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // r0
  _BYTE *v19; // r3
  int v20; // r1
  void *ptr; // [sp+0h] [bp-48h] BYREF
  int v22; // [sp+4h] [bp-44h]
  _DWORD v23[4]; // [sp+8h] [bp-40h] BYREF
  void *v24; // [sp+18h] [bp-30h] BYREF
  int v25; // [sp+1Ch] [bp-2Ch]
  _BYTE v26[16]; // [sp+20h] [bp-28h] BYREF
  void *v27; // [sp+30h] [bp-18h] BYREF
  int v28; // [sp+34h] [bp-14h]
  _DWORD v29[4]; // [sp+38h] [bp-10h] BYREF

  if ( !a1 )
    return;
  ptr = v23;
  v6 = strlen(a1);
  v7 = sub_63198(&ptr, a1, (int)&a1[v6]);
  if ( a2 )
  {
    v24 = v26;
    sub_63198(&v24, ptr, (int)ptr + v22);
    if ( v25 == 0x7FFFFFFF )
      sub_33D184("basic_string::append");
    sub_33C320(&v24, &word_3E1F84, 1);
    v9 = strlen((const char *)a3);
    if ( 0x7FFFFFFF - v25 < v9 )
      sub_33D184("basic_string::append");
    v10 = sub_33C320(&v24, a3, v9);
    v27 = v29;
    v12 = v10;
    v14 = (int *)(v10 + 8);
    v13 = *(void **)v10;
    v15 = *(_DWORD *)v10 == v10 + 8;
    if ( *(_DWORD *)v10 == v10 + 8 )
    {
      v10 = *v14;
      a3 = v29;
      v11 = v14[1];
      v16 = v14[2];
      v13 = (void *)v14[3];
    }
    else
    {
      v16 = *(_DWORD *)(v10 + 8);
      v27 = *(void **)v10;
    }
    if ( v15 )
    {
      *a3 = v10;
      a3[1] = v11;
      a3[2] = v16;
      a3[3] = (int)v13;
    }
    else
    {
      v29[0] = v16;
    }
    v17 = *(_DWORD *)(v12 + 4);
    *(_BYTE *)(v12 + 8) = 0;
    v28 = v17;
    *(_DWORD *)v12 = v14;
    v18 = v27;
    v19 = ptr;
    *(_DWORD *)(v12 + 4) = 0;
    if ( v18 == v29 )
    {
      sub_33B48C(&ptr, &v27);
      v19 = v27;
      goto LABEL_20;
    }
    if ( v19 == (_BYTE *)v23 )
    {
      ptr = v18;
      v22 = v28;
      v23[0] = v29[0];
    }
    else
    {
      ptr = v18;
      v22 = v28;
      v20 = v23[0];
      v23[0] = v29[0];
      if ( v19 )
      {
        v27 = v19;
        v29[0] = v20;
LABEL_20:
        v28 = 0;
        *v19 = 0;
        if ( v27 != v29 )
          sub_339E64(v27);
        v7 = v24;
        if ( v24 != v26 )
          sub_339E64(v24);
        goto LABEL_3;
      }
    }
    v27 = v29;
    v19 = v29;
    goto LABEL_20;
  }
LABEL_3:
  if ( dword_474870 )
  {
    v8 = (_DWORD *)sub_242F8C(v7);
    sub_2594B0(*v8, "cli=%s run=%s\n", a1, (const char *)ptr);
  }
  sub_2435B0(ptr, 0);
  if ( ptr != v23 )
    sub_339E64(ptr);
}
