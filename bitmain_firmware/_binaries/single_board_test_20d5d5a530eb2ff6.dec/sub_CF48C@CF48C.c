int sub_CF48C()
{
  int result; // r0
  int *v1; // r4
  int v2; // t1
  int *v3; // r4
  int v4; // t1
  int v5; // r3
  int *v6; // r2
  int v7; // t1
  int *v8; // r4
  int v9; // t1
  int *v10; // r9
  const char *v11; // r11
  unsigned int v12; // r6
  int v13; // r5
  _DWORD *v14; // r4
  const char *v15; // r3
  _BOOL4 v16; // r2
  int *v17; // r4
  int v18; // r0
  int v19; // t1
  size_t v20; // r0
  const char *v21; // r10
  unsigned int v22; // r6
  const char *v23; // r11
  unsigned int v24; // r0
  int v25; // [sp+4h] [bp-8h]

  result = sub_10C594(&unk_6E1440, sub_CF3E8);
  if ( result )
  {
    result = dword_6DF430;
    if ( dword_6DF430 )
    {
      sub_10C554(dword_6DF428);
      v1 = &dword_21F79C;
      if ( dword_21F79C )
      {
        do
        {
          sub_DF7A0(dword_6DF42C, v1);
          v2 = v1[2];
          v1 += 2;
        }
        while ( v2 );
      }
      sub_10C564(dword_6DF428);
      v3 = &dword_21F8C4;
      sub_10C554(dword_6DF428);
      if ( dword_21F8C4 )
      {
        do
        {
          sub_DF7A0(dword_6DF42C, v3);
          v4 = v3[2];
          v3 += 2;
        }
        while ( v4 );
      }
      sub_10C564(dword_6DF428);
      v5 = dword_21F9BC;
      v6 = &dword_21F9BC;
      if ( dword_21F9BC )
      {
        do
        {
          *v6 = v5 | 0x2000000;
          v7 = v6[2];
          v6 += 2;
          v5 = v7;
        }
        while ( v7 );
      }
      sub_10C554(dword_6DF428);
      v8 = &dword_21F9BC;
      if ( dword_21F9BC )
      {
        do
        {
          sub_DF7A0(dword_6DF42C, v8);
          v9 = v8[2];
          v8 += 2;
        }
        while ( v9 );
      }
      sub_10C564(dword_6DF428);
      v10 = _errno_location();
      v25 = *v10;
      sub_10C554(dword_6DF428);
      if ( !dword_21F794 )
      {
LABEL_21:
        sub_10C564(dword_6DF428);
        return 1;
      }
      v11 = byte_6DF440;
      v12 = 0;
      v13 = 1;
      v14 = &unk_6E1460;
      while ( 1 )
      {
        v15 = (const char *)*(v14 - 6);
        *(v14 - 7) = v13 | 0x2000000;
        __pld(v14);
        v16 = v15 == 0;
        if ( v12 >= 0x2000 )
          v16 = 0;
        if ( !v16 )
          goto LABEL_17;
        if ( sub_EA12C(v13, v11, 0x2000 - v12) )
          break;
        if ( !*(v14 - 6) )
LABEL_24:
          *(v14 - 6) = "unknown";
LABEL_18:
        ++v13;
        v14 += 2;
        if ( v13 == 128 )
        {
          dword_21F794 = 0;
          sub_10C564(dword_6DF428);
          v17 = &dword_6E1444;
          v18 = dword_6DF428;
          *v10 = v25;
          sub_10C554(v18);
          if ( dword_6E1444 )
          {
            do
            {
              sub_DF7A0(dword_6DF42C, v17);
              v19 = v17[2];
              v17 += 2;
            }
            while ( v19 );
          }
          goto LABEL_21;
        }
      }
      v20 = strlen(v11);
      v21 = &v11[v20];
      v22 = v12 + v20;
      *(v14 - 6) = v11;
      if ( &v11[v20] > byte_6DF440 )
      {
        v23 = &v11[v20];
        do
        {
          v24 = *((unsigned __int8 *)v23 - 1);
          v21 = v23--;
          if ( !sub_BDB10(v24, 8) )
          {
            v15 = (const char *)*(v14 - 6);
            goto LABEL_32;
          }
          --v22;
        }
        while ( v23 != byte_6DF440 );
        v15 = (const char *)*(v14 - 6);
        v21 = byte_6DF440;
      }
      else
      {
        v15 = v11;
      }
LABEL_32:
      v12 = v22 + 1;
      v11 = v21 + 1;
      *v21 = 0;
LABEL_17:
      if ( !v15 )
        goto LABEL_24;
      goto LABEL_18;
    }
  }
  return result;
}
