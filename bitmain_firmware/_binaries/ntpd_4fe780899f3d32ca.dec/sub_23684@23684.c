void sub_23684()
{
  char v0; // r5
  int v1; // r8
  unsigned int v2; // r0
  unsigned int v3; // r7
  unsigned int v4; // r11
  char *i; // r5
  unsigned int v6; // r3
  unsigned __int16 *v7; // r0
  unsigned __int16 *v8; // r0
  int v9; // r0
  int v10; // r7
  int k; // r6
  unsigned int v12; // r3
  unsigned __int16 *v13; // r0
  _BYTE *v14; // r4
  char *v16; // r6
  char *v17; // r4
  int v19; // r6
  int v21; // r3
  const char *v22; // r9
  int v23; // r0
  unsigned __int8 *v24; // r4
  int v25; // t1
  int v26; // r4
  __int16 j; // r3
  const char *v28; // r6
  int v29; // r0
  unsigned __int8 *v30; // r4
  int v31; // t1
  int v32; // [sp+Ch] [bp-50h] BYREF
  const char *v33; // [sp+10h] [bp-4Ch] BYREF
  size_t v34; // [sp+14h] [bp-48h]
  _BYTE s[68]; // [sp+18h] [bp-44h] BYREF

  v0 = word_B96C8;
  if ( !word_B96C8 )
  {
    v1 = 0;
    word_B94A0 = __rev16(sub_235A8());
    if ( byte_B98DD )
      byte_B98DF = v0;
    v2 = sub_1F95C(dword_B98D8);
    v3 = v2 + 102;
    v4 = v2;
    for ( i = (char *)sub_63BA4(0, v2 + 102, 0, 1); ; i[v6] = 1 )
    {
      v7 = (unsigned __int16 *)sub_1E820((int)&unk_B4148, &v32);
      if ( !v7 )
        break;
      if ( (v7[1] & 0x80) != 0 )
      {
        v8 = (unsigned __int16 *)sub_1E820(dword_B98D8, &v32);
        if ( !v8 )
        {
          sub_1F4D0(6);
          free(i);
          return;
        }
        if ( (v8[1] & 0x80) != 0 )
        {
          sub_1F4D0(5);
          free(i);
          return;
        }
        v6 = *v8 + 102;
        if ( v3 <= v6 )
          sub_6ECC0("ntp_control.c", 3369, 2, "n < wants_count");
      }
      else
      {
        v6 = *v7;
        if ( v3 <= v6 )
          sub_6ECC0("ntp_control.c", 3353, 2, "v->code < wants_count");
      }
      v1 = 1;
    }
    if ( v1 )
    {
      v16 = i + 101;
      v17 = i;
      do
      {
        while ( !*++v17 )
        {
          if ( v17 == v16 )
            goto LABEL_31;
        }
        sub_21888(v17 - i);
      }
      while ( v17 != v16 );
LABEL_31:
      if ( v3 != 102 )
      {
        v19 = 0;
        do
        {
          while ( !*++v17 )
          {
            if ( ++v19 == v4 )
              goto LABEL_36;
          }
          v21 = dword_B98D8 + 8 * v19++;
          v22 = *(const char **)(v21 + 4);
          v34 = strlen(v22);
          v33 = v22;
          sub_1EEC8((char *)&v33, 1, 0);
        }
        while ( v19 != v4 );
      }
    }
    else
    {
      v23 = 17;
      v24 = (unsigned __int8 *)&unk_93C20;
      do
      {
        sub_21888(v23);
        v25 = *++v24;
        v23 = v25;
      }
      while ( v25 );
      v26 = dword_B98D8;
      if ( dword_B98D8 )
      {
        for ( j = *(_WORD *)(dword_B98D8 + 2); (j & 0x80) == 0; j = *(_WORD *)(v26 + 2) )
        {
          if ( (j & 0x20) != 0 )
          {
            v28 = *(const char **)(v26 + 4);
            v34 = strlen(v28);
            v33 = v28;
            sub_1EEC8((char *)&v33, 1, 0);
          }
          v26 += 8;
          if ( !v26 )
            break;
        }
      }
    }
LABEL_36:
    free(i);
LABEL_37:
    sub_1EBA4(0);
    return;
  }
  v9 = sub_31C78((unsigned __int16)word_B96C8);
  v10 = v9;
  if ( v9 )
  {
    word_B94A0 = __rev16(sub_23504(v9));
    if ( byte_B98DD )
      *(_BYTE *)(v10 + 74) = 0;
    memset(s, 0, 0x3Bu);
    for ( k = 0; ; k = 1 )
    {
      v13 = (unsigned __int16 *)sub_1E820((int)&unk_B3F68, &v32);
      if ( !v13 )
        break;
      if ( (v13[1] & 0x80) != 0 )
      {
        sub_1F4D0(5);
        return;
      }
      v12 = *v13;
      if ( v12 > 0x3A )
        sub_6ECC0("ntp_control.c", 3310, 2, "v->code < (sizeof(wants) / sizeof((wants)[0]))");
      s[v12] = 1;
    }
    if ( k )
    {
      v14 = s;
      do
      {
        if ( *++v14 )
          sub_20810(v14 - s, v10);
      }
      while ( &s[58] != v14 );
    }
    else
    {
      v29 = 4;
      v30 = (unsigned __int8 *)&unk_93BF4;
      do
      {
        sub_20810(v29, v10);
        v31 = *++v30;
        v29 = v31;
      }
      while ( v31 );
    }
    goto LABEL_37;
  }
  sub_1F4D0(4);
}
