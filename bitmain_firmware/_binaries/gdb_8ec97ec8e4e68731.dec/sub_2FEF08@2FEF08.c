int __fastcall sub_2FEF08(int a1, int a2)
{
  int v4; // r2
  _DWORD *v5; // r3
  int result; // r0

  v5 = (_DWORD *)sub_2AAEC8((int)dword_48FE8C, 8);
  if ( v5 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v5 )
  {
    *v5 = v4;
    v5[1] = a2;
    *(_DWORD *)(a1 + 12) = v5;
  }
  return result;
}
