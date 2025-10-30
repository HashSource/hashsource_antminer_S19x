_DWORD *__fastcall sub_88B20(size_t a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r0
  int *v7; // r0
  _DWORD *ptr; // [sp+1Ch] [bp-8h]

  ptr = calloc(1u, 0x1Cu);
  if ( ptr )
  {
    ptr[1] = calloc(a1, 4u);
    if ( ptr[1] )
    {
      ptr[2] = a1;
      *ptr = 0;
      ptr[3] = a2;
      ptr[4] = a3;
      ptr[5] = a4;
      ptr[6] = a5;
      return ptr;
    }
    else
    {
      v7 = _errno_location();
      sub_89984(2, "src/zc_hashtable.c", 44, "calloc fail, errno[%d]", *v7);
      free(ptr);
      return 0;
    }
  }
  else
  {
    v5 = _errno_location();
    sub_89984(2, "src/zc_hashtable.c", 38, "calloc fail, errno[%d]", *v5);
    return 0;
  }
}
