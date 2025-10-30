time_t __fastcall sub_3C9A4(int a1)
{
  int v1; // r4
  time_t result; // r0

  *(_BYTE *)(a1 + 61) = 0;
  sub_22308((__time_t *)(a1 + 44));
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 96) = 0;
  v1 = *(_DWORD *)(a1 + 36);
  result = time(0);
  *(_DWORD *)(v1 + 240) = result;
  return result;
}
