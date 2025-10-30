int __fastcall sub_E1B70(_DWORD *a1)
{
  int v1; // r3
  unsigned int v2; // r1
  int v3; // r0

  v1 = *a1;
  v2 = a1[1];
  v3 = *(_DWORD *)(*a1 + 24);
  if ( v2 >= -991146299 * ((*(_DWORD *)(v1 + 28) - v3) >> 2) )
    return 0;
  else
    return v3 + 52 * v2;
}
