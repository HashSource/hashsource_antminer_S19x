char **__fastcall sub_DF848(char **a1, char **a2)
{
  __int64 v3; // r8
  char *v5; // r7
  int v6; // r5
  unsigned int v7; // r3
  char *v8; // r0
  size_t v9; // r2
  char *v10; // r5
  char *v12; // r6
  char *v13; // r0
  char *v14; // r1

  if ( a2 != a1 )
  {
    v3 = *(_QWORD *)a2;
    v5 = *a1;
    v6 = HIDWORD(v3) - v3;
    v7 = (HIDWORD(v3) - (int)v3) >> 2;
    if ( v7 > (a1[2] - *a1) >> 2 )
    {
      if ( v7 )
      {
        if ( v7 > 0x3FFFFFFF )
          sub_33D01C();
        v13 = (char *)sub_9836C(HIDWORD(v3) - v3);
        v5 = *a1;
        v12 = v13;
      }
      else
      {
        v12 = 0;
      }
      if ( HIDWORD(v3) != (_DWORD)v3 )
        memmove(v12, (const void *)v3, HIDWORD(v3) - v3);
      if ( v5 )
        sub_339E64(v5);
      v10 = &v12[v6];
      *a1 = v12;
      a1[2] = v10;
      goto LABEL_6;
    }
    v8 = a1[1];
    v9 = v8 - v5;
    if ( v7 <= (v8 - v5) >> 2 )
    {
      if ( HIDWORD(v3) != (_DWORD)v3 )
      {
        memmove(v5, (const void *)v3, HIDWORD(v3) - v3);
        v10 = &(*a1)[v6];
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    v14 = (char *)(v3 + v9);
    if ( (_DWORD)v3 == (_DWORD)v3 + v9 )
    {
      if ( (char *)HIDWORD(v3) != v14 )
      {
LABEL_19:
        memmove(v8, v14, HIDWORD(v3) - (_DWORD)v14);
        v10 = &(*a1)[v6];
        goto LABEL_6;
      }
    }
    else
    {
      memmove(v5, (const void *)v3, v9);
      v5 = *a1;
      v8 = a1[1];
      HIDWORD(v3) = a2[1];
      v14 = &(*a2)[v8 - *a1];
      if ( (char *)HIDWORD(v3) != v14 )
        goto LABEL_19;
    }
LABEL_5:
    v10 = &v5[v6];
LABEL_6:
    a1[1] = v10;
  }
  return a1;
}
