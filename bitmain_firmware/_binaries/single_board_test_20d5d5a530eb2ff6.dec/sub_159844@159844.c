int __fastcall sub_159844(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r2
  int v9; // r0
  int v10; // r7
  int v11; // r0

  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
  v10 = *(_DWORD *)(v8 + 24);
  if ( v9 )
    v11 = sub_D8C70(v9);
  else
    v11 = 64;
  return sub_C9964(v11, a4, a5, a2, a3, v10);
}
