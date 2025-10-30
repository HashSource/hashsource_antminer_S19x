int __fastcall sub_160AAC(int *a1)
{
  int v1; // r3
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r0
  signed int v8; // r0
  signed int v9; // r7
  int v10; // r0
  _BYTE *v11; // r3
  int v12; // r2
  bool v13; // zf
  int v14; // r0
  _BYTE *v15; // r3
  int v16; // r2
  const char *v18; // r7
  unsigned int v19; // r0
  unsigned int v20; // r0
  unsigned int v21; // t1
  unsigned int v22; // r0
  const char *v23; // r8
  int v24; // r2
  unsigned int v25; // r9
  unsigned int v26; // r0
  const char *v27; // r8
  unsigned int v28; // t1
  char *v29; // r3
  unsigned int v30; // t1
  unsigned int v31; // t1
  int v32; // r1
  _BYTE *v33; // r3
  unsigned int v34; // r2
  _BYTE *v35; // r6
  unsigned int v36; // r2
  void *s; // [sp+8h] [bp-Ch] BYREF
  char *endptr; // [sp+Ch] [bp-8h] BYREF

  v1 = *a1;
LABEL_2:
  v3 = v1 & 0x1000;
  if ( (v1 & 0x1000) == 0 )
    goto LABEL_15;
  while ( 1 )
  {
    do
    {
      if ( v1 == 4101 )
        goto LABEL_11;
      if ( v1 > 4101 )
      {
        if ( v1 == 4103 )
          goto LABEL_43;
        if ( v1 >= 4103 )
        {
          if ( v1 == 4104 )
            return 1;
          if ( v1 != 4105 )
            return 0;
          if ( sub_B69CC(a1[4], (int)"\r\n", 2) != 2 )
            goto LABEL_59;
          *a1 = 4101;
LABEL_11:
          a1[5] = sub_B6ECC(a1[4], 3, 0, 0);
          *a1 = 4102;
        }
        v4 = sub_B6ECC(a1[4], 3, 0, (int)&s);
        v5 = sub_B69CC(a1[3], (int)s + v4 - a1[5], a1[5]);
        if ( v5 <= 0 )
          goto LABEL_90;
        v6 = a1[5] - v5;
        a1[5] = v6;
        if ( !v6 )
        {
          *a1 = 4103;
          sub_B6ECC(a1[4], 1, 0, 0);
LABEL_43:
          if ( sub_B6ECC(a1[3], 11, 0, 0) <= 0 )
          {
LABEL_90:
            v3 = -1;
            if ( sub_B6708(a1[3], 8) )
              return v3;
LABEL_59:
            *a1 = 4096;
            return 0;
          }
          v1 = 1;
          *a1 = 1;
          goto LABEL_2;
        }
        goto LABEL_14;
      }
      if ( v1 == 3 )
      {
LABEL_33:
        v14 = sub_B6ECC(a1[4], 3, 0, (int)&s);
        if ( v14 <= 1 )
          goto LABEL_14;
        v15 = s;
        s = (char *)s + 1;
        if ( *v15 != 48 )
          goto LABEL_59;
        v16 = (unsigned __int8)v15[1];
        if ( (v16 & 0x80) != 0 )
        {
          if ( v14 <= 5 )
            goto LABEL_14;
          v32 = v16 & 0x7F;
          if ( (unsigned int)(v32 - 1) > 3 )
            goto LABEL_59;
          v33 = v15 + 2;
          v34 = 0;
          v35 = &v33[v32];
          do
          {
            v36 = v34 << 8;
            s = ++v33;
            a1[5] = v36;
            v34 = v36 | (unsigned __int8)*(v33 - 1);
            a1[5] = v34;
          }
          while ( v35 != v33 );
          if ( v34 > a1[6] )
            goto LABEL_59;
          a1[5] = v34 + v32 + 2;
        }
        else
        {
          a1[5] = v16 + 2;
        }
        *a1 = 4;
      }
      else
      {
        if ( v1 <= 3 )
        {
          if ( v1 < 1 )
            return 0;
          while ( 1 )
          {
            v8 = sub_B6ECC(a1[4], 3, 0, (int)&s);
            v9 = v8;
            if ( v8 <= 0 || !memchr(s, 10, v8) )
            {
              if ( v9 < a1[2] )
                goto LABEL_14;
              goto LABEL_59;
            }
            v10 = sub_B6D58((_DWORD *)a1[4], a1[1], a1[2]);
            if ( v10 <= 0 )
              break;
            if ( v10 == a1[2] )
              goto LABEL_59;
            if ( *a1 == 1 )
            {
              v18 = (const char *)a1[1];
              v19 = *(unsigned __int8 *)v18;
              if ( !*v18 )
                goto LABEL_73;
              while ( !sub_BDB10(v19, 8) )
              {
                v30 = *(unsigned __int8 *)++v18;
                v19 = v30;
                if ( !v30 )
                  goto LABEL_73;
              }
              v20 = *(unsigned __int8 *)v18;
              if ( *v18 )
              {
                while ( sub_BDB10(v20, 8) )
                {
                  v21 = *(unsigned __int8 *)++v18;
                  v20 = v21;
                  if ( !v21 )
                    goto LABEL_86;
                }
                v22 = *(unsigned __int8 *)v18;
                if ( !*v18 )
                {
LABEL_86:
                  v24 = 224;
                  goto LABEL_58;
                }
                v23 = v18;
                while ( !sub_BDB10(v22, 8) )
                {
                  v31 = *(unsigned __int8 *)++v23;
                  v22 = v31;
                  if ( !v31 )
                    goto LABEL_57;
                }
                if ( !*v23 )
                {
LABEL_57:
                  v24 = 233;
                  goto LABEL_58;
                }
                *v23 = 0;
                v25 = strtoul(v18, &endptr, 10);
                if ( !*endptr )
                {
                  v26 = *((unsigned __int8 *)v23 + 1);
                  v27 = v23 + 1;
                  if ( v26 )
                  {
                    while ( sub_BDB10(v26, 8) )
                    {
                      v28 = *(unsigned __int8 *)++v27;
                      v26 = v28;
                      if ( !v28 )
                        goto LABEL_69;
                    }
                    if ( *v27 )
                    {
                      v29 = (char *)&v27[strlen(v27) - 1];
                      endptr = v29;
                      while ( sub_BDB10((unsigned __int8)*v29, 8) )
                      {
                        *endptr = 0;
                        v29 = --endptr;
                      }
                    }
                  }
LABEL_69:
                  if ( v25 == 200 )
                  {
                    *a1 = 2;
                    continue;
                  }
                  sub_D0048(39, 118, 114, (int)"crypto/ocsp/ocsp_ht.c", 260);
                  if ( *v27 )
                    sub_D1240(4, "Code=", v18, ",Reason=", v27);
                  else
                    sub_D1240(2, "Code=", v18);
                }
              }
              else
              {
LABEL_73:
                v24 = 215;
LABEL_58:
                sub_D0048(39, 118, 115, (int)"crypto/ocsp/ocsp_ht.c", v24);
              }
              goto LABEL_59;
            }
            v11 = (_BYTE *)a1[1];
            s = v11;
            v12 = (unsigned __int8)*v11;
            if ( !*v11 )
            {
LABEL_32:
              *a1 = 3;
              goto LABEL_33;
            }
            while ( 1 )
            {
              v13 = v12 == 13;
              if ( v12 != 13 )
                v13 = v12 == 10;
              if ( !v13 )
                break;
              s = ++v11;
              v12 = (unsigned __int8)*v11;
              if ( !*v11 )
                goto LABEL_32;
            }
          }
          if ( sub_B6708(a1[4], 8) )
            goto LABEL_14;
          goto LABEL_59;
        }
        if ( v1 != 4 )
          return 0;
      }
      if ( sub_B6ECC(a1[4], 3, 0, 0) >= a1[5] )
      {
        v3 = 1;
        *a1 = 4104;
        return v3;
      }
LABEL_14:
      v1 = *a1;
      v3 = *a1 & 0x1000;
    }
    while ( v3 );
LABEL_15:
    v7 = sub_B6740(a1[3], a1[1], a1[2]);
    if ( v7 <= 0 )
      return -(sub_B6708(a1[3], 8) != 0);
    if ( v7 != sub_B69CC(a1[4], a1[1], v7) )
      return v3;
    v1 = *a1;
  }
}
