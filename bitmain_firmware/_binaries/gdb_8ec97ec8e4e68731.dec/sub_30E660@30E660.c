int __fastcall sub_30E660(unsigned int *a1, unsigned __int8 **a2, unsigned int a3, size_t a4)
{
  unsigned __int8 *v6; // r7
  int v7; // r3
  int v8; // r0
  int v9; // r2
  bool v10; // zf
  char **v11; // r6
  size_t v12; // r8
  size_t v13; // r5
  const char *v14; // r11
  int v15; // r4
  const char *v16; // t1
  char *v17; // r1
  bool v18; // zf
  int v19; // r4

  sub_30D320(__SPAIR64__("(", a3), 1u);
  v6 = *a2 + 1;
  *a2 = v6;
  v7 = *v6;
  v8 = 1;
  v9 = 0;
  v10 = v7 == 87;
  if ( v7 != 87 )
    v10 = v7 == 0;
  if ( v10 )
  {
LABEL_19:
    v19 = v8;
  }
  else
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v11 = off_432950;
        v12 = strlen((const char *)v6);
        v13 = 2;
        v14 = "nw";
        v15 = 0;
        while ( v12 < v13 || memcmp(v14, v6, v13) )
        {
          if ( ++v15 == 79 )
            return 0;
          v16 = v11[3];
          v11 += 3;
          v14 = v16;
          v13 = strlen(v16);
        }
        sub_30D320(__SPAIR64__(&word_3E1F84, a3), 1u);
        v17 = off_432950[3 * v15 + 1];
        if ( v17 && *v17 )
          sub_30D3E4(a3, v17);
        sub_30D320(__SPAIR64__(&word_3E1F84, a3), 1u);
        *a2 += v13;
      }
      v8 = sub_30E114(a1, a2, a3, a4);
      if ( !v8 )
        break;
      v6 = *a2;
      v9 = 1;
      v7 = **a2;
      v18 = v7 == 87;
      if ( v7 != 87 )
        v18 = v7 == 0;
      if ( v18 )
        goto LABEL_19;
    }
    v19 = 0;
    v7 = **a2;
  }
  if ( v7 != 87 )
    return 0;
  sub_30D320(__SPAIR64__(")", a3), 1u);
  ++*a2;
  return v19;
}
