int __fastcall sub_32F68(int a1)
{
  int result; // r0

  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 1077936128;
  sub_2AF08((void *)(a1 + 160), &unk_886F4, 0x20u, "cgminer.c", "get_benchmark_work", 4328);
  *(_DWORD *)(a1 + 244) = 0;
  *(_BYTE *)(a1 + 282) = 1;
  *(_DWORD *)(a1 + 260) = *(_DWORD *)dword_90F34;
  sub_21AC0((__time_t *)(a1 + 400));
  result = sub_21430(a1 + 408, a1 + 400);
  *(_BYTE *)(a1 + 440) = 66;
  return result;
}
