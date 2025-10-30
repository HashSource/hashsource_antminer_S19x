int __fastcall sub_D8944(int *a1)
{
  int v3; // [sp+4h] [bp-4h]

  if ( (sub_D8928(*a1) & 0x800) == 0 )
    return *(_DWORD *)(*a1 + 12);
  if ( sub_D83D4((int)a1) == 1 )
    return v3;
  return -1;
}
