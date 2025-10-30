int __fastcall sub_A3718(int a1, int a2)
{
  char **v3; // r3
  unsigned int v5; // [sp+4h] [bp-4h] BYREF

  if ( !sub_8559C(a2, &v5) )
    return 0;
  v3 = sub_A3610(a1, v5);
  if ( !v3 )
    return 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 124) + 632) = v3;
  return 1;
}
