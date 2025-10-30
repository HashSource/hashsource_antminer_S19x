int __fastcall sub_82600(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0

  v3 = *(_DWORD *)(a1 + 12);
  if ( (v3 & 0xFF000000) == 0x3000000 )
  {
    result = sub_A8450(a2, a2, (unsigned __int16)v3, 0, 2);
    if ( result )
    {
      *a3 = 2;
      return 1;
    }
  }
  else
  {
    result = 1;
    *a3 = 0;
  }
  return result;
}
