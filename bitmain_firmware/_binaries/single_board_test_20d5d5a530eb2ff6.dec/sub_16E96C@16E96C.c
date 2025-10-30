int __fastcall sub_16E96C(int a1, int a2)
{
  int result; // r0

  result = sub_10E154(*(int **)(a1 + 24), a2);
  if ( result )
    *(_DWORD *)(a1 + 8) = 1;
  return result;
}
