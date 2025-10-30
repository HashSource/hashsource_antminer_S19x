int __fastcall sub_1483A4(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0
  void *v5; // r0

  v2 = *(_DWORD **)(a1 + 80);
  *(_DWORD *)a1 = off_39EA2C;
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_12430C(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*(void **)(a1 + 72), 0, 4 * *(_DWORD *)(a1 + 76));
  v4 = *(void **)(a1 + 72);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  if ( v4 != (void *)(a1 + 96) )
    sub_339E64(v4);
  v5 = *(void **)(a1 + 4);
  *(_DWORD *)a1 = &off_39EA04;
  if ( v5 )
    sub_339E64(v5);
  return a1;
}
