unsigned int __fastcall sub_7CC34(const char *a1, unsigned int a2, _DWORD *a3, const char **a4, unsigned int a5)
{
  size_t v6; // r0
  unsigned int v7; // r3
  size_t v8; // r7
  int v9; // r2
  unsigned int v10; // r9
  unsigned int v11; // r4
  const char **v12; // r11
  const char *v13; // r5
  const char *v14; // t1
  char *v15; // lr
  unsigned int v17; // r0
  _BOOL4 v18; // r3
  char *endptr; // [sp+10h] [bp-Ch] BYREF

  v6 = strlen(a1);
  v7 = *(unsigned __int8 *)a1;
  v8 = v6;
  if ( v7 > 0x7F )
    goto LABEL_5;
  v9 = dword_9F184[v7];
  if ( (v9 & 0x30000) == 0 )
  {
    if ( (v9 & 0x8000) != 0 && !a1[2] )
    {
      if ( v7 == 126 )
      {
        if ( a1[1] != 48 )
          goto LABEL_25;
      }
      else if ( v7 != 45 || a1[1] != 49 )
      {
        goto LABEL_25;
      }
      return a5 - 1;
    }
LABEL_5:
    if ( a5 )
    {
      v10 = a5;
      v11 = 0;
      v12 = a4 - 1;
      do
      {
        v14 = v12[1];
        ++v12;
        v13 = v14;
        if ( !strncmp(v14, a1, v8) )
        {
          if ( !v13[v8] )
            return v11;
          if ( a5 == v10 )
            v10 = v11;
          else
            v10 = -1;
        }
        ++v11;
      }
      while ( a5 != v11 );
      if ( v10 < a5 )
        return v10;
      if ( v10 != a5 )
      {
        v15 = off_B849C[0];
LABEL_17:
        v11 = a5;
        dword_1072C0 = (int)v15;
        option_usage_fp = (int)stderr;
        sub_7C924(a2, a3, a4, a5);
        return v11;
      }
    }
LABEL_25:
    v15 = off_B84F8[0];
    goto LABEL_17;
  }
  v17 = strtoul(a1, &endptr, 0);
  v18 = a5 > v17;
  v11 = v17;
  if ( *endptr )
    v18 = 0;
  if ( !v18 )
  {
    v11 = a5;
    dword_1072C0 = (int)off_B8520[0];
    option_usage_fp = (int)stderr;
    sub_7C924(a2, a3, a4, a5);
  }
  return v11;
}
