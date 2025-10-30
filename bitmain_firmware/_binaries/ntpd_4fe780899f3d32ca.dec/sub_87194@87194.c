char *__fastcall sub_87194(void ***a1, char *name, int a3, int a4)
{
  char *result; // r0
  unsigned __int8 *v8; // r1
  unsigned int v9; // r3
  void **v10; // r3
  unsigned int v11; // r3
  const char *v12; // r5
  void **v13; // r2
  void **v14; // r3
  char *v15; // r0
  void **v16; // r3

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
      result = (char *)sub_87100((unsigned __int8 *)result, v8);
      if ( !result )
      {
        v14 = a1[2];
        a1[1] = 0;
        a1[2] = (void **)((unsigned int)v14 | 0x20);
        return (char *)sub_7DC70(a3, a1);
      }
    }
    if ( a4 == 1 )
    {
      v13 = a1[2];
      if ( ((unsigned int)v13 & 0x20020) != 0x20000 && (~(unsigned int)v13 & 0x40020) != 0 )
        return result;
    }
    else if ( a4 == 2 )
    {
      v10 = a1[2];
      if ( ((unsigned int)v10 & 0x20020) != 0
        && ((unsigned int)v10 & 0x40020) != 0x20
        && ((unsigned int)v10 & 0x400020) != 0x400000
        && (~(unsigned int)v10 & 0x800020) != 0 )
      {
        return result;
      }
    }
    v11 = (unsigned int)(*a1)[4];
    if ( (v11 & 0xF000) == 0 )
      goto LABEL_10;
    v12 = (const char *)a1[1];
    if ( *v12 )
    {
      v15 = _strdup((const char *)a1[1]);
      if ( !v15 )
        sub_7E624(v12);
      v16 = a1[2];
      a1[1] = (void **)v15;
      a1[2] = (void **)((unsigned int)v16 | 0x40);
      return (char *)sub_7DC70(a3, a1);
    }
    if ( (v11 & 0x10000) != 0 )
    {
LABEL_10:
      a1[1] = 0;
      return (char *)sub_7DC70(a3, a1);
    }
  }
  return result;
}
