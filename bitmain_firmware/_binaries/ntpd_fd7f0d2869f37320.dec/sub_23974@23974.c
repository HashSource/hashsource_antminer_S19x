void sub_23974()
{
  char v0; // r5
  unsigned int v1; // r0
  int v2; // r8
  unsigned int v3; // r0
  unsigned int v4; // r7
  unsigned int v5; // r11
  char *i; // r6
  unsigned int v7; // r3
  const unsigned __int16 **v8; // r0
  const unsigned __int16 **v9; // r0
  int v10; // r0
  int v11; // r8
  unsigned int v12; // r0
  _BYTE *v13; // r5
  int v14; // r9
  unsigned int v15; // r3
  int v16; // r0
  unsigned int v17; // r3
  const unsigned __int16 **v18; // r0
  int m; // r4
  char *v21; // r5
  int j; // r4
  int v24; // r0
  char *v25; // r5
  int v26; // r4
  int v28; // r3
  const char *v29; // r9
  size_t v30; // r0
  int v31; // r0
  unsigned __int8 *v32; // r4
  int v33; // t1
  int v34; // r4
  __int16 k; // r3
  size_t v36; // r0
  int v37; // r0
  unsigned __int8 *v38; // r4
  int v39; // t1
  int v40; // [sp+Ch] [bp-50h] BYREF
  const char *v41; // [sp+10h] [bp-4Ch] BYREF
  size_t v42; // [sp+14h] [bp-48h]
  _BYTE s[68]; // [sp+18h] [bp-44h] BYREF

  v0 = word_BA6C8;
  if ( !word_BA6C8 )
  {
    v1 = sub_2389C();
    v2 = 0;
    if ( byte_BA8DD )
      byte_BA8DF = v0;
    word_BA4A0 = (v1 >> 8) | ((_WORD)v1 << 8);
    v3 = sub_1FBB8(dword_BA8D8);
    v4 = v3 + 102;
    v5 = v3;
    for ( i = (char *)sub_64B04(0, v3 + 102, 0, 1); ; i[v7] = 1 )
    {
      v8 = sub_1EA58((int)&unk_B5148, &v40);
      if ( !v8 )
        break;
      if ( (*((_WORD *)v8 + 1) & 0x80) != 0 )
      {
        v9 = sub_1EA58(dword_BA8D8, &v40);
        if ( !v9 )
        {
          sub_1F734(6);
          free(i);
          return;
        }
        if ( (*((_WORD *)v9 + 1) & 0x80) != 0 )
        {
          sub_1F734(5);
          free(i);
          return;
        }
        v7 = *(unsigned __int16 *)v9 + 102;
        if ( v4 <= v7 )
          sub_6FC54("ntp_control.c", 3369, 2, "n < wants_count");
      }
      else
      {
        v7 = *(unsigned __int16 *)v8;
        if ( v4 <= v7 )
          sub_6FC54("ntp_control.c", 3353, 2, "v->code < wants_count");
      }
      v2 = 1;
    }
    if ( v2 )
    {
      v21 = i;
      for ( j = 1; j != 102; ++j )
      {
        while ( !*++v21 )
        {
          if ( ++j == 102 )
            goto LABEL_33;
        }
        v24 = j;
        sub_21480(v24);
      }
LABEL_33:
      if ( v4 != 102 )
      {
        v25 = i + 101;
        v26 = 0;
        do
        {
          while ( !*++v25 )
          {
            if ( ++v26 == v5 )
              goto LABEL_38;
          }
          v28 = dword_BA8D8 + 8 * v26++;
          v29 = *(const char **)(v28 + 4);
          v30 = strlen(v29);
          v41 = v29;
          v42 = v30;
          sub_1F104((char *)&v41, 1, 0);
        }
        while ( v26 != v5 );
      }
    }
    else
    {
      v31 = 17;
      v32 = (unsigned __int8 *)&unk_9517C;
      do
      {
        sub_21480(v31);
        v33 = *++v32;
        v31 = v33;
      }
      while ( v33 );
      v34 = dword_BA8D8;
      if ( dword_BA8D8 )
      {
        for ( k = *(_WORD *)(dword_BA8D8 + 2); (k & 0x80) == 0; k = *(_WORD *)(v34 + 2) )
        {
          if ( (k & 0x20) != 0 )
          {
            v36 = strlen(*(const char **)(v34 + 4));
            v41 = *(const char **)(v34 + 4);
            v42 = v36;
            sub_1F104((char *)&v41, 1, 0);
          }
          v34 += 8;
          if ( !v34 )
            break;
        }
      }
    }
LABEL_38:
    free(i);
LABEL_39:
    sub_1EDD4(0);
    return;
  }
  v10 = sub_3217C((unsigned __int16)word_BA6C8);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_237F8(v10);
    v13 = s;
    v14 = 0;
    v15 = v12 >> 8;
    v16 = (v12 >> 8) | (v12 << 8);
    if ( byte_BA8DD )
      LOBYTE(v15) = 0;
    word_BA4A0 = v16;
    if ( byte_BA8DD )
      *(_BYTE *)(v11 + 74) = v15;
    memset(s, 0, 0x3Bu);
    while ( 1 )
    {
      v18 = sub_1EA58((int)&unk_B4F68, &v40);
      if ( !v18 )
        break;
      if ( (*((_WORD *)v18 + 1) & 0x80) != 0 )
      {
        sub_1F734(5);
        return;
      }
      v17 = *(unsigned __int16 *)v18;
      if ( v17 > 0x3A )
        sub_6FC54("ntp_control.c", 3310, 2, "v->code < (sizeof(wants) / sizeof((wants)[0]))");
      v14 = 1;
      s[v17] = 1;
    }
    if ( v14 )
    {
      for ( m = 1; m != 59; ++m )
      {
        if ( *++v13 )
          sub_20A90(m, v11);
      }
    }
    else
    {
      v37 = 4;
      v38 = (unsigned __int8 *)&unk_95150;
      do
      {
        sub_20A90(v37, v11);
        v39 = *++v38;
        v37 = v39;
      }
      while ( v39 );
    }
    goto LABEL_39;
  }
  sub_1F734(4);
}
