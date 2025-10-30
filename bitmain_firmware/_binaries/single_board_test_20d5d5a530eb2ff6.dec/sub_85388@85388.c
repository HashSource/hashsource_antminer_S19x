int __fastcall sub_85388(int a1, _DWORD *a2, int a3)
{
  int v4; // r3
  int result; // r0
  int v6; // r4

  v4 = *(_DWORD *)(a1 + 232);
  result = 1;
  v6 = *(_DWORD *)(a1 + 236);
  if ( !a3 )
    v4 = v6;
  *a2 = v4;
  return result;
}
