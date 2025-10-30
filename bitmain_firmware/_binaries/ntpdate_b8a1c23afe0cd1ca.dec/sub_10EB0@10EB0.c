_DWORD *__fastcall sub_10EB0(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  int v4; // r3

  if ( !a1 )
    sub_1073C();
  if ( !a2 || *a2 )
    sub_1073C();
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
