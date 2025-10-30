int __fastcall sub_479CC(int a1, int a2)
{
  time_t v3; // r0
  char v5[52]; // [sp+8h] [bp-34h] BYREF

  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 8) = 1139474432;
  *(_DWORD *)(a1 + 12) = 1140932608;
  *(_DWORD *)(a1 + 16) = 1086849024;
  *(_DWORD *)(a1 + 20) = 1045220557;
  *(_DWORD *)(a1 + 24) = 3;
  *(_DWORD *)(a1 + 28) = 1;
  v3 = time(0);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 56) = v3;
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf(
    "%s : ===========sweep mode[%d], reuse[%d]============\n",
    "set_sweep_cxt",
    *(_DWORD *)(a1 + 28),
    *(_DWORD *)(a1 + 32));
  snprintf(
    byte_6469E4,
    0x100u,
    "===========sweep mode[%d], reuse[%d]============",
    *(_DWORD *)(a1 + 28),
    *(_DWORD *)(a1 + 32));
  return sub_3CC5C((int)byte_6469E4, v5);
}
