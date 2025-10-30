int __fastcall sub_1367E4(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_B89E4(a1, (int)a2);
  if ( result )
  {
    sub_B8930((int **)(a1 + 20), 0);
    *(_DWORD *)(a1 + 40) = sub_B85BC(a2);
    *(_DWORD *)(a1 + 44) = 0;
    return 1;
  }
  return result;
}
