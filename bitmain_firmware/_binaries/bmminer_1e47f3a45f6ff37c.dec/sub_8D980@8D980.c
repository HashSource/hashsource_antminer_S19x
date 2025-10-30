_DWORD *__fastcall sub_8D980(_DWORD *result)
{
  void *dest; // [sp+Ch] [bp-8h]

  if ( *((_BYTE *)result + 28) )
  {
    dest = (void *)(result[1] - result[264]);
    if ( *result > (unsigned int)dest )
      dest = (void *)*result;
    return memcpy(dest, result + 7, result[1] - (_DWORD)dest);
  }
  return result;
}
