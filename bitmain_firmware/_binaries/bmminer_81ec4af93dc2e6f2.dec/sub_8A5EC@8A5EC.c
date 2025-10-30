_DWORD *__fastcall sub_8A5EC(_DWORD *result)
{
  void *dest; // [sp+Ch] [bp-8h]

  if ( *((_BYTE *)result + 28) )
  {
    dest = (void *)(result[1] - result[264]);
    if ( (unsigned int)dest < *result )
      dest = (void *)*result;
    return memcpy(dest, result + 7, result[1] - (_DWORD)dest);
  }
  return result;
}
