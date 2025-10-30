void *__fastcall sub_16F708(int a1)
{
  int v2; // r0
  char v3; // r5
  int v4; // r6
  void *result; // r0
  int v6; // r3
  char v7; // r2

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(v2 + 2);
  v4 = *(_DWORD *)(v2 + 16);
  result = memset((void *)v2, 0, 0x24u);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = *(_BYTE *)(v6 + 2);
  *(_DWORD *)(v6 + 16) = v4;
  *(_BYTE *)(v6 + 2) = v7 & 0xEF | (16 * ((v3 & 0x10) != 0));
  *(_DWORD *)(a1 + 12) = a1;
  return result;
}
