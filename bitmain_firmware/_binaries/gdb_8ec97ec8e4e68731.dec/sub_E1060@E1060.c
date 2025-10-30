_DWORD *__fastcall sub_E1060(char *a1)
{
  _DWORD *result; // r0
  _DWORD *v2; // r11
  unsigned int *v3; // r8
  char *v4; // r4
  unsigned int v5; // r10
  unsigned int v6; // r7
  unsigned int *v7; // r5
  unsigned int v8; // r4
  char *v9; // r6
  char *v10; // r0
  unsigned int v11; // r1
  char *v12; // r0
  const char *v13; // r1
  unsigned int v14; // r4
  char *v15; // r0
  int v16; // r3
  unsigned int v17; // r4
  char *s1[2]; // [sp+Ch] [bp-8h] BYREF

  s1[0] = a1;
  result = (_DWORD *)sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
  v2 = result;
  if ( !result )
    sub_946E0("No thread.");
  if ( result[64] != 1 )
    return (_DWORD *)sub_259858("No trace.\n");
  v3 = (unsigned int *)result[65];
  if ( !v3 )
    return (_DWORD *)sub_259858("No trace.\n");
  v4 = (char *)*v3;
  v5 = result[80];
  if ( !*v3 )
    return (_DWORD *)sub_259858("No trace.\n");
  if ( s1[0] && *s1[0] && (result = (_DWORD *)strcmp(s1[0], "+")) != 0 )
  {
    v6 = v2[79];
    result = (_DWORD *)strcmp(s1[0], (const char *)&word_3C1464);
    v5 = (unsigned int)result;
    if ( result )
    {
      v5 = sub_E08E8(s1);
      if ( v5 >= (unsigned int)v4 )
        sub_946E0("'%u' is out of range.", v5);
      v12 = (char *)sub_9360C(s1[0]);
      s1[0] = v12;
      v13 = v12;
      if ( *v12 == 44 )
      {
        s1[0] = v12 + 1;
        v15 = (char *)sub_9360C(v12 + 1);
        s1[0] = v15;
        v16 = (unsigned __int8)*v15;
        if ( v16 == 43 )
        {
          s1[0] = v15 + 1;
          v17 = (unsigned int)&v4[-v5];
          v12 = (char *)sub_E0898(s1);
          v13 = s1[0];
          if ( v17 > (unsigned int)v12 )
            v4 = &v12[v5];
          else
            v4 = (char *)(v5 + v17);
          if ( !*s1[0] )
            goto LABEL_29;
        }
        else
        {
          if ( v16 == 45 )
            goto LABEL_40;
          v12 = (char *)sub_E08E8(s1);
          v13 = s1[0];
          if ( v12 < v4 )
            v4 = v12 + 1;
          if ( !*s1[0] )
            goto LABEL_29;
        }
      }
      else if ( !*v12 )
      {
        v14 = (unsigned int)&v4[-v5];
        if ( v14 > 0xA )
          v4 = (char *)(v5 + 10);
        else
          v4 = (char *)(v5 + v14);
        goto LABEL_29;
      }
LABEL_38:
      sub_946E0("Junk after argument: %s.", v13);
    }
    if ( v6 > 9 )
      v5 = v6 - 10;
  }
  else if ( (unsigned int)&v4[-v5] > 0xA )
  {
    v6 = v5 + 10;
  }
  else
  {
    v6 = (unsigned int)v4;
  }
  if ( v6 > v5 )
  {
LABEL_14:
    if ( *v3 <= v5 )
    {
      while ( 1 )
      {
LABEL_39:
        v15 = (char *)sub_94700(
                        (int)"btrace.c",
                        3133,
                        "%s: Assertion `%s' failed.",
                        "btrace_block_s* VEC_btrace_block_s_index(VEC_btrace_block_s*, unsigned int, const char*, unsigned int)",
                        "index");
LABEL_40:
        s1[0] = v15 + 1;
        v12 = (char *)sub_E0898(s1);
        v13 = s1[0];
        if ( *s1[0] )
          goto LABEL_38;
        v4 = (char *)(v5 + 1);
        if ( v5 + 1 > (unsigned int)v12 )
          v5 = v4 - v12;
        else
          v5 = 0;
LABEL_29:
        result = (_DWORD *)sub_243C34(v12);
        if ( v2[64] != 1 )
          return result;
        v3 = (unsigned int *)v2[65];
        if ( v5 >= (unsigned int)v4 )
          break;
        if ( v3 )
        {
          v6 = (unsigned int)v4;
          goto LABEL_14;
        }
      }
      v6 = (unsigned int)v4;
    }
    else
    {
      v7 = &v3[2 * v5];
      v8 = v5;
      while ( 1 )
      {
        v9 = sub_98E84(v7[2]);
        v10 = sub_98E84(v7[3]);
        v11 = v8++;
        result = (_DWORD *)sub_259858("%u\tbegin: %s, end: %s\n", v11, v9, v10);
        if ( v8 == v6 )
          break;
        v7 += 2;
        if ( *v3 <= v8 )
          goto LABEL_39;
      }
    }
  }
  v2[79] = v5;
  v2[80] = v6;
  return result;
}
