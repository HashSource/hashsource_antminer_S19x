int __fastcall sub_8A8AC(int a1)
{
  if ( !*(_DWORD *)(a1 + 16) )
    return 1;
  *(_DWORD *)(a1 + 12) = sub_B70E8(*(_DWORD *)(a1 + 12));
  BIO_vfree_0(*(_DWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = 0;
  return 1;
}
