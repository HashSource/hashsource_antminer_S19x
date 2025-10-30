int __fastcall sub_889F8(int *a1, char *s)
{
  int v3; // r2
  void (*v6)(void); // r3
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0
  const char *v10; // r0

  if ( a1 )
  {
    v3 = a1[3];
    byte_1082E8 = (v3 & 0x200000) != 0;
    if ( (v3 & 0x2000) != 0 )
    {
      v6 = (void (*)(void))a1[22];
      if ( v6 )
      {
        if ( option_xlateable_txt )
        {
          if ( (v3 & 0x30000) == 0x20000 )
            a1[3] = v3 | 0x10000;
          v6();
        }
      }
    }
    if ( (unsigned int)(*a1 - 102400) > 0x10001 )
    {
      fprintf(stderr, off_B9474, s, *a1 >> 12, ((unsigned int)*a1 >> 7) & 0x1F, *a1 & 0x7F);
      if ( *a1 <= (int)&loc_29000 )
        v10 = off_B947C;
      else
        v10 = off_B9470;
      fputs(v10, stderr);
      fwrite("41:0:16\n", 8u, 1u, stderr);
      return -1;
    }
    else if ( a1[7] )
    {
      return 0;
    }
    else
    {
      v7 = strrchr(s, 47);
      if ( v7 )
        a1[7] = (int)(v7 + 1);
      else
        a1[7] = (int)s;
      v8 = getenv("PATH");
      v9 = sub_80E8C(v8, s);
      if ( !v9 )
        v9 = s;
      a1[6] = (int)v9;
      sub_8897C("-_^");
      return 0;
    }
  }
  else
  {
    fputs(off_B946C, stderr);
    return -1;
  }
}
