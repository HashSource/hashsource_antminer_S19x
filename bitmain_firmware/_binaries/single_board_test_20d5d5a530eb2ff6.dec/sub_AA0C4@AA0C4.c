int __fastcall sub_AA0C4(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int *v7; // r5
  int v8; // r0
  _BOOL4 v9; // r4

  if ( !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 16) )
    return 1;
  v4 = sub_B7820();
  v5 = sub_B655C(v4);
  v6 = v5;
  if ( v5 && sub_B6ECC(v5, 108, 3, a2) > 0 && (v7 = (int *)sub_EF09C(v6, 0, 0, 0)) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    if ( v8 )
      v8 = sub_89534(v8, 3, 0, (int)v7);
    if ( *(_DWORD *)(a1 + 16) )
      v8 = sub_890D4(*(_DWORD **)(a1 + 16), 3, 0, v7);
    v9 = v8 > 0;
  }
  else
  {
    v9 = 0;
    v7 = 0;
  }
  sub_BFB8C(v7);
  BIO_vfree_0(v6);
  return v9;
}
