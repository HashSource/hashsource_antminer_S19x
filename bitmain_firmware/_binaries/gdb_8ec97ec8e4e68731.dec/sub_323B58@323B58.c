_DWORD *__fastcall sub_323B58(unsigned int a1, int a2, int a3, int a4)
{
  return sub_323A38(
           a1,
           a2,
           a3,
           a4,
           (int (__fastcall *)(int, int))calloc,
           (int (__fastcall *)(int, int))calloc,
           (void (__fastcall *)(_DWORD *))free);
}
