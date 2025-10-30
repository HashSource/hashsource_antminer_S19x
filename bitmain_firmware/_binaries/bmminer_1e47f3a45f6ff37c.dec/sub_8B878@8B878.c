_DWORD *__fastcall sub_8B878(int a1)
{
  int *v1; // r0
  int *v3; // r0
  _DWORD *ptr; // [sp+14h] [bp-8h]

  ptr = calloc(1u, 0x10u);
  if ( ptr )
  {
    ptr[2] = 32;
    ptr[1] = 0;
    ptr[3] = a1;
    *ptr = calloc(ptr[2], 4u);
    if ( *ptr )
    {
      return ptr;
    }
    else
    {
      v3 = _errno_location();
      sub_8CD10(2, "src/zc_arraylist.c", 32, "calloc fail, errno[%d]", *v3);
      free(ptr);
      return 0;
    }
  }
  else
  {
    v1 = _errno_location();
    sub_8CD10(2, "src/zc_arraylist.c", 22, "calloc fail, errno[%d]", *v1);
    return 0;
  }
}
