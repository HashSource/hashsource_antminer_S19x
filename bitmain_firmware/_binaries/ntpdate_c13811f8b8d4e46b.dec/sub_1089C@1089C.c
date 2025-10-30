int __fastcall sub_1089C(const char *a1, int a2, int a3, const char *a4)
{
  const char *v8; // r11
  struct _IO_FILE *v9; // r9
  const char *v10; // r10
  const char *v11; // r0
  int v12; // r4
  const void **v13; // r5
  const void *v14; // t1
  struct _IO_FILE *v15; // r9
  const char *v16; // r10
  const char *v17; // r0
  int v19; // [sp+20h] [bp-214h] BYREF
  const char *v20; // [sp+24h] [bp-210h] BYREF
  int v21; // [sp+28h] [bp-20Ch] BYREF
  _BYTE v22[512]; // [sp+2Ch] [bp-208h] BYREF

  if ( sub_10AD4(v22, 128, &v19) )
  {
    v15 = stderr;
    v16 = sub_107F8(a3);
    v17 = (const char *)sub_1103C(isc_msgcat, 1, 101, "failed");
    _fprintf_chk(v15, 1, "%s:%d: %s(%s) %s%s\n", a1, a2, v16, a4, v17, ".");
  }
  else
  {
    if ( v19 <= 0 )
      v8 = ".";
    else
      v8 = ", back trace";
    v9 = stderr;
    v10 = sub_107F8(a3);
    v11 = (const char *)sub_1103C(isc_msgcat, 1, 101, "failed");
    _fprintf_chk(v9, 1, "%s:%d: %s(%s) %s%s\n", a1, a2, v10, a4, v11, v8);
    if ( v19 > 0 )
    {
      v12 = 0;
      v13 = (const void **)&v21;
      do
      {
        v14 = v13[1];
        ++v13;
        v20 = 0;
        if ( sub_10C28(v14, &v20, &v21) )
          _fprintf_chk(stderr, 1, "#%d %p in ??\n", v12, *v13);
        else
          _fprintf_chk(stderr, 1, "#%d %p in %s()+0x%lx\n", v12, *v13, v20, v21);
        ++v12;
      }
      while ( v19 > v12 );
    }
  }
  return fflush(stderr);
}
