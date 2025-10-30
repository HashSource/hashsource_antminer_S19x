int __fastcall sub_282B40(int a1, int a2)
{
  int v2; // r2
  bool v3; // zf
  unsigned __int8 *v4; // r3
  int v5; // r2
  int v6; // t1
  bool v7; // zf

  sub_2954D0(1, a2);
  if ( dword_4900D8 < dword_4900DC )
  {
    v2 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
    v3 = v2 == 9;
    if ( v2 != 9 )
      v3 = v2 == 32;
    if ( v3 )
    {
      v4 = (unsigned __int8 *)(dword_48AAD4 + dword_4900D8 + 1);
      do
      {
        dword_4900D8 = (int)&v4[-dword_48AAD4];
        if ( v4 == (unsigned __int8 *)(dword_48AAD4 + dword_4900DC) )
          break;
        v6 = *v4++;
        v5 = v6;
        v7 = v6 == 9;
        if ( v6 != 9 )
          v7 = v5 == 32;
      }
      while ( v7 );
    }
  }
  return 0;
}
