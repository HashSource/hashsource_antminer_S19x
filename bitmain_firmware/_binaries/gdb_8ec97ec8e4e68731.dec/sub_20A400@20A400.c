int __fastcall sub_20A400(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r2
  int v3; // r3
  int v5; // r3
  int v6; // t1
  unsigned int v7; // r12

  v1 = *a1;
  v2 = **a1;
  if ( v2 == 35 )
  {
    v2 = *++v1;
    if ( !v2 )
      goto LABEL_12;
    v3 = 0;
    if ( (unsigned int)(v2 - 48) <= 9 )
    {
      do
      {
        v5 = v2 + 10 * v3;
        v6 = *++v1;
        v2 = v6;
        v3 = v5 - 48;
        v7 = v6 - 48;
        if ( !v6 )
          goto LABEL_12;
      }
      while ( v7 <= 9 );
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v2 != 61 )
  {
LABEL_12:
    v3 = -1;
    *a1 = v1;
    return v3;
  }
  *a1 = v1 + 1;
  return v3;
}
