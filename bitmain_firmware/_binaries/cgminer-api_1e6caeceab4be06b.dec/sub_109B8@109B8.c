char *__fastcall sub_109B8(char *result)
{
  const char *v1; // r4
  const char *v2; // r7
  int v3; // r6
  const char *v4; // r5
  char *v5; // r0
  char *v6; // r11
  char *v7; // r2
  const char *v8; // r1
  char *v9; // r0
  const char *v10; // r2

  v1 = result;
  if ( !result )
    return result;
  do
  {
    result = strchr(v1, 124);
    if ( result )
    {
      v2 = result + 1;
      *result = 0;
      if ( !*v1 )
      {
        v1 = result + 1;
        continue;
      }
    }
    else
    {
      if ( !*v1 )
        return result;
      v2 = 0;
    }
    v3 = 0;
    while ( 1 )
    {
      v9 = strchr(v1, 44);
      if ( !v9 )
        break;
      v4 = v9 + 1;
      *v9 = 0;
      if ( !*v1 )
      {
        v1 = v9 + 1;
        goto LABEL_21;
      }
LABEL_13:
      v5 = strchr(v1, 61);
      v6 = v5;
      if ( !v5 )
      {
        if ( !v3 )
LABEL_29:
          printf("[%s%s] =>\n(\n", v1, "");
LABEL_27:
        v10 = v1;
        v1 = v4;
        printf("   [%d] => %s\n", v3, v10);
        goto LABEL_21;
      }
      *v5 = 0;
      if ( v3 )
      {
        if ( v5 == (char *)-1 )
          goto LABEL_27;
      }
      else
      {
        if ( v5 == (char *)-1 )
          goto LABEL_29;
        if ( ((*_ctype_b_loc())[(unsigned __int8)v5[1]] & 0x800) != 0 )
          v7 = v6 + 1;
        else
          v7 = "";
        printf("[%s%s] =>\n(\n", v1, v7);
      }
      v8 = v1;
      v1 = v4;
      printf("   [%s] => %s\n", v8, v6 + 1);
LABEL_21:
      ++v3;
      if ( !v4 )
        goto LABEL_25;
    }
    if ( *v1 )
    {
      v4 = 0;
      goto LABEL_13;
    }
LABEL_25:
    v1 = v2;
    result = (char *)puts(")");
  }
  while ( v2 );
  return result;
}
