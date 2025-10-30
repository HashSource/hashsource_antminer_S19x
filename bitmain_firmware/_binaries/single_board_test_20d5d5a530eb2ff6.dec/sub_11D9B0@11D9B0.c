int __fastcall sub_11D9B0(int a1, int a2)
{
  bool v2; // zf
  int result; // r0

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return -1;
  result = sub_EB338(*(_DWORD *)a1, *(_DWORD *)a2);
  if ( !result )
    return sub_AD80C(*(int **)(a1 + 4), *(_DWORD **)(a2 + 4));
  return result;
}
