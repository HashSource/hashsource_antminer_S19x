_DWORD *__fastcall sub_113A8(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    sub_10C38();
  if ( !a2 || *a2 )
    sub_10C38();
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
