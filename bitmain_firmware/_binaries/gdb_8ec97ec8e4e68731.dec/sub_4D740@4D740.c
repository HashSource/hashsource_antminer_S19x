int __fastcall sub_4D740(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3

  result = sub_93094(1, 0x20u);
  v3 = result + 15;
  v4 = result - 1;
  do
  {
    *(_BYTE *)++v4 = 1;
    *(_BYTE *)++v3 = 1;
  }
  while ( v4 != result + 15 );
  *(_DWORD *)(a1 + 84) = result;
  return result;
}
