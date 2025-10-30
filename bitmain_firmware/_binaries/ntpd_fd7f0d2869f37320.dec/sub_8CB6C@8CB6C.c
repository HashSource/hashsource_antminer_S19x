unsigned int __fastcall sub_8CB6C(unsigned int result, int a2)
{
  if ( result > 0xF )
    return sub_8BADC(result, (_DWORD *)(a2 + 16), (_BYTE **)(a2 + 24), stderr, 1);
  return result;
}
