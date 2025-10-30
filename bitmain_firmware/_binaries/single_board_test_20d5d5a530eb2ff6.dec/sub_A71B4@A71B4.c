int __fastcall sub_A71B4(int a1)
{
  _DWORD *v1; // r1
  int v3; // r2
  int v4; // r0

  v1 = *(_DWORD **)(a1 + 128);
  v1[94] = 0;
  v1[95] = 0;
  v1[96] = 0;
  v3 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v3 + 388) = 0;
  *(_DWORD *)(v3 + 392) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 128) + 396) = (char *)&loc_F423E + 2;
  v4 = sub_882E0(a1);
  sub_B6ECC(v4, 45, 0, *(_DWORD *)(a1 + 128) + 388);
  return sub_A6F14(a1);
}
