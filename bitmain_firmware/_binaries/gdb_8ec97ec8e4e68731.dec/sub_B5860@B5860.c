int __fastcall sub_B5860(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // r6
  int result; // r0

  v5 = a1;
  if ( a1 )
  {
    v5 = sub_26F824(a1, a3);
    result = sub_26BC70(v5);
  }
  else
  {
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 24) + 24 * a3 + 12);
  }
  if ( a4 )
    *a4 = v5;
  if ( a5 )
    *a5 = result;
  return result;
}
