unsigned int __fastcall sub_F414C(int a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r0

  v1 = *(_DWORD *)(a1 + 28);
  v2 = *(_DWORD *)(a1 + 32);
  if ( v1 >= v2 )
    return 0;
  else
    return v2 - v1;
}
