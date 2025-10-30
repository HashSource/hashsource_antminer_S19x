void *__fastcall sub_7F0D0(size_t a1)
{
  int *v1; // r0
  int *v3; // r0
  int *v4; // r0
  void *ptr; // [sp+14h] [bp-8h]

  ptr = calloc(1u, 0x21Cu);
  if ( ptr )
  {
    *((_DWORD *)ptr + 93) = calloc(a1, 0x100Cu);
    if ( *((_DWORD *)ptr + 93) )
    {
      *((_DWORD *)ptr + 94) = a1;
      if ( gethostname((char *)ptr + 8, 0x100u) )
      {
        v4 = _errno_location();
        sub_89984(2, "src/event.c", 78, "gethostname fail, errno[%d]", *v4);
        sub_7F03C((void **)ptr);
        return 0;
      }
      else
      {
        *((_DWORD *)ptr + 67) = strlen((const char *)ptr + 8);
        *((_DWORD *)ptr + 106) = pthread_self();
        *((_DWORD *)ptr + 115) = sprintf((char *)ptr + 428, "%lu", *((_DWORD *)ptr + 106));
        *((_DWORD *)ptr + 124) = sprintf((char *)ptr + 464, "%x", *((_DWORD *)ptr + 106));
        *((_DWORD *)ptr + 125) = syscall(224);
        *((_DWORD *)ptr + 134) = sprintf((char *)ptr + 504, "%u", *((_DWORD *)ptr + 125));
        return ptr;
      }
    }
    else
    {
      v3 = _errno_location();
      sub_89984(2, "src/event.c", 67, "calloc fail, errno[%d]", *v3);
      free(ptr);
      return 0;
    }
  }
  else
  {
    v1 = _errno_location();
    sub_89984(2, "src/event.c", 61, "calloc fail, errno[%d]", *v1);
    return 0;
  }
}
