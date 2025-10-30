char **__fastcall sub_148490(char **a1, char **a2)
{
  __int64 v3; // r8
  char *v5; // r7
  int v6; // r5
  unsigned int v7; // r3
  int v8; // r0
  char *v9; // r0
  size_t v10; // r2
  char *v11; // r5
  char *v13; // r6
  char *v14; // r0
  char *v15; // r1

  if ( a2 != a1 )
  {
    v3 = *(_QWORD *)a2;
    v5 = *a1;
    v6 = HIDWORD(v3) - v3;
    v7 = (HIDWORD(v3) - (int)v3) >> 3;
    v8 = a1[2] - *a1;
    if ( v7 > v8 >> 3 )
    {
      if ( v7 )
      {
        if ( v7 > 0x1FFFFFFF )
          sub_33D01C(v8, a2);
        v14 = (char *)sub_9836C(HIDWORD(v3) - v3);
        v5 = *a1;
        v13 = v14;
      }
      else
      {
        v13 = 0;
      }
      if ( HIDWORD(v3) != (_DWORD)v3 )
        memmove(v13, (const void *)v3, HIDWORD(v3) - v3);
      if ( v5 )
        sub_339E64(v5);
      v11 = &v13[v6];
      *a1 = v13;
      a1[2] = v11;
      goto LABEL_6;
    }
    v9 = a1[1];
    v10 = v9 - v5;
    if ( v7 <= (v9 - v5) >> 3 )
    {
      if ( HIDWORD(v3) != (_DWORD)v3 )
      {
        memmove(v5, (const void *)v3, HIDWORD(v3) - v3);
        v11 = &(*a1)[v6];
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    v15 = (char *)(v3 + v10);
    if ( (_DWORD)v3 == (_DWORD)v3 + v10 )
    {
      if ( (char *)HIDWORD(v3) != v15 )
      {
LABEL_19:
        memmove(v9, v15, HIDWORD(v3) - (_DWORD)v15);
        v11 = &(*a1)[v6];
        goto LABEL_6;
      }
    }
    else
    {
      memmove(v5, (const void *)v3, v10);
      v5 = *a1;
      v9 = a1[1];
      HIDWORD(v3) = a2[1];
      v15 = &(*a2)[v9 - *a1];
      if ( (char *)HIDWORD(v3) != v15 )
        goto LABEL_19;
    }
LABEL_5:
    v11 = &v5[v6];
LABEL_6:
    a1[1] = v11;
  }
  return a1;
}
