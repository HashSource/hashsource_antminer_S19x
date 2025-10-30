_BYTE *__fastcall sub_7DB38(_BYTE *a1)
{
  _BYTE *v1; // r4
  int v2; // t1

  v1 = a1;
  if ( *a1 == 39 )
  {
    do
    {
      fwrite("\\'", 1u, 2u, stdout);
      v2 = (unsigned __int8)*++v1;
    }
    while ( v2 == 39 );
  }
  return v1;
}
