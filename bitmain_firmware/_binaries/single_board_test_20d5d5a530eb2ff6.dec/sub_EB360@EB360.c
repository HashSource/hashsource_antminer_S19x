int __fastcall sub_EB360(int *a1, int a2)
{
  int v2; // r4
  int result; // r0

  v2 = *a1;
  result = *(_DWORD *)(*a1 + 4) - *(_DWORD *)(*(_DWORD *)a2 + 4);
  if ( !result )
    return *(_DWORD *)(v2 + 8) - *(_DWORD *)(*(_DWORD *)a2 + 8);
  return result;
}
