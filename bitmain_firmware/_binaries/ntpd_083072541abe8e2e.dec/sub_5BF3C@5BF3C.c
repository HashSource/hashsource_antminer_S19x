void __fastcall sub_5BF3C(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  void *v4; // r5

  v2 = *(_DWORD *)(a2 + 84);
  v3 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 52) = sub_5BEF8;
  v4 = *(void **)v2;
  if ( v3 != -1 )
    sub_18E64(v2 + 8);
  if ( v4 )
    free(v4);
}
