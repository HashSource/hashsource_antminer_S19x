_DWORD *__fastcall sub_2587C0(_DWORD *a1, char *a2)
{
  int *v2; // r8
  int *v5; // r0
  char *v6; // r7
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r12
  void *v11; // r3
  int *v12; // lr
  bool v13; // zf
  int v14; // r2
  int v15; // r2
  size_t v16; // r2
  _DWORD *v17; // r0
  _DWORD *v18; // r3
  _DWORD *v19; // r3
  int v21; // lr
  int v22; // r12
  int v23; // r2
  void *v24; // [sp+0h] [bp-30h] BYREF
  int v25; // [sp+4h] [bp-2Ch]
  _BYTE v26[16]; // [sp+8h] [bp-28h] BYREF
  void *ptr; // [sp+18h] [bp-18h] BYREF
  int v28; // [sp+1Ch] [bp-14h]
  _DWORD v29[4]; // [sp+20h] [bp-10h] BYREF

  v5 = _errno_location();
  v6 = sub_6FF98(*v5);
  v24 = v26;
  if ( a2 )
    v7 = (int)&a2[strlen(a2)];
  else
    v7 = -1;
  sub_258694(&v24, a2, v7);
  if ( v25 == 2147483646 || v25 == 0x7FFFFFFF )
    sub_33D184("basic_string::append");
  v8 = sub_33C320(&v24, &word_3B6A00, 2);
  ptr = v29;
  v10 = v8;
  v12 = (int *)(v8 + 8);
  v11 = *(void **)v8;
  v13 = *(_DWORD *)v8 == v8 + 8;
  if ( *(_DWORD *)v8 == v8 + 8 )
  {
    v8 = *v12;
    v2 = v29;
    v9 = v12[1];
    v14 = v12[2];
    v11 = (void *)v12[3];
  }
  else
  {
    v14 = *(_DWORD *)(v8 + 8);
    ptr = *(void **)v8;
  }
  if ( v13 )
  {
    *v2 = v8;
    v2[1] = v9;
    v2[2] = v14;
    v2[3] = (int)v11;
  }
  else
  {
    v29[0] = v14;
  }
  v15 = *(_DWORD *)(v10 + 4);
  *(_BYTE *)(v10 + 8) = 0;
  v28 = v15;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)v10 = v12;
  v16 = strlen(v6);
  if ( 0x7FFFFFFF - v28 < v16 )
    sub_33D184("basic_string::append");
  v17 = (_DWORD *)sub_33C320(&ptr, v6, v16);
  *a1 = a1 + 2;
  v18 = v17 + 2;
  if ( (_DWORD *)*v17 == v17 + 2 )
  {
    v21 = v17[3];
    v22 = v17[4];
    v23 = v17[5];
    a1[2] = *v18;
    a1[3] = v21;
    a1[4] = v22;
    a1[5] = v23;
  }
  else
  {
    *a1 = *v17;
    a1[2] = v17[2];
  }
  a1[1] = v17[1];
  *v17 = v18;
  v19 = ptr;
  v17[1] = 0;
  *((_BYTE *)v17 + 8) = 0;
  if ( v19 != v29 )
    sub_339E64(v19);
  if ( v24 != v26 )
    sub_339E64(v24);
  return a1;
}
