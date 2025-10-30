int __fastcall sub_3B34C(int a1)
{
  int v1; // r2
  bool v3; // nf
  int result; // r0

  v1 = *(_DWORD *)(a1 + 24);
  v3 = v1 < 0;
  if ( v1 < 0 )
  {
    result = -1;
  }
  else
  {
    result = 0;
    v1 = a1 + 32;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( !v3 )
    *(_DWORD *)(a1 + 28) = v1;
  return result;
}
