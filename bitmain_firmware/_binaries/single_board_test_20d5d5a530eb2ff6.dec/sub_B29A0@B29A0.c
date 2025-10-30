int __fastcall sub_B29A0(_DWORD *a1, _DWORD *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  _DWORD *v7; // r1

  result = sub_EB338(*a1, *a2, a3);
  if ( !result )
  {
    v6 = (int *)a1[1];
    v7 = (_DWORD *)a2[1];
    if ( v6 || v7 )
      return sub_AD80C(v6, v7);
    else
      return 0;
  }
  return result;
}
