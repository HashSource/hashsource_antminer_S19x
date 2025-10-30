int __fastcall sub_15DD9C(int a1, int a2, int *a3)
{
  int v6; // r3

  *a3 = 0;
  if ( !*(_DWORD *)a1 )
    return 1;
  v6 = sub_15D958(a1, a2, (unsigned __int8 *)(a1 + 8), *(_DWORD *)a1);
  if ( v6 < 0 )
    return -1;
  *(_DWORD *)a1 = 0;
  *a3 = v6;
  return 1;
}
