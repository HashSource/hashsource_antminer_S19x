void __fastcall sub_8930(_DWORD *ptr)
{
  _DWORD *i; // r0

  for ( i = (_DWORD *)ptr[1]; i; i = (_DWORD *)ptr[1] )
  {
    ptr[1] = *i;
    free(i);
  }
  free(ptr);
}
