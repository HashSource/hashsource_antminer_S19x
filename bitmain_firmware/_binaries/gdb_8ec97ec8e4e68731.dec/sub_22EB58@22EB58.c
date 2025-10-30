int __fastcall sub_22EB58(int a1, int a2, int a3)
{
  int v3; // r4

  v3 = dword_4899A0;
  if ( !dword_4899A0 )
    return 0;
  while ( !(*(int (__fastcall **)(int, int, int, int))(v3 + 332))(v3, a1, a2, a3) )
  {
    v3 = *(_DWORD *)v3;
    if ( !v3 )
      return 0;
  }
  return 1;
}
