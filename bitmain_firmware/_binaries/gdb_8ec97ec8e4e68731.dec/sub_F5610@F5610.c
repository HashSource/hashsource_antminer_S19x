int __fastcall sub_F5610(int a1)
{
  void *v2; // r0
  void **v3; // r7
  void **v4; // r6
  void **v5; // r4
  void *v6; // r0
  void *v7; // t1
  int v8; // r0
  int result; // r0

  v2 = *(void **)(a1 + 100);
  if ( v2 )
    free(v2);
  v3 = *(void ***)(a1 + 68);
  v4 = *(void ***)(a1 + 72);
  *(_DWORD *)(a1 + 100) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  if ( v3 != v4 )
  {
    v5 = v3;
    do
    {
      v7 = *v5++;
      v6 = v7;
      if ( v7 )
        free(v6);
    }
    while ( v4 != v5 );
  }
  v8 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 72) = v3;
  sub_323B84(v8);
  result = sub_323AE0(200, sub_324230, sub_25AA0C, 0, sub_93094, sub_F45B0);
  *(_DWORD *)(a1 + 80) = result;
  return result;
}
