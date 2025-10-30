unsigned int __fastcall sub_8B61C(unsigned int result, int a2)
{
  if ( result > 0xF )
    return sub_8A588(result, (_DWORD *)(a2 + 16), (_BYTE **)(a2 + 24), stderr, 1);
  return result;
}
