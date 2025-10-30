int __fastcall sub_62ECC(int a1, int a2, char *s1, const char *a4, const char *a5)
{
  char *v8; // r0
  size_t v9; // r5
  size_t v10; // r5
  char *v11; // r0
  const char *v12; // r12
  const char *v13; // r3
  int v14; // r2

  v8 = sub_4AAB4(s1, a1);
  *(_DWORD *)(a1 + 172) = a4;
  *(_DWORD *)(a1 + 164) = v8;
  *(_DWORD *)(a1 + 176) = a5;
  v9 = strlen(a4);
  v10 = v9 + strlen(a5) + 2;
  v11 = (char *)sub_49624(v10, "cgminer.c", "add_pool_details", 10818);
  v12 = *(const char **)(a1 + 176);
  v13 = *(const char **)(a1 + 172);
  *(_DWORD *)(a1 + 168) = v11;
  snprintf(v11, v10, "%s:%s", v13, v12);
  v14 = *(_DWORD *)(a1 + 100);
  *(_BYTE *)(a1 + 284) = 1;
  *(_BYTE *)(a1 + 107) = a2 ^ 1;
  *(_BYTE *)(a1 + 97) = 1;
  if ( v14 != 1 )
  {
    *(_DWORD *)(a1 + 100) = 1;
    ++dword_2440F8;
  }
  pthread_create((pthread_t *)(a1 + 280), 0, (void *(*)(void *))sub_5B104, (void *)a1);
  if ( !a2 )
  {
    pthread_join(*(_DWORD *)(a1 + 280), 0);
    return (unsigned __int8)byte_1AF228;
  }
  return a2;
}
