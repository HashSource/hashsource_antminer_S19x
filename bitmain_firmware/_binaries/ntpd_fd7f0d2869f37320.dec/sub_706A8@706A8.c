int __fastcall sub_706A8(int a1)
{
  _DWORD *v1; // r1
  bool v2; // zf

  v1 = *(_DWORD **)(a1 + 20);
  if ( v1 )
  {
    v2 = *v1 == 0;
    *(_DWORD *)(a1 + 20) = *v1;
    if ( !v2 )
      return 0;
  }
  if ( dword_108264 )
    return 29;
  return sub_7062C(a1);
}
