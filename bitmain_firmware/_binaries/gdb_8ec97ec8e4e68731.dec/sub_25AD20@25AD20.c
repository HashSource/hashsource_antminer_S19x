int __fastcall sub_25AD20(const char *a1)
{
  int v2; // r4
  int v3; // r0
  const char *v4; // r2
  int v5; // r3
  int v6; // t1
  int v8; // r0
  unsigned __int8 *v9; // r6
  int v10; // t1

  v2 = *(unsigned __int8 *)a1;
  if ( v2 == 48 )
  {
    if ( tolower(*((unsigned __int8 *)a1 + 1)) == 120 )
    {
      v8 = *((unsigned __int8 *)a1 + 2);
      if ( !a1[2] )
        return *((unsigned __int8 *)a1 + 2);
      v9 = (unsigned __int8 *)(a1 + 2);
      v2 = 0;
      do
      {
        if ( (unsigned int)(v8 - 48) <= 9 )
        {
          v2 = v8 + 16 * v2 - 48;
        }
        else
        {
          if ( (v8 & 0xFFFFFFDF) - 65 > 5 )
            sub_946E0("invalid hex \"%s\"", a1);
          v2 = tolower(v8) + 16 * v2 - 87;
        }
        v10 = *++v9;
        v8 = v10;
      }
      while ( v10 );
      return v2;
    }
    v3 = 48;
  }
  else
  {
    if ( !*a1 )
      return v2;
    v3 = *(unsigned __int8 *)a1;
    if ( (unsigned int)(v2 - 48) > 9 )
LABEL_18:
      sub_946E0("invalid decimal \"%s\"", a1);
  }
  v4 = a1;
  v2 = 0;
  while ( 1 )
  {
    v6 = *(unsigned __int8 *)++v4;
    v5 = v6;
    v2 = v3 + 10 * v2 - 48;
    if ( !v6 )
      return v2;
    v3 = v5;
    if ( (unsigned int)(v5 - 48) > 9 )
      goto LABEL_18;
  }
}
