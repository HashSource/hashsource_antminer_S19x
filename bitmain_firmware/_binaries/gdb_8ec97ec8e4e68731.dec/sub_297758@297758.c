void __fastcall sub_297758(void *ptr)
{
  int v1; // r2

  v1 = (int)ptr;
  if ( ptr )
    v1 = 1;
  if ( (v1 & ((dword_48AAA0 ^ 0x8000u) >> 15)) != 0 )
    free(ptr);
}
