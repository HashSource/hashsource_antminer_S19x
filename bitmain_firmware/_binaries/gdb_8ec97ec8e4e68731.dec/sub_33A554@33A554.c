int __fastcall sub_33A554(unsigned int *a1)
{
  char v1; // r3
  unsigned int v3; // r3
  bool v4; // zf
  unsigned int v5; // r2
  unsigned int v7; // r2
  bool v8; // zf
  unsigned int v9; // r1
  _DWORD *v10; // r0

  v1 = *(_BYTE *)a1;
  __dmb(0xBu);
  if ( (v1 & 1) != 0 )
    return 0;
  if ( !&_pthread_key_create )
  {
    if ( (*a1 & 1) == 0 )
    {
      if ( *((_BYTE *)a1 + 1) )
      {
        v10 = (_DWORD *)sub_33AB64(4);
        *v10 = &off_468DBC;
        sub_33A780(
          v10,
          &`typeinfo for'__gnu_cxx::recursive_init_error,
          __gnu_cxx::recursive_init_error::~recursive_init_error);
      }
      *((_BYTE *)a1 + 1) = 1;
      return 1;
    }
    return 0;
  }
  while ( 1 )
  {
    __dmb(0xBu);
    do
    {
      v3 = __ldrex(a1);
      v4 = v3 == 0;
      if ( v3 )
        break;
      v5 = __strex(0x100u, a1);
      v4 = v5 == 0;
    }
    while ( v5 );
    __dmb(0xBu);
    if ( v4 )
      break;
    if ( v3 == 1 )
      return 0;
    if ( v3 == 256 )
    {
      v3 = 65792;
      __dmb(0xBu);
      do
      {
        v7 = __ldrex(a1);
        v8 = v7 == 256;
        if ( v7 != 256 )
          break;
        v9 = __strex(0x10100u, a1);
        v8 = v9 == 0;
      }
      while ( v9 );
      __dmb(0xBu);
      if ( !v8 )
      {
        if ( v7 == 1 )
          return 0;
        if ( !v7 )
          continue;
      }
    }
    syscall(240, a1, 0, v3, 0);
  }
  return 1;
}
