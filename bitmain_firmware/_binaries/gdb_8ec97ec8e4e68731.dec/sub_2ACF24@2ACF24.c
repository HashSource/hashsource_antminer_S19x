char *__fastcall sub_2ACF24(_DWORD *a1, size_t **a2, int a3)
{
  _DWORD *v3; // r3
  bool v5; // zf
  size_t *v6; // r0
  size_t *v7; // r8
  char *v8; // r0
  char *v9; // r7
  unsigned __int8 *v10; // r5
  size_t v11; // r6
  char *v12; // r4
  unsigned __int8 *v13; // r6
  int v14; // t1
  char *v15; // r0

  v3 = a1;
  if ( !a1 )
    goto LABEL_12;
  v3 = (_DWORD *)*a1;
  v5 = a2 == 0;
  if ( a2 )
    v5 = v3 == 0;
  if ( v5 )
  {
LABEL_12:
    ((void (__fastcall *)(int, size_t **, int, _DWORD *))loc_2A6C48)(5, a2, a3, v3);
    return 0;
  }
  else
  {
    v6 = sub_2ACC78((int)a1);
    v7 = v6;
    if ( !v6 )
      return 0;
    v8 = (char *)sub_2AB368(2 * (*v6 + 9));
    v9 = v8;
    if ( v8 )
    {
      v10 = (unsigned __int8 *)v7 + 5;
      v11 = *v7;
      v12 = v8 + 13;
      strcpy(v8, ".build-id/");
      sprintf(v8 + 10, "%02x", *((unsigned __int8 *)v7 + 4));
      *((_WORD *)v9 + 6) = 47;
      if ( v11 != 1 )
      {
        v13 = &v10[v11 - 1];
        do
        {
          v14 = *v10++;
          v15 = v12;
          v12 += 2;
          sprintf(v15, "%02x", v14);
        }
        while ( v13 != v10 );
      }
      strcpy(v12, ".debug");
      *a2 = v7;
    }
    else
    {
      ((void (__fastcall *)(int))loc_2A6C48)(6);
    }
    return v9;
  }
}
