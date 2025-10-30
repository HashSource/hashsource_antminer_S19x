_DWORD *__fastcall sub_746F0(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/nls/msgcat.c", 64, 0, "name != ((void *)0)");
  if ( !a2 || *a2 )
    sub_6FC54((int)"./../lib/isc/nls/msgcat.c", 65, 0, "msgcatp != ((void *)0) && *msgcatp == ((void *)0)");
  result = malloc(4u);
  if ( result )
  {
    *a2 = result;
    *result = 1296261492;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
