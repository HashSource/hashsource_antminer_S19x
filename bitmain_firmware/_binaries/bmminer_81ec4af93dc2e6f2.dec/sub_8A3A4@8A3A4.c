void *__fastcall sub_8A3A4(unsigned int a1, unsigned int a2, const char *a3)
{
  int *v4; // r0
  int *v5; // r0
  void *v10; // [sp+1Ch] [bp-8h]

  if ( a1 )
  {
    if ( a2 && a2 < a1 )
    {
      sub_89984(2, "src/buf.c", 98, "buf_size_max[%lu] < buf_size_min[%lu] && buf_size_max != 0", a2, a1);
      return 0;
    }
    v10 = calloc(1u, 0x424u);
    if ( !v10 )
    {
      v4 = _errno_location();
      sub_89984(2, "src/buf.c", 104, "calloc fail, errno[%d]", *v4);
      return 0;
    }
    if ( a3 )
    {
      if ( strlen(a3) > 0x400 )
      {
        sub_89984(2, "src/buf.c", 110, "truncate_str[%s] overflow", a3);
        goto LABEL_15;
      }
      strcpy((char *)v10 + 28, a3);
      *((_DWORD *)v10 + 264) = strlen(a3);
    }
    *((_DWORD *)v10 + 4) = a1;
    *((_DWORD *)v10 + 5) = a2;
    *((_DWORD *)v10 + 6) = *((_DWORD *)v10 + 4);
    *(_DWORD *)v10 = calloc(1u, *((_DWORD *)v10 + 6));
    if ( *(_DWORD *)v10 )
    {
      *((_DWORD *)v10 + 1) = *(_DWORD *)v10;
      *((_DWORD *)v10 + 3) = *(_DWORD *)v10 + *((_DWORD *)v10 + 6);
      *((_DWORD *)v10 + 2) = *((_DWORD *)v10 + 3) - 1;
      return v10;
    }
    v5 = _errno_location();
    sub_89984(2, "src/buf.c", 124, "calloc fail, errno[%d]", *v5);
LABEL_15:
    sub_8A33C((void **)v10);
    return 0;
  }
  sub_89984(2, "src/buf.c", 92, "buf_size_min == 0, not allowed");
  return 0;
}
