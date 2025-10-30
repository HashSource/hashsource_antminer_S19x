int *__fastcall sub_984D8(int *a1, const char *a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r5
  char *v7; // r0
  int v8; // r0
  char *v9; // r3
  char v11[4]; // [sp+0h] [bp-24h] BYREF
  char *s; // [sp+4h] [bp-20h] BYREF

  v4 = sub_3245A4(a2);
  if ( a2 == (const char *)v4 )
  {
    *a1 = sub_327254(v4);
    return a1;
  }
  else
  {
    v5 = v4 - (_DWORD)a2;
    v6 = v4;
    v7 = strncpy(v11, a2, v4 - (_DWORD)a2);
    v11[v5] = 0;
    sub_984A4((int *)&s, (int)v7);
    if ( s[strlen(s) - 1] == 47 )
      v8 = sub_31E27C(s, v6, 0);
    else
      v8 = sub_31E27C(s, &word_398974, v6);
    v9 = s;
    *a1 = v8;
    if ( v9 )
      free(v9);
    return a1;
  }
}
