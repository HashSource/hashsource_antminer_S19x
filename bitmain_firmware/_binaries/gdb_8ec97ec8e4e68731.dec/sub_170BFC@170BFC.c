int __fastcall sub_170BFC(int a1, int a2)
{
  int v4; // r3
  int v5; // r0
  int result; // r0

  sub_16F708(a1);
  v4 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v4 + 20) = a2;
  *(_BYTE *)v4 = 16;
  v5 = ((int (__fastcall *)(int))loc_1708E0)(a2);
  ((void (__fastcall *)(int, int))loc_1709C4)(a1, v5);
  result = sub_FC7AC();
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
