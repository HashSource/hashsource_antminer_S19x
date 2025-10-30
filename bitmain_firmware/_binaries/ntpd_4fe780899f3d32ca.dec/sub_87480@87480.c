int __fastcall sub_87480(int *a1, char *s)
{
  int v3; // r2
  char *v6; // r0
  bool v7; // zf
  char *v8; // r0
  char *v9; // r0
  void (*v10)(void); // r3
  const char *v11; // r0

  if ( a1 )
  {
    v3 = a1[3];
    byte_1072C4 = (v3 & 0x200000) != 0;
    if ( (v3 & 0x2000) != 0 )
    {
      v10 = (void (*)(void))a1[22];
      if ( v10 )
      {
        if ( option_xlateable_txt )
        {
          if ( (v3 & 0x30000) == 0x20000 )
            a1[3] = v3 | 0x10000;
          v10();
        }
      }
    }
    if ( (unsigned int)(*a1 - 102400) > 0x10001 )
    {
      fprintf(stderr, off_B8470[0], s, *a1 >> 12, ((unsigned int)*a1 >> 7) & 0x1F, *a1 & 0x7F);
      if ( *a1 <= 167937 )
        v11 = off_B8478[0];
      else
        v11 = off_B846C[0];
      fputs(v11, stderr);
      fwrite("41:0:16\n", 8u, 1u, stderr);
      return -1;
    }
    else if ( a1[7] )
    {
      return 0;
    }
    else
    {
      v6 = strrchr(s, 47);
      v7 = v6 == 0;
      if ( v6 )
        ++v6;
      else
        a1[7] = (int)s;
      if ( !v7 )
        a1[7] = (int)v6;
      v8 = getenv("PATH");
      v9 = sub_7F9CC(v8, s);
      if ( !v9 )
        v9 = s;
      a1[6] = (int)v9;
      sub_87404("-_^");
      return 0;
    }
  }
  else
  {
    fputs(off_B8468[0], stderr);
    return -1;
  }
}
