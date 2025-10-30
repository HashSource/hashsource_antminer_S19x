int __fastcall sub_8CFAC(const char *a1)
{
  size_t v4; // [sp+10h] [bp-1Ch]
  int v5; // [sp+14h] [bp-18h]
  int v6; // [sp+18h] [bp-14h]
  int v7; // [sp+1Ch] [bp-10h]
  char *v8; // [sp+20h] [bp-Ch]
  const char *i; // [sp+24h] [bp-8h]

  if ( a1 )
  {
    v8 = (char *)a1;
    for ( i = a1; *i; ++i )
    {
      if ( ((*_ctype_b_loc())[*(unsigned __int8 *)i] & 0x2000) == 0 )
        *v8++ = *i;
    }
    *v8 = 0;
    v4 = strlen(a1);
    v7 = strtol(a1, 0, 10);
    if ( v7 > 0 )
    {
      if ( a1[v4 - 1] == 66 || a1[v4 - 1] == 98 )
      {
        v6 = (unsigned __int8)a1[v4 - 2];
        v5 = 1024;
      }
      else
      {
        v6 = (unsigned __int8)a1[v4 - 1];
        v5 = 1000;
      }
      switch ( v6 )
      {
        case 'G':
        case 'g':
          v7 *= v5 * v5 * v5;
          break;
        case 'K':
        case 'k':
          v7 *= v5;
          break;
        case 'M':
        case 'm':
          v7 *= v5 * v5;
          break;
        default:
          if ( ((*_ctype_b_loc())[v6] & 0x800) == 0 )
            sub_8CD10(2, "src/zc_util.c", 70, "Wrong suffix parsing size in bytes for string [%s], ignoring suffix", a1);
          break;
      }
      return v7;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_8CD10(2, "src/zc_util.c", 27, "astring is null or 0");
    return 0;
  }
}
