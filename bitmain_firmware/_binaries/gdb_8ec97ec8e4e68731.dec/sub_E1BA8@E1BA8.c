int __fastcall sub_E1BA8(int *a1)
{
  int v1; // r1
  int v3; // r1

  v1 = a1[1];
  if ( v1 != -991146299 * ((*(_DWORD *)(*a1 + 28) - *(_DWORD *)(*a1 + 24)) >> 2) )
    return v1 + 1;
  if ( !sub_E0C48(*a1) )
    ++v3;
  return v3;
}
