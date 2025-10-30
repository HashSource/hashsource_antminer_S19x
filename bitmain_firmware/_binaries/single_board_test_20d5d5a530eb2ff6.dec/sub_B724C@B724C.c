int __fastcall sub_B724C(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = sub_B6708(*(_DWORD *)(a1 + 40), 15);
  result = sub_B6710(a1, v2);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 28);
  return result;
}
