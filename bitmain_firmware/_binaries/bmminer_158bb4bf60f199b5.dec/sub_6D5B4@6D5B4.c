void __fastcall sub_6D5B4(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
    sub_6D518(v2);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
}
