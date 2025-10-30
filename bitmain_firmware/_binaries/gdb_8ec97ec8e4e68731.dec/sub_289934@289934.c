int __fastcall sub_289934(const char *a1, int a2)
{
  int v3; // lr
  _DWORD *v4; // r3
  int result; // r0

  v3 = sub_2898DC(a1);
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)(a2 + 4);
  result = 0;
  do
  {
    if ( !*((_BYTE *)v4 - 4) && v3 == *v4 )
    {
      result = 1;
      *v4 = *((unsigned __int8 *)v4 - 4);
    }
    v4 += 2;
  }
  while ( v4 != (_DWORD *)(a2 + 2060) );
  return result;
}
