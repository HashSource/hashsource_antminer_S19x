int __fastcall sub_4B4E8(int a1, char a2, const char *a3, int a4, int a5)
{
  size_t v5; // r4
  size_t maxlen; // [sp+1Ch] [bp-10h]

  *(_DWORD *)(a1 + 164) = sub_1FC14(a3, a1);
  *(_DWORD *)(a1 + 172) = a4;
  *(_DWORD *)(a1 + 176) = a5;
  v5 = strlen(*(const char **)(a1 + 172));
  maxlen = v5 + strlen(*(const char **)(a1 + 176)) + 2;
  *(_DWORD *)(a1 + 168) = sub_1F934(maxlen, "cgminer.c", "add_pool_details", 10918);
  snprintf(*(char **)(a1 + 168), maxlen, "%s:%s", *(const char **)(a1 + 172), *(const char **)(a1 + 176));
  *(_BYTE *)(a1 + 284) = 1;
  *(_BYTE *)(a1 + 97) = 1;
  *(_BYTE *)(a1 + 107) = a2 == 0;
  sub_3178C(a1);
  pthread_create((pthread_t *)(a1 + 280), 0, (void *(*)(void *))sub_4B2C8, (void *)a1);
  if ( a2 == 1 )
    return 1;
  pthread_join(*(_DWORD *)(a1 + 280), 0);
  return (unsigned __int8)byte_88730;
}
