int __fastcall sub_B82E0(_DWORD *a1)
{
  int v1; // r3

  v1 = a1[1];
  if ( v1 > 1 )
    return -1;
  if ( v1 == 1 )
    return *(_DWORD *)*a1;
  return 0;
}
