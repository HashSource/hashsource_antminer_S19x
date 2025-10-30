int __fastcall sub_F8388(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  bool v8; // zf

  v5 = *(_DWORD *)(a1 + 16);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = a2 == 0;
  if ( v6 )
    return 0;
  v7 = *(_DWORD *)(a1 + 20);
  v8 = v7 == 0;
  if ( !v7 )
    v8 = a3 == 0;
  if ( v8 )
    return 0;
  if ( a2 )
  {
    sub_B895C(v5);
    *(_DWORD *)(a1 + 16) = a2;
  }
  if ( a3 )
  {
    sub_B895C(*(_DWORD *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = a3;
  }
  if ( a4 )
  {
    sub_B87C8(*(int **)(a1 + 24));
    *(_DWORD *)(a1 + 24) = a4;
    sub_B87B8(a4, 4);
  }
  return 1;
}
