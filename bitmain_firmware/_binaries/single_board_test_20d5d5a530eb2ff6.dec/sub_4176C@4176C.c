int __fastcall sub_4176C(float *a1, int a2)
{
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  sub_415EC(a1, a2, 0);
  usleep((__useconds_t)&loc_186A0);
  sub_7778C(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 80));
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : Set chain baud as %d\n", "inc_freq_online_pll", *(_DWORD *)(dword_705300 + 80));
  snprintf(byte_63CBD0, 0x100u, "Set chain baud as %d", *(_DWORD *)(dword_705300 + 80));
  sub_3CC5C((int)byte_63CBD0, v3);
  return usleep(0x1388u);
}
