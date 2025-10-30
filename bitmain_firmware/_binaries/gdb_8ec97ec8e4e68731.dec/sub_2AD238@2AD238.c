void *__fastcall sub_2AD238(int a1, size_t *a2, _DWORD *a3)
{
  int v6; // r5
  unsigned int v7; // r5
  void *v8; // r4
  unsigned int v9; // r8
  void *v10; // r0
  char *v11; // r1
  void *ptr; // [sp+4h] [bp-4h] BYREF

  if ( a1 )
  {
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    sub_2A6BBC("opncls.c", 1265);
    if ( a2 )
      goto LABEL_3;
  }
  sub_2A6BBC("opncls.c", 1266);
LABEL_3:
  if ( !a3 )
    sub_2A6BBC("opncls.c", 1267);
  v6 = sub_2AD7AC(a1, ".gnu_debugaltlink");
  if ( v6 )
  {
    if ( sub_2ADFDC(a1, v6, &ptr) )
    {
      v7 = *(_DWORD *)(v6 + 36);
      v8 = ptr;
      v9 = strnlen(ptr, v7) + 1;
      if ( v7 > v9 )
      {
        *a2 = v7 - v9;
        v10 = sub_2AB368(v7 - v9);
        v11 = (char *)ptr;
        *a3 = v10;
        memcpy(v10, &v11[v9], *a2);
        return v8;
      }
    }
    else if ( ptr )
    {
      free(ptr);
      return 0;
    }
  }
  return 0;
}
