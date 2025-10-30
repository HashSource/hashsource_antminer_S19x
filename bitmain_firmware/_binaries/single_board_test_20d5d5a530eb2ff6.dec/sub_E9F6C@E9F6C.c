size_t __fastcall sub_E9F6C(unsigned __int8 *a1, const char *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r6
  int v4; // r5
  unsigned __int8 *v5; // r3

  v3 = a1;
  if ( a3 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = a1 + 1;
      do
      {
        --a3;
        v4 = v5 - v3;
        a1 = v5++;
      }
      while ( a3 && *a1 );
    }
  }
  else
  {
    v4 = 0;
  }
  return sub_E9F28(a1, a2, a3) + v4;
}
