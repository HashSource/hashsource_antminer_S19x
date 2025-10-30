int __fastcall sub_ECB60(int a1, int *a2)
{
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r4

  v3 = (_DWORD *)sub_EEFEC(a1, 0);
  if ( !v3 )
    return 0;
  v4 = (int)v3;
  v5 = sub_DA078(v3);
  sub_DA240(v4);
  if ( !v5 )
    return 0;
  if ( a2 )
  {
    sub_F8154(*a2);
    *a2 = v5;
  }
  return v5;
}
