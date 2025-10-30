int __fastcall sub_1B870C(int a1, unsigned int a2)
{
  _DWORD *v2; // r4

  v2 = *(_DWORD **)(a1 + 36);
  if ( !v2 )
    return 0;
  while ( (v2[3] & 2) == 0 || !sub_1B8630(a2, (int)v2) )
  {
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return 0;
  }
  return 1;
}
