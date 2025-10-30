void __fastcall __noreturn sub_2446B8(int *a1, int a2)
{
  int v4; // r6
  int v5; // r6
  void *v6; // r5
  void *v7; // r5
  void *v8; // r7
  const char *v9; // r8
  _DWORD *v10; // r2
  int v11; // r1
  void *v12; // r5
  void *v13; // r0
  __pid_t v14; // r0
  int v15; // r9
  int *v16; // r8
  int v17; // r0
  char *v18; // r5
  char *v19; // r8
  char *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  _DWORD v25[2]; // [sp+8h] [bp-24h] BYREF
  char *old; // [sp+10h] [bp-1Ch] BYREF
  char v27; // [sp+18h] [bp-14h] BYREF

  v4 = dword_487668;
  sub_22EFF4();
  dword_487668 = dword_48768C;
  sub_154954();
  dword_487668 = v4;
  if ( a1 )
  {
    v5 = *a1;
  }
  else
  {
    v5 = dword_487A68;
    if ( dword_487A68 )
      v5 = dword_46D9B0;
  }
  v25[1] = a2;
  v25[0] = 0;
  v6 = sub_92E28();
  sub_24B39C(v6);
  sub_183B38((int (__fastcall *)(int, int))sub_242E1C, (int)v25);
  sub_92E40((int)v6);
  v7 = sub_92E28();
  sub_231D7C();
  sub_92E40((int)v7);
  v8 = sub_92E28();
  if ( !dword_48A550 || (v9 = (const char *)dword_48A4F4) == 0 || (v10 = (_DWORD *)dword_48769C) == 0 )
  {
LABEL_10:
    sub_92E40((int)v8);
    v12 = sub_92E28();
    v13 = sub_92614();
    sub_92630(v13);
    sub_92E40((int)v12);
    exit(v5);
  }
  v11 = dword_487A50;
  while ( v11 || !sub_242EE0((int)v10) )
  {
    v10 = (_DWORD *)*v10;
    if ( !v10 )
      goto LABEL_10;
  }
  v14 = getpid();
  sub_931D8(&old, "%s-gdb%ld~", v9, v14);
  v15 = rename((const char *)dword_48A4F4, old);
  v16 = _errno_location();
  v17 = *v16;
  if ( ((*v16 != 2) & ((unsigned int)v15 >> 31)) != 0 )
  {
    v18 = (char *)dword_48A4F4;
    v19 = old;
    v20 = sub_6FF98(v17);
  }
  else
  {
    if ( v15 >= 0 )
    {
      v21 = sub_29ADEC(dword_48A524, old);
      if ( sub_297FE4(v21) )
        sub_29AB6C(old, dword_490160);
    }
    else
    {
      if ( v17 != 2 )
      {
        v23 = sub_94700(
                (int)"top.c",
                1139,
                "%s: Assertion `%s' failed.",
                "void gdb_safe_append_history()",
                "saved_errno == ENOENT");
        v24 = sub_339EF8(v23);
        sub_338FFC(v24);
      }
      sub_29AE00(old);
    }
    if ( ((*v16 != 17) & ((unsigned int)rename(old, (const char *)dword_48A4F4) >> 31)) == 0 )
      goto LABEL_19;
    v22 = *v16;
    v19 = (char *)dword_48A4F4;
    v18 = old;
    v20 = sub_6FF98(v22);
  }
  sub_946B0("Could not rename %s to %s: %s", v18, v19, v20);
LABEL_19:
  if ( old != &v27 )
    sub_339E64(old);
  goto LABEL_10;
}
