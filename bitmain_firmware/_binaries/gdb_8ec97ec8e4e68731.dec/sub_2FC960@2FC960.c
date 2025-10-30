char *__fastcall sub_2FC960(int a1, int a2, const char *a3, int a4, int a5, int a6)
{
  _DWORD *v7; // r1
  int v10; // r7
  const char *v11; // r6
  size_t v12; // r0
  char *v13; // r0
  char *v14; // r5
  size_t v15; // r0
  char *v16; // r4
  const char *v18; // r6
  size_t v19; // r0
  char *v20; // r0

  v7 = *(_DWORD **)(a2 + 40);
  if ( v7 )
  {
    v10 = *(unsigned __int8 *)a3;
    if ( *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 24) == v10 || *(unsigned __int8 *)(a2 + 9) == v10 )
    {
      v11 = a3 + 1;
    }
    else
    {
      v11 = a3;
      LOBYTE(v10) = 0;
    }
    if ( sub_2AAC2C(v7, v11, 0, 0) )
    {
      v12 = strlen(v11);
      v13 = (char *)sub_2AB368(v12 + 9);
      v14 = v13;
      if ( v13 )
      {
        *v13 = v10;
        v13[1] = 0;
        v15 = strlen(v13);
        strcpy(&v14[v15], "__wrap_");
        strcpy(&v14[v15 + 7], v11);
LABEL_9:
        v16 = sub_2FC920(*(_DWORD **)(a2 + 28), v14, a4, 1, a6);
        free(v14);
        return v16;
      }
      return 0;
    }
    if ( *v11 == 95 && !strncmp(v11, "__real_", 7u) )
    {
      v18 = v11 + 7;
      if ( sub_2AAC2C(*(_DWORD **)(a2 + 40), v18, 0, 0) )
      {
        v19 = strlen(v18);
        v20 = (char *)sub_2AB368(v19 + 2);
        v14 = v20;
        if ( v20 )
        {
          *v20 = v10;
          v20[1] = 0;
          strcat(v20, v18);
          goto LABEL_9;
        }
        return 0;
      }
    }
  }
  return sub_2FC920(*(_DWORD **)(a2 + 28), a3, a4, a5, a6);
}
