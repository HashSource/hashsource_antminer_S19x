char *__fastcall sub_3C5B8(int a1, const char *a2, int a3)
{
  size_t v6; // r5
  int v7; // r0
  char *result; // r0
  char *v9; // r2
  int v10; // r3
  int v11; // t1
  bool v12; // zf
  int v13; // r0
  int v14; // r0
  FILE *v15; // r9
  size_t v16; // r0
  int v17; // r0
  int v18; // r7
  int v19; // r0
  FILE *v20; // r10
  size_t v21; // r0
  int v22; // r0
  int v23; // r3

  v6 = strlen(&ptr);
  if ( v6 + strlen(a2) + 1 >= 0x800 )
  {
    if ( byte_5C0EFC )
    {
      syslog(a1 | 0x80, "%s", &ptr);
      v7 = dword_4B99B8;
      if ( !dword_4B99B8 )
      {
        v7 = sub_7C918("bmminer_miner");
        dword_4B99B8 = v7;
      }
      sub_7E7C0(v7, "logging.c", 9, "_applawlog", 10);
    }
    else
    {
      v19 = fileno((FILE *)stderr);
      if ( !isatty(v19) )
      {
        fputs(&ptr, (FILE *)stderr);
        fflush((FILE *)stderr);
      }
      if ( byte_4B908C )
      {
        v20 = (FILE *)dword_4B9090;
        if ( dword_4B9090 || (v20 = fopen(byte_4B90B4, modes), (dword_4B9090 = (int)v20) != 0) )
        {
          v21 = strlen(&ptr);
          fwrite(&ptr, v21, 1u, v20);
          fflush((FILE *)dword_4B9090);
        }
      }
      v22 = dword_4B99B8;
      if ( !dword_4B99B8 )
      {
        v22 = sub_7C918("bmminer_miner");
        dword_4B99B8 = v22;
      }
      sub_7E7C0(v22, "logging.c", 9, "_applawlog", 10);
      if ( a1 == 3 )
        v23 = 0;
      else
        v23 = byte_5BFE48 & 1;
      if ( !v23 )
        sub_3C210("", &ptr, a3);
    }
    ptr = 0;
  }
  result = strcat(&ptr, a2);
  v9 = &ptr;
  while ( 1 )
  {
    v11 = (unsigned __int8)*v9++;
    v10 = v11;
    v12 = v11 == 10;
    if ( v11 != 10 )
      v12 = v10 == 13;
    if ( v12 )
      break;
    if ( !v10 )
      return result;
  }
  if ( byte_5C0EFC )
  {
    syslog(a1 | 0x80, "%s", &ptr);
    v13 = dword_4B99B8;
    if ( !dword_4B99B8 )
    {
      v13 = sub_7C918("bmminer_miner");
      dword_4B99B8 = v13;
    }
    result = (char *)sub_7E7C0(v13, "logging.c", 9, "_applawlog", 10);
  }
  else
  {
    v14 = fileno((FILE *)stderr);
    if ( !isatty(v14) )
    {
      fputs(&ptr, (FILE *)stderr);
      fflush((FILE *)stderr);
    }
    if ( byte_4B908C )
    {
      v15 = (FILE *)dword_4B9090;
      if ( dword_4B9090 || (v15 = fopen(byte_4B90B4, modes), (dword_4B9090 = (int)v15) != 0) )
      {
        v16 = strlen(&ptr);
        fwrite(&ptr, v16, 1u, v15);
        fflush((FILE *)dword_4B9090);
      }
    }
    v17 = dword_4B99B8;
    if ( !dword_4B99B8 )
    {
      v17 = sub_7C918("bmminer_miner");
      dword_4B99B8 = v17;
    }
    result = (char *)sub_7E7C0(v17, "logging.c", 9, "_applawlog", 10);
    if ( a1 == 3 )
      v18 = 0;
    else
      v18 = byte_5BFE48 & 1;
    if ( !v18 )
      result = (char *)sub_3C210("", &ptr, a3);
  }
  ptr = 0;
  return result;
}
