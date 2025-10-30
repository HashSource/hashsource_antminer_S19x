int __fastcall sub_3102B0(unsigned __int8 *a1, char *a2, int a3)
{
  size_t v6; // r0
  unsigned int v7; // r5
  int v8; // r3
  _BOOL4 v9; // r2
  int v10; // r4
  int v12; // r2
  int v13; // r5
  const char *v14; // r6
  unsigned __int8 *v15; // r4
  char **v16; // r8
  size_t j; // r0
  const char *v18; // t1
  unsigned __int8 *v19; // r4
  char *v20; // r5
  const char *v21; // r8
  int v22; // r6
  size_t v23; // r5
  const void *v24; // r4
  char **v25; // r10
  size_t i; // r0
  const char *v27; // t1
  unsigned int v28; // r5
  const void *v29; // r4
  char **v30; // r10
  size_t v31; // r0
  int v32; // r6
  const char *v33; // t1
  char **v34; // r8
  const char *v35; // r6
  const char *v36; // t1
  int v37; // r2
  unsigned __int8 *v38; // r6
  unsigned __int8 *v39; // [sp+0h] [bp-70h] BYREF
  char *src; // [sp+4h] [bp-6Ch] BYREF
  int v41; // [sp+8h] [bp-68h]
  int v42; // [sp+Ch] [bp-64h]
  _DWORD v43[24]; // [sp+10h] [bp-60h] BYREF

  v6 = strlen((const char *)a1);
  *a2 = 0;
  v7 = v6;
  memset(&v43[1], 0, 0x5Cu);
  v8 = *a1;
  v43[0] = a3;
  if ( v8 != 95 )
  {
    v9 = v7 > 2;
    if ( v8 != 111 )
      v9 = 0;
    if ( v9 && a1[1] == 112 && strchr(&byte_471494, a1[2]) )
    {
      LOWORD(v21) = (unsigned __int16)"nw";
      if ( v7 <= 9 || (v22 = memcmp(a1 + 3, "assign_", 7u)) != 0 )
      {
        v28 = v7 - 3;
        v29 = a1 + 3;
        v30 = off_432950;
        HIWORD(v21) = (unsigned int)"nw" >> 16;
        v31 = 2;
        v32 = 0;
        while ( v31 != v28 || memcmp(v21, v29, v31) )
        {
          if ( ++v32 == 79 )
            goto LABEL_7;
          v33 = v30[3];
          v30 += 3;
          v21 = v33;
          v31 = strlen(v33);
        }
        v10 = 1;
        strcpy(a2, "operator");
        strcpy(a2 + 8, off_432950[3 * v32 + 1]);
      }
      else
      {
        v23 = v7 - 10;
        v24 = a1 + 10;
        v25 = off_432950;
        HIWORD(v21) = (unsigned int)"nw" >> 16;
        for ( i = 2; v23 != i || memcmp(v21, v24, v23); i = strlen(v27) )
        {
          if ( ++v22 == 79 )
            goto LABEL_7;
          v27 = v25[3];
          v25 += 3;
          v21 = v27;
        }
        v10 = 1;
        strcpy(a2, "operator");
        *(_WORD *)stpcpy(a2 + 8, off_432950[3 * v22 + 1]) = 61;
      }
      goto LABEL_8;
    }
LABEL_5:
    if ( v7 > 4 && *a1 == 116 && a1[1] == 121 && a1[2] == 112 && a1[3] == 101 && strchr(&byte_471494, a1[4]) )
    {
      v19 = a1 + 5;
      goto LABEL_27;
    }
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  if ( a1[1] != 95 )
    goto LABEL_5;
  v12 = a1[2];
  if ( v12 == 111 && a1[3] == 112 )
  {
    v19 = a1 + 4;
LABEL_27:
    v39 = v19;
    if ( sub_30E828(v43, &v39, (unsigned int)&src) )
    {
      v10 = 1;
      v20 = src;
      strcat(a2, "operator ");
      strncat(a2, v20, v41 - (_DWORD)v20);
      free(v20);
      v41 = 0;
      v42 = 0;
      src = 0;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( (word_438898[v12] & 8) == 0 || (word_438898[a1[3]] & 8) == 0 )
    goto LABEL_5;
  v13 = a1[4];
  if ( a1[4] )
  {
    if ( v12 == 97 )
    {
      v13 = a1[5];
      if ( !a1[5] )
      {
        v34 = off_432950;
        while ( ++v13 != 79 )
        {
          v36 = v34[3];
          v34 += 3;
          v35 = v36;
          if ( strlen(v36) == 3 && *(unsigned __int8 *)v35 == a1[2] )
          {
            v37 = *((unsigned __int8 *)v35 + 1);
            v38 = (unsigned __int8 *)(v35 + 1);
            if ( v37 == a1[3] && v38[1] == a1[4] )
              goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_7;
  }
  v14 = "nw";
  v15 = a1 + 2;
  v16 = off_432950;
  for ( j = 2; j != 2 || *(unsigned __int8 *)v14 != *v15 || *((unsigned __int8 *)v14 + 1) != v15[1]; j = strlen(v18) )
  {
    if ( ++v13 == 79 )
      goto LABEL_7;
    v18 = v16[3];
    v16 += 3;
    v14 = v18;
  }
LABEL_20:
  v10 = 1;
  strcpy(a2, "operator");
  strcpy(a2 + 8, off_432950[3 * v13 + 1]);
LABEL_8:
  sub_30CC94(v43);
  return v10;
}
