_BYTE *__fastcall sub_3245A4(_BYTE *result)
{
  int v1; // r3
  unsigned __int8 *v2; // r2
  int v3; // t1

  v1 = (unsigned __int8)*result;
  if ( *result )
  {
    v2 = result + 1;
    do
    {
      if ( v1 == 47 )
        result = v2;
      v3 = *v2++;
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
