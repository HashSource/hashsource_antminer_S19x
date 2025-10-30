size_t __fastcall sub_19254(int a1, char *s)
{
  size_t result; // r0
  char *v4; // r3
  unsigned int v5; // r2
  int v6; // r2

  if ( *s == 34 )
  {
    v4 = s;
    for ( result = 0; ; ++result )
    {
      v5 = (unsigned __int8)v4[1];
      if ( v5 == 39 )
        goto LABEL_2;
      if ( v5 <= 0x27 )
        break;
      if ( v5 == 44 )
        goto LABEL_2;
      if ( v5 != 92 )
        goto LABEL_18;
      v6 = (unsigned __int8)v4[2];
      v4 += 2;
      if ( v6 != 92 )
        goto LABEL_2;
LABEL_11:
      if ( a1 )
        *(_BYTE *)(a1 + result) = *v4;
    }
    if ( v5 == 34 )
    {
      if ( a1 )
        *(_BYTE *)(a1 + result) = 0;
      return result;
    }
LABEL_18:
    ++v4;
    goto LABEL_11;
  }
LABEL_2:
  if ( a1 )
    return stpcpy(a1) - a1;
  else
    return strlen(s);
}
