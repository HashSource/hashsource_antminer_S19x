int __fastcall sub_1008BC(char *a1)
{
  int v1; // r4
  char **v3; // r0
  int v4; // r4
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // [sp+Ch] [bp-158h]
  void *v11; // [sp+18h] [bp-14Ch] BYREF
  char v12; // [sp+20h] [bp-144h] BYREF
  void *ptr; // [sp+30h] [bp-134h] BYREF
  char v14; // [sp+38h] [bp-12Ch] BYREF
  struct sigaction v15; // [sp+48h] [bp-11Ch] BYREF
  struct sigaction act; // [sp+D4h] [bp-90h] BYREF

  v9 = 0;
  if ( dword_46D420 == -1 )
  {
    dword_46D420 = sub_258A4C(0);
    if ( !dword_46D420 )
      dword_46D418 = 0;
  }
  if ( !dword_46D424
    || (v15.sa_handler = (__sighandler_t)sub_FE4B8,
        sigemptyset(&v15.sa_mask),
        v15.sa_flags = 0x8000000,
        sigaction(11, &v15, &act),
        (v1 = _sigsetjmp((struct __jmp_buf_tag *)&unk_47B018, 1)) == 0) )
  {
    v1 = 0;
    v9 = sub_2A7DE8(0, a1);
  }
  if ( !dword_46D424 )
    return v9;
  sigaction(11, &act, 0);
  if ( !v1 )
    return v9;
  if ( !dword_47B1AC )
  {
    sub_931D8((char **)&v11, "unable to demangle '%s' (demangler failed with signal %d)", a1, v1);
    v3 = sub_931D8((char **)&ptr, "%s:%d: %s: %s", "cp-support.c", 1582, "demangler-warning", (const char *)v11);
    v4 = dword_46DC04;
    v5 = sub_22F048(v3);
    v6 = sub_25A6C8(v5);
    if ( dword_46D420 )
    {
      v7 = (_DWORD *)sub_242FB4(v6);
      sub_2594B0(*v7, "%s\nAttempting to dump core.\n", (const char *)ptr);
    }
    else
    {
      sub_2594E0(ptr);
    }
    v8 = sub_25C41C((int)"cp-support.c", 1596);
    dword_47B1AC = 1;
    if ( v4 == 1 )
    {
      sub_22F048(v8);
    }
    else if ( v4 )
    {
      if ( v4 == 2 )
        sub_22EFF4(v8);
    }
    else
    {
      sub_22EF7C(v8);
    }
    if ( ptr != &v14 )
      sub_339E64(ptr);
    if ( v11 != &v12 )
      sub_339E64(v11);
  }
  return 0;
}
