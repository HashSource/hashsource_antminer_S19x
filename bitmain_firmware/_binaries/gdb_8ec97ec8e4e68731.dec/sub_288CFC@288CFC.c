int __fastcall sub_288CFC(int a1, int a2)
{
  _DWORD *v2; // r3
  int v3; // lr

  v2 = (_DWORD *)(a2 + 4);
  v3 = 0;
  do
  {
    if ( !*((_BYTE *)v2 - 4) && *v2 == a1 )
    {
      v3 = 1;
      *v2 = *((unsigned __int8 *)v2 - 4);
    }
    v2 += 2;
  }
  while ( v2 != (_DWORD *)(a2 + 2060) );
  return v3;
}
