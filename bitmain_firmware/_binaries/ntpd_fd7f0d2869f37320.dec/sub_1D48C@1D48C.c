int __fastcall sub_1D48C(_DWORD *a1, int *a2)
{
  int v4; // r0
  int v5; // r2
  int result; // r0

  if ( dword_BA3E8 )
  {
    v4 = dword_BA3EC;
  }
  else
  {
    v4 = sub_6998C(&ntpdOptions, *a1, *a2);
    dword_BA3EC = v4;
  }
  v5 = *a1 - v4;
  result = *a2 + 4 * v4;
  *a1 = v5;
  *a2 = result;
  dword_BA3E8 = 1;
  return result;
}
