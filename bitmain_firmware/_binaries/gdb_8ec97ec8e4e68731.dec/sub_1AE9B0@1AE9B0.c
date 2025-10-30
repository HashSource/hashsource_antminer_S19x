void sub_1AE9B0()
{
  void *v0; // r0
  void *ptr; // [sp+4h] [bp-Ch] BYREF
  int v2; // [sp+8h] [bp-8h]
  int v3; // [sp+Ch] [bp-4h]

  byte_487AF0 = 1;
  sub_233F28(&ptr);
  v0 = (void *)dword_487AF4;
  dword_487AF4 = (int)ptr;
  dword_487AF8 = v2;
  dword_487AFC = v3;
  ptr = 0;
  v2 = 0;
  v3 = 0;
  if ( v0 )
  {
    sub_339E64(v0);
    if ( ptr )
      sub_339E64(ptr);
  }
}
