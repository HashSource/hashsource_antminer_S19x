int __fastcall sub_1CE4BC(int a1, int a2)
{
  int result; // r0

  result = memcmp((const void *)(a1 + 8), (const void *)(a2 + 8), 8u);
  if ( result )
    return 0;
  if ( ((*(_BYTE *)(a1 + 20) ^ *(_BYTE *)(a2 + 20)) & 0x1F) == 0
    && *(unsigned __int8 *)(a1 + 24) == *(unsigned __int8 *)(a2 + 24) )
  {
    return *(_DWORD *)a1 == *(_DWORD *)a2;
  }
  return result;
}
