char *__fastcall sub_10814(char *result)
{
  char *v1; // r3
  const char *v2; // r3
  char *s; // [sp+4h] [bp-20h]
  int v4; // [sp+Ch] [bp-18h]
  char *v5; // [sp+10h] [bp-14h]
  char *v6; // [sp+14h] [bp-10h]
  char *v7; // [sp+18h] [bp-Ch]
  char *v8; // [sp+1Ch] [bp-8h]

  for ( s = result; s; s = v8 )
  {
    result = strchr(s, 124);
    v8 = result;
    if ( result )
    {
      v8 = result + 1;
      *result = 0;
    }
    if ( *s )
    {
      v7 = s;
      v4 = 0;
      while ( v7 )
      {
        result = strchr(v7, 44);
        v6 = result;
        if ( result )
        {
          v6 = result + 1;
          *result = 0;
        }
        if ( *v7 )
        {
          v5 = strchr(v7, 61);
          if ( v5 )
          {
            v1 = v5++;
            *v1 = 0;
          }
          if ( !v4 )
          {
            if ( v5 && ((*_ctype_b_loc())[(unsigned __int8)*v5] & 0x800) != 0 )
              v2 = v5;
            else
              v2 = (const char *)&unk_1114C;
            printf("[%s%s] =>\n(\n", v7, v2);
          }
          if ( v5 )
            result = (char *)printf("   [%s] => %s\n", v7, v5);
          else
            result = (char *)printf("   [%d] => %s\n", v4, v7);
        }
        v7 = v6;
        ++v4;
      }
      if ( v4 > 0 )
        result = (char *)puts(")");
    }
  }
  return result;
}
