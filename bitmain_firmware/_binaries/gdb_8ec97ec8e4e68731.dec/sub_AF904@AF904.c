char *__fastcall sub_AF904(char *result, char *a2)
{
  char *v2; // r4
  char *v4; // r5
  size_t v5; // r6
  int v6; // r9
  int v7; // r8

  if ( result != a2 )
  {
    v2 = result + 8;
    if ( result + 8 != a2 )
    {
      v4 = result;
      v5 = 8;
      do
      {
        if ( sub_A3BBC((int)v2, (int)v4) )
        {
          result = &v2[8 - v5];
          v6 = *(_DWORD *)&v4[v5];
          v7 = *((_DWORD *)v2 + 1);
          if ( v4 != v2 )
            result = (char *)memmove(result, v4, v5);
          *(_DWORD *)v4 = v6;
          *((_DWORD *)v4 + 1) = v7;
        }
        else
        {
          result = (char *)sub_A3C08(v2);
        }
        v2 += 8;
        v5 += 8;
      }
      while ( a2 != v2 );
    }
  }
  return result;
}
