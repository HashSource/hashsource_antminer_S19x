void __fastcall sub_28C950(char *s)
{
  char *v2; // r0
  char *v3; // r8
  char v4; // r7
  char *v5; // r0
  const char *v6; // r3
  size_t v7; // r0
  const char *v8; // r0

  if ( dword_48AE0C )
    free((void *)dword_48AE0C);
  if ( dword_48AE18 )
    free((void *)dword_48AE18);
  dword_48AE18 = 0;
  dword_48AE0C = 0;
  dword_48AE08 = 0;
  dword_48AE1C = 0;
  dword_48AE20 = 0;
  dword_48AE10 = 0;
  dword_48AE24 = 0;
  if ( s && *s )
  {
    v2 = strrchr(s, 10);
    v3 = v2;
    if ( v2 )
    {
      dword_48AE0C = (int)sub_28C61C(
                            v2 + 1,
                            (size_t *)&dword_48AE24,
                            &dword_48AE20,
                            &dword_48AE1C,
                            (size_t *)&dword_48AE10);
      v4 = v3[1];
      v3[1] = 0;
      v5 = sub_28C61C(s, (size_t *)&dword_48AE28, 0, 0, 0);
      v6 = (const char *)dword_48AE0C;
      dword_48AE18 = (int)v5;
      v3[1] = v4;
      v7 = (size_t)v6;
      if ( v6 )
        v7 = strlen(v6);
      dword_48AE08 = v7;
    }
    else
    {
      v8 = sub_28C61C(s, (size_t *)&dword_48AE24, &dword_48AE20, &dword_48AE1C, (size_t *)&dword_48AE10);
      dword_48AE18 = 0;
      dword_48AE0C = (int)v8;
      if ( v8 )
        v8 = (const char *)strlen(v8);
      dword_48AE08 = (int)v8;
    }
  }
}
