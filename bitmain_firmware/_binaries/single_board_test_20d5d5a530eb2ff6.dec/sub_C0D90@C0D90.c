int __fastcall sub_C0D90(int a1, int a2, int a3)
{
  int v4; // r0

  v4 = *(_DWORD *)(a1 + 20);
  if ( !v4 )
  {
    if ( !a2 )
      return 0;
    goto LABEL_3;
  }
  if ( a2 )
  {
LABEL_3:
    sub_B895C(v4);
    *(_DWORD *)(a1 + 20) = a2;
  }
  if ( a3 )
  {
    sub_B895C(*(_DWORD *)(a1 + 24));
    *(_DWORD *)(a1 + 24) = a3;
  }
  return 1;
}
