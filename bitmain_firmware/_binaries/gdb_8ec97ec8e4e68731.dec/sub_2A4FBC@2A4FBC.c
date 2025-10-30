void *__fastcall sub_2A4FBC(int a1, int a2, char *a3)
{
  const char *v5; // r5
  size_t v6; // r4
  size_t v7; // r0
  void *result; // r0
  const char *v9; // r1
  const char *v10; // r5
  char *v11; // r1

  v5 = (const char *)sub_3245A4(a2);
  v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 26);
  v7 = strlen(v5);
  if ( v6 < v7 )
  {
    v9 = v5;
    v10 = &v5[v7];
    result = memcpy(a3, v9, v6);
    if ( *(v10 - 2) == 46 && *(v10 - 1) == 111 )
    {
      v11 = &a3[v6];
      *(v11 - 2) = 46;
      *(v11 - 1) = 111;
    }
  }
  else
  {
    v6 = v7;
    result = memcpy(a3, v5, v7);
  }
  if ( v6 <= 0xF )
    a3[v6] = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 25);
  return result;
}
