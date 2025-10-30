int __fastcall sub_34004(int a1)
{
  int result; // r0

  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 1077936128;
  sub_2BEFC((void *)(a1 + 160), &unk_8988C, 0x20u, "cgminer.c", "get_benchmark_work", 4328);
  *(_DWORD *)(a1 + 244) = 0;
  *(_BYTE *)(a1 + 282) = 1;
  *(_DWORD *)(a1 + 260) = *(_DWORD *)dword_920CC;
  sub_22308((__time_t *)(a1 + 400));
  result = sub_21CA0(a1 + 408, a1 + 400);
  *(_BYTE *)(a1 + 440) = 66;
  return result;
}
