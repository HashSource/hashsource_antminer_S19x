int __fastcall sub_10FC0C(int a1, int a2, _QWORD *a3)
{
  __int64 v6; // r4
  __int64 v8; // r2
  __int64 v9; // r6

  memset((void *)a1, 0, 0x28u);
  *(_DWORD *)(a1 + 40) = a2;
  memset((void *)(a1 + 48), 0, 0x28u);
  v6 = a3[3];
  v8 = a3[2];
  v9 = a3[4];
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)(a1 + 104) = v9;
  *(_BYTE *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 113) = 0;
  return a1;
}
