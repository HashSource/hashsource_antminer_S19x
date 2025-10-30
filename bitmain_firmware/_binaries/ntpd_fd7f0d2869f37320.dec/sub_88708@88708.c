char *__fastcall sub_88708(void ***a1, char *name, int a3, int a4)
{
  char *result; // r0
  unsigned __int8 *v8; // r1
  unsigned int v9; // r3
  void **v10; // r2
  void **v11; // r2
  unsigned int v12; // r3
  void **v13; // r3
  char *v14; // r0
  int v15; // r3

  result = getenv(name);
  a1[1] = (void **)result;
  if ( result )
  {
    v8 = (unsigned __int8 *)(*a1)[15];
    v9 = (unsigned int)(*a1)[4];
    a1[3] = 0;
    a1[2] = (void **)(v9 | 0x42);
    if ( v8 )
    {
      result = (char *)sub_8867C((unsigned __int8 *)result, v8);
      if ( !result )
      {
        v13 = a1[2];
        a1[1] = 0;
        a1[2] = (void **)((unsigned int)v13 | 0x20);
        return (char *)sub_7F0F4(a3, a1);
      }
    }
    if ( a4 != 1 )
    {
      if ( a4 == 2 )
      {
        v10 = a1[2];
        if ( ((unsigned int)sub_20020 & (unsigned int)v10) != 0
          && ((unsigned int)&loc_40020 & (unsigned int)v10) != 0x20
          && ((unsigned int)v10 & 0x400020) != 0x400000
          && ((unsigned int)v10 & 0x800020) != 0x800020 )
        {
          return result;
        }
      }
      goto LABEL_13;
    }
    v11 = a1[2];
    if ( ((unsigned int)sub_20020 & (unsigned int)v11) == 0x20000
      || (_UNKNOWN *)((unsigned int)&loc_40020 & (unsigned int)v11) == &loc_40020 )
    {
LABEL_13:
      v12 = (unsigned int)(*a1)[4];
      if ( (v12 & 0xF000) != 0 )
      {
        result = (char *)a1[1];
        if ( *result )
        {
          v14 = sub_7FA64(result);
          v15 = (unsigned int)a1[2] | 0x40;
          a1[1] = (void **)v14;
          a1[2] = (void **)v15;
          return (char *)sub_7F0F4(a3, a1);
        }
        if ( (v12 & 0x10000) == 0 )
          return result;
      }
      a1[1] = 0;
      return (char *)sub_7F0F4(a3, a1);
    }
  }
  return result;
}
