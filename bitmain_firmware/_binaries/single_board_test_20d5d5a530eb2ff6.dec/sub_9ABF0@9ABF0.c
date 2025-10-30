void *__fastcall sub_9ABF0(int a1, _BYTE *s)
{
  void *result; // r0

  result = memset(s, 0, 0x2Cu);
  *s = *(_BYTE *)a1;
  *((_DWORD *)s + 1) = (*(unsigned __int8 *)(a1 + 2) << 8)
                     | (*(unsigned __int8 *)(a1 + 1) << 16)
                     | *(unsigned __int8 *)(a1 + 3);
  *((_WORD *)s + 4) = _byteswap_ushort(*(_WORD *)(a1 + 4));
  *((_DWORD *)s + 3) = (*(unsigned __int8 *)(a1 + 7) << 8)
                     | (*(unsigned __int8 *)(a1 + 6) << 16)
                     | *(unsigned __int8 *)(a1 + 8);
  *((_DWORD *)s + 4) = (*(unsigned __int8 *)(a1 + 10) << 8)
                     | (*(unsigned __int8 *)(a1 + 9) << 16)
                     | *(unsigned __int8 *)(a1 + 11);
  return result;
}
