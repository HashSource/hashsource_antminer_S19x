bool __fastcall sub_1CDCD8(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  if ( a2 <= 1 )
    return 1;
  if ( a2 == 2 )
    return a3 != *a1;
  return 0;
}
