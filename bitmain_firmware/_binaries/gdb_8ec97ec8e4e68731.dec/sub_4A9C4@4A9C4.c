DIR *__fastcall sub_4A9C4(int a1)
{
  _DWORD *v2; // r5
  void *v3; // r0
  void *v4; // r0
  int v5; // r0

  v2 = *(_DWORD **)(a1 + 32);
  if ( v2 )
  {
    v3 = (void *)v2[2];
    if ( v3 )
      free(v3);
    v4 = (void *)v2[3];
    if ( v4 )
      free(v4);
    sub_33AC04(v2);
  }
  v5 = sub_1DDBBC(a1);
  *(_DWORD *)(a1 + 32) = sub_1DD7FC(v5);
  *(_DWORD *)(a1 + 36) = 1;
  return sub_4A77C(a1);
}
