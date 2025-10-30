unsigned int __fastcall sub_2AB614(int a1)
{
  return *(unsigned __int8 *)(a1 + 7)
       | ((*(unsigned __int8 *)(a1 + 6)
         | ((*(unsigned __int8 *)(a1 + 5) | ((*(unsigned __int8 *)(a1 + 4) | (bswap32(*(_DWORD *)a1) << 8)) << 8)) << 8)) << 8);
}
