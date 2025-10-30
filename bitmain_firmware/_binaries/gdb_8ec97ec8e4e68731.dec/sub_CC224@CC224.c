int __fastcall sub_CC224(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v5; // r4

  v2 = a2;
  do
  {
    v5 = *(_DWORD *)(v2 + 108);
    if ( v2 == v5 )
      JUMPOUT(0xDB0B0);
    result = ((int (__fastcall *)(int))loc_DB0B0)(v2);
    v2 = v5;
  }
  while ( a2 != v5 );
  return result;
}
