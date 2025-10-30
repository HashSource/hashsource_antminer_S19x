void **__fastcall sub_E8E14(void **result)
{
  void **v1; // r4

  if ( result )
  {
    v1 = result;
    sub_E0758(result[16], 16 * (_DWORD)result[6], (size_t)"crypto/modes/ocb128.c");
    return (void **)sub_E07F8(v1, 0x98u);
  }
  return result;
}
