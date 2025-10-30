void __fastcall sub_7AD74(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
    sub_7ACD8(v2);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
}
