FILE *__fastcall sub_46FB0(__int64 a1)
{
  void *v2; // r9
  FILE *v3; // r0
  int v4; // r5
  FILE *v5; // r4
  size_t v6; // r8
  char *v7; // r0
  char *v8; // r3
  size_t v11; // r0
  FILE *stream; // [sp+4h] [bp-404h] BYREF
  _BYTE ptr[1024]; // [sp+8h] [bp-400h] BYREF

  v2 = (void *)sub_93140("/proc/%lld/cmdline", a1);
  sub_967F0((int)&stream, (int)v2, "r");
  v3 = stream;
  if ( stream )
  {
    v4 = 0;
    v5 = 0;
    while ( !feof(v3) )
    {
      v6 = fread(ptr, 1u, 0x400u, stream);
      if ( v6 )
      {
        v5 = (FILE *)sub_93050(v5, v4 + v6 + 1);
        v7 = (char *)v5 + v4;
        v4 += v6;
        memcpy(v7, ptr, v6);
      }
      v3 = stream;
    }
    if ( v5 )
    {
      if ( v4 )
      {
        v8 = &v5[-1]._unused2[39];
        do
        {
          if ( !*++v8 )
            *v8 = 32;
        }
        while ( v8 != (char *)v5 + v4 - 1 );
      }
      *((_BYTE *)&v5->_flags + v4) = 0;
    }
    else
    {
      v5 = (FILE *)sub_93028(32);
      LOBYTE(v5->_flags) = 91;
      sub_46EA4((char *)&v5->_flags + 1, 0x1Fu, a1);
      v11 = strlen((const char *)v5);
      if ( v11 <= 0x1E )
        *(_WORD *)((char *)&v5->_flags + v11) = 93;
    }
    if ( !v2 )
      goto LABEL_16;
  }
  else
  {
    if ( !v2 )
      return 0;
    v5 = stream;
  }
  free(v2);
LABEL_16:
  if ( stream )
    fclose(stream);
  return v5;
}
