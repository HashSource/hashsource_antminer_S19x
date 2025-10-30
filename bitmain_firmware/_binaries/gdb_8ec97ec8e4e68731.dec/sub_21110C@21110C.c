const char *__fastcall sub_21110C(char *s, const char *a2, const char *a3, int a4, int a5)
{
  size_t v9; // r10
  size_t v10; // r0
  size_t v11; // r4
  size_t v12; // r0
  const char *v13; // r4
  char *v14; // r0
  char *v16; // r0
  unsigned int *v17; // r9
  unsigned int v18; // r7
  unsigned int *v19; // r2
  unsigned int v20; // r10
  int v21; // r0
  char *v22; // r0
  size_t v23; // r0
  const char *v24; // r11
  int v25; // r10
  size_t v26; // r0
  char *v27; // r0
  const char *v28; // r0
  char *v29; // r0
  char *v30; // [sp+8h] [bp-14h]
  void *v31; // [sp+10h] [bp-Ch]

  if ( dword_489694 )
  {
    v28 = (const char *)sub_1B87A8(a5);
    sub_259858("\nLooking for separate debug info (debug link) for %s\n", v28);
  }
  v9 = strlen(s);
  if ( a2 )
  {
    v10 = strlen(a2);
    if ( v9 < v10 )
      v9 = v10;
  }
  v11 = strlen((const char *)dword_489698);
  v12 = strlen(a3);
  v13 = (const char *)sub_93028(v11 + v12 + 9 + v9);
  v14 = (char *)stpcpy(v13, s);
  strcpy(v14, a3);
  if ( !sub_210F6C(v13, a4, a5) )
  {
    v16 = (char *)stpcpy(v13, s);
    qmemcpy(v16, ".debug/", 7);
    strcpy(v16 + 7, a3);
    if ( !sub_210F6C(v13, a4, a5) )
    {
      v17 = (unsigned int *)sub_9832C((char *)dword_489698);
      v31 = (void *)sub_25B314();
      if ( v17 && *v17 )
      {
        v30 = s;
        v18 = 0;
        while ( 1 )
        {
          v19 = &v17[v18++];
          v20 = v19[2];
          v21 = stpcpy(v13, v20) + 1;
          *(_BYTE *)(v21 - 1) = 47;
          v22 = (char *)stpcpy(v21, v30);
          strcpy(v22, a3);
          if ( sub_210F6C(v13, a4, a5) )
            break;
          if ( a2 )
          {
            v23 = strlen((const char *)dword_487A40);
            if ( !j_strncmp(a2, (const char *)dword_487A40, v23) )
            {
              v24 = (const char *)dword_487A40;
              if ( a2[strlen((const char *)dword_487A40)] == 47 )
              {
                v25 = stpcpy(v13, v20);
                v26 = strlen(v24);
                v27 = (char *)(stpcpy(v25, &a2[v26]) + 1);
                *(v27 - 1) = 47;
                strcpy(v27, a3);
                if ( sub_210F6C(v13, a4, a5) )
                  break;
              }
            }
          }
          if ( v18 >= *v17 )
            goto LABEL_19;
        }
        sub_92620(v31);
      }
      else
      {
LABEL_19:
        sub_92620(v31);
        v29 = (char *)v13;
        v13 = 0;
        free(v29);
      }
    }
  }
  return v13;
}
