_DWORD *__fastcall sub_2351A8(_DWORD *a1, char *a2, int a3)
{
  if ( !a2 )
    a3 = -1;
  *a1 = a1 + 2;
  if ( a2 )
    a3 = (int)&a2[strlen(a2)];
  sub_2350F8(a1, a2, a3);
  return a1;
}
