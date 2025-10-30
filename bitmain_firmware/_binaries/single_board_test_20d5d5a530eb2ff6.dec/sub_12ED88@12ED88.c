int __fastcall sub_12ED88(int *a1, _BYTE *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // r0
  int v9; // r1
  int *v11; // r0

  v7 = (_DWORD *)*a1;
  v9 = a3;
  if ( v7 || (v7 = (_DWORD *)sub_B8264(), v9 = a3, (*a1 = (int)v7) != 0) )
  {
    if ( sub_B8AEC(a2, v9, v7) )
    {
      sub_B87B8(*a1, 4);
      return 1;
    }
    v11 = (int *)*a1;
    if ( *a1 )
    {
      if ( (*(_DWORD *)(a6 + 20) & 1) != 0 )
        sub_B87C8(v11);
      else
        sub_B895C((int)v11);
      *a1 = 0;
    }
  }
  return 0;
}
