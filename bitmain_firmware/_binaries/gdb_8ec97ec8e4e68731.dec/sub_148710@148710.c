int __fastcall sub_148710(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_339E64(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
  v4 = *(void **)a1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v4 != (void *)(a1 + 24) )
    sub_339E64(v4);
  return a1;
}
