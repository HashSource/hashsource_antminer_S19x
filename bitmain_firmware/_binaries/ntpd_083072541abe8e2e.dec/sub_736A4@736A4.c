_DWORD *__fastcall sub_736A4(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/nls/msgcat.c", 64, 0, "name != ((void *)0)");
  if ( !a2 || *a2 )
    sub_6ECC0((int)"./../lib/isc/nls/msgcat.c", 65, 0, "msgcatp != ((void *)0) && *msgcatp == ((void *)0)");
  result = malloc(4u);
  if ( result )
    LOWORD(v4) = 24948;
  else
    *a2 = 0;
  if ( result )
  {
    HIWORD(v4) = 19779;
    *a2 = result;
    *result = v4;
  }
  return result;
}
