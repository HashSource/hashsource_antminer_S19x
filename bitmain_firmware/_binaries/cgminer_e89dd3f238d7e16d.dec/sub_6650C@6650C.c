int __fastcall sub_6650C(_DWORD *a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  if ( !a1 || *a1 != 1 )
    return -1;
  for ( i = 0; i < a1[3]; ++i )
    sub_650B0(*(_DWORD *)(a1[4] + 4 * i));
  a1[3] = 0;
  return 0;
}
