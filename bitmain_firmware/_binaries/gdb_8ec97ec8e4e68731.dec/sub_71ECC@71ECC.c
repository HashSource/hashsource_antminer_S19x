int __fastcall sub_71ECC(int a1)
{
  unsigned __int8 *v2; // r4
  int v3; // t1
  int v4; // r5

  v2 = (unsigned __int8 *)(dword_487CC0 - dword_474A60);
  for ( dword_487CC0 -= dword_474A60; ; dword_487CC0 = (int)v2 )
  {
    v3 = *v2--;
    v4 = toupper(v3);
    if ( v4 == toupper(a1) )
      break;
  }
  return sub_71E34(0);
}
