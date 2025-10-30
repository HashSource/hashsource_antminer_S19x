_DWORD *__fastcall sub_FF1F4(_DWORD *a1, char *s, int a3, int a4)
{
  size_t v8; // r8
  void *v9; // r0
  void *v10; // r1
  void *v11; // r2
  void **v12; // r12
  int *v13; // r5
  _DWORD *v14; // r7
  size_t v15; // r0
  int v16; // r3
  _DWORD *v18; // r3
  bool v19; // zf
  int v20; // r2
  void *v21; // r0
  char *sa; // [sp+Ch] [bp-1Ch] BYREF
  void *ptr; // [sp+10h] [bp-18h] BYREF
  int v24; // [sp+14h] [bp-14h]
  _DWORD v25[4]; // [sp+18h] [bp-10h] BYREF

  ptr = v25;
  v24 = 0;
  LOBYTE(v25[0]) = 0;
  v8 = strlen(s);
  v9 = sub_7F64C(&sa, (int)s, 0);
  v13 = (int *)sa;
  if ( sa )
  {
    sub_FF844(sa, *((_DWORD *)sa + 1), a3, a4);
    sub_7F564(&sa, v13[1], 2 * v8);
    if ( !sa )
    {
      sub_94700(
        (int)"cp-support.c",
        526,
        "%s: Assertion `%s' failed.",
        "std::__cxx11::string cp_canonicalize_string_full(const char*, const char* (*)(type*, void*), void*)",
        "us");
      if ( sa )
        free(sa);
      sub_15D38(v13);
      v21 = ptr;
      if ( ptr != v25 )
        sub_339E64(ptr);
      sub_338FFC(v21);
    }
    v15 = strlen(sa);
    sub_33BC54((int)&ptr, 0, v24, sa, v15);
    v16 = sub_33CAA0((int)&ptr, s);
    v14 = a1 + 2;
    v9 = sa;
    if ( !v16 )
    {
      *a1 = v14;
      a1[1] = 0;
      *((_BYTE *)a1 + 8) = 0;
      if ( v9 )
        free(v9);
      goto LABEL_7;
    }
    if ( sa )
      free(sa);
  }
  else
  {
    v14 = a1 + 2;
  }
  v18 = ptr;
  *a1 = v14;
  ptr = v25;
  v19 = v18 == v25;
  if ( v18 == v25 )
    v12 = (void **)v25;
  else
    v11 = (void *)v25[0];
  if ( v18 == v25 )
  {
    v9 = *v12;
    v10 = v12[1];
    v11 = v12[2];
    v18 = v12[3];
  }
  else
  {
    a1[2] = v11;
    *a1 = v18;
  }
  if ( v19 )
  {
    a1[2] = v9;
    v14[2] = v11;
  }
  v20 = v24;
  if ( v19 )
  {
    v14[3] = v18;
    v14[1] = v10;
  }
  v24 = 0;
  a1[1] = v20;
  LOBYTE(v25[0]) = 0;
  if ( !v13 )
    return a1;
LABEL_7:
  sub_7F5D0((int)v13);
  sub_33AC04(v13);
  if ( ptr != v25 )
    sub_339E64(ptr);
  return a1;
}
