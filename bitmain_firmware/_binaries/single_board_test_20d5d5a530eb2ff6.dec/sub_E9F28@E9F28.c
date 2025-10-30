size_t __fastcall sub_E9F28(_BYTE *a1, const char *a2, unsigned int a3)
{
  int v3; // r4
  const char *v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r3

  if ( a3 <= 1 )
  {
    v5 = 0;
    if ( !a3 )
    {
      v5 = 0;
      return strlen(a2) + v5;
    }
  }
  else
  {
    LOBYTE(v3) = *a2;
    if ( *a2 )
    {
      v4 = a2 + 1;
      v5 = a3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *a1++ = v3;
        a2 = v4;
        if ( v6 == v5 )
          break;
        v3 = *(unsigned __int8 *)v4++;
        if ( !v3 )
        {
          v5 = v6;
          break;
        }
      }
    }
    else
    {
      v5 = *(unsigned __int8 *)a2;
    }
  }
  *a1 = 0;
  return strlen(a2) + v5;
}
