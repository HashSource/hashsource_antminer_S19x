void sub_21564()
{
  _DWORD *v0; // r6
  size_t v1; // r0
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r12
  _DWORD *v5; // r3
  _DWORD *v6; // lr
  bool v7; // zf
  int v8; // r2
  char *v9; // r0
  _DWORD *v10; // [sp+0h] [bp-30h]
  _DWORD v11[4]; // [sp+8h] [bp-28h] BYREF
  void *ptr[2]; // [sp+18h] [bp-18h] BYREF
  char v13[16]; // [sp+20h] [bp-10h] BYREF

  strcpy(v13, "reg-names-");
  ptr[0] = v13;
  ptr[1] = (void *)10;
  v1 = strlen((const char *)dword_47150C);
  if ( v1 > 0x7FFFFFF5 )
    sub_33D184("basic_string::append");
  v2 = (_DWORD *)sub_33C320(ptr, dword_47150C, v1);
  v10 = v11;
  v4 = v2;
  v6 = v2 + 2;
  v5 = (_DWORD *)*v2;
  v7 = *v2 == (_DWORD)(v2 + 2);
  if ( (_DWORD *)*v2 == v2 + 2 )
  {
    v2 = (_DWORD *)*v6;
    v0 = v11;
    v8 = v6[2];
    v5 = (_DWORD *)v6[3];
    v3 = v6[1];
  }
  else
  {
    v8 = v2[2];
    v10 = (_DWORD *)*v2;
  }
  if ( v7 )
  {
    *v0 = v2;
    v0[1] = v3;
    v0[2] = v8;
    v0[3] = v5;
  }
  else
  {
    v11[0] = v8;
  }
  *((_BYTE *)v4 + 8) = 0;
  *v4 = v6;
  v9 = (char *)ptr[0];
  v4[1] = 0;
  if ( v9 != v13 )
    sub_339E64(v9);
  sub_10C124(v10);
  if ( v10 != v11 )
    sub_339E64(v10);
}
