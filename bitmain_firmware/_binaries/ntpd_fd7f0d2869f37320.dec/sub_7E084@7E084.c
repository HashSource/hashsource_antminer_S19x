unsigned int __fastcall sub_7E084(const char *a1, unsigned int a2, _DWORD *a3, const char **a4, unsigned int a5)
{
  size_t v6; // r0
  unsigned int v7; // r3
  size_t v8; // r7
  int v9; // r2
  unsigned int result; // r0
  _BOOL4 v11; // r3
  unsigned int v12; // r9
  unsigned int v13; // r4
  const char **v14; // r11
  const char *v15; // r5
  const char *v16; // t1
  char *v17; // lr
  char *endptr; // [sp+10h] [bp-Ch] BYREF

  v6 = strlen(a1);
  v7 = *(unsigned __int8 *)a1;
  v8 = v6;
  if ( v7 > 0x7F )
    goto LABEL_9;
  v9 = dword_A0784[v7];
  if ( (v9 & 0x30000) != 0 )
  {
    result = strtoul(a1, &endptr, 0);
    v11 = a5 > result;
    if ( *endptr )
      v11 = 0;
    if ( !v11 )
    {
      dword_1082E4 = (int)off_B9524;
      option_usage_fp = (int)stderr;
      sub_7DD4C(a2, a3, a4, a5);
      return a5;
    }
    return result;
  }
  if ( (v9 & 0x8000) == 0 || a1[2] )
  {
LABEL_9:
    if ( a5 )
    {
      v12 = a5;
      v13 = 0;
      v14 = a4 - 1;
      do
      {
        v16 = v14[1];
        ++v14;
        v15 = v16;
        if ( !strncmp(v16, a1, v8) )
        {
          if ( !v15[v8] )
            return v13;
          if ( v12 == a5 )
            v12 = v13;
          else
            v12 = -1;
        }
        ++v13;
      }
      while ( v13 != a5 );
      if ( a5 > v12 )
        return v12;
      if ( v12 != a5 )
      {
        v17 = off_B94A0;
        goto LABEL_21;
      }
    }
  }
  else if ( v7 == 126 )
  {
    if ( a1[1] == 48 )
      return a5 - 1;
  }
  else if ( v7 == 45 && a1[1] == 49 )
  {
    return a5 - 1;
  }
  v17 = off_B94FC;
LABEL_21:
  dword_1082E4 = (int)v17;
  option_usage_fp = (int)stderr;
  sub_7DD4C(a2, a3, a4, a5);
  return a5;
}
