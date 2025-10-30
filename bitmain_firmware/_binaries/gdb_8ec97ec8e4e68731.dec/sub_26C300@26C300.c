int __fastcall sub_26C300(int result)
{
  int v1; // r3
  bool v2; // zf
  int v3; // r4
  int v4; // r5
  bool v5; // zf

  v1 = dword_48AA00;
  v2 = dword_48AA00 == result;
  if ( dword_48AA00 != result )
    v2 = dword_48AA00 == 0;
  if ( v2 )
  {
    v3 = dword_48AA00;
  }
  else
  {
    v4 = result;
    do
    {
      v3 = *(_DWORD *)(v1 + 88);
      *(_BYTE *)(v1 + 4) |= 0x10u;
      result = ((int (__fastcall *)(int))loc_26C200)(v1);
      v5 = v4 == v3;
      if ( v4 != v3 )
        v5 = v3 == 0;
      v1 = v3;
    }
    while ( !v5 );
  }
  dword_48AA00 = v3;
  return result;
}
