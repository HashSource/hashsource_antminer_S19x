int __fastcall sub_89A4(const char *a1)
{
  int v1; // r11
  unsigned __int8 *v2; // r0
  const char *v3; // r4
  unsigned int v4; // r0
  unsigned int v5; // r9
  unsigned __int8 *v6; // r0
  int v7; // r0
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r6
  size_t v10; // r0
  size_t v11; // r4
  int v12; // r8
  unsigned __int8 *v13; // r7
  char *v14; // r6
  char *v15; // r0
  int v16; // r11
  unsigned int v17; // r4
  char *v18; // r5
  const unsigned __int16 **v19; // r0
  char *v20; // r2
  const unsigned __int16 *v21; // r0
  int v22; // r3
  int v23; // t1
  unsigned int v24; // r3
  _BOOL4 v25; // r2
  unsigned __int8 *v26; // r6
  size_t v27; // r8
  const __int32_t *v28; // r7
  int v29; // t1
  char *v30; // r0
  bool v31; // zf
  size_t v32; // r3
  char v33; // r0
  _BYTE *v34; // r2
  char v35; // r0
  size_t v36; // r4
  const char *v37; // r3
  _DWORD *v38; // r0
  _DWORD *v39; // r4
  int v41; // r5
  FILE *stream; // [sp+8h] [bp-274h]
  int v43; // [sp+10h] [bp-26Ch]
  int v44; // [sp+20h] [bp-25Ch]
  char *v46; // [sp+30h] [bp-24Ch] BYREF
  unsigned int v47; // [sp+34h] [bp-248h] BYREF
  unsigned __int16 v48[14]; // [sp+38h] [bp-244h] BYREF
  char src[32]; // [sp+54h] [bp-228h] BYREF
  char v50[512]; // [sp+74h] [bp-208h] BYREF
  _BYTE v51[4]; // [sp+278h] [bp-4h] BYREF

  stream = (FILE *)fopen64(a1, "r");
  if ( !stream )
  {
    sub_A828(3, "authreadkeys: file '%s': %m", a1);
    return 0;
  }
  if ( !ssl_init_done )
    sub_FDCC();
  v47 = 0;
  v1 = 0;
  while ( 1 )
  {
    v46 = fgets(v50, 512, stream);
    if ( !v46 || v47 > 0xF )
      break;
    v2 = sub_8798((unsigned __int8 **)&v46);
    v3 = (const char *)v2;
    if ( v2 )
    {
      v4 = strtol((const char *)v2, 0, 10);
      v5 = v4;
      if ( v4 )
      {
        if ( v4 >= 0x10000 )
        {
          sub_88AC(&v47, (int)"authreadkeys: key %s > %d reserved for Autokey", v3, 0xFFFF);
        }
        else
        {
          v6 = sub_8798((unsigned __int8 **)&v46);
          if ( v6 )
          {
            v43 = sub_10024(v6, 0);
            if ( v43 )
            {
              if ( v43 != 894 )
              {
                v7 = OBJ_nid2sn();
                if ( !EVP_get_digestbyname(v7) )
                {
                  v43 = 0;
                  sub_88AC(0, (int)"authreadkeys: no algorithm for key %d", v5);
                }
              }
              v8 = sub_8798((unsigned __int8 **)&v46);
              v9 = v8;
              if ( !v8 )
                goto LABEL_73;
LABEL_16:
              v10 = strlen((const char *)v8);
              v11 = v10;
              if ( v10 <= 0x14 )
              {
                v12 = sub_967C(0, v10 + 20, 0, 0);
                *(_DWORD *)(v12 + 8) = v5;
                *(_WORD *)(v12 + 14) = v11;
                *(_WORD *)(v12 + 12) = v43;
                *(_DWORD *)(v12 + 4) = 0;
                memcpy((void *)(v12 + 16), v9, v11);
                goto LABEL_18;
              }
              v26 = v9 - 1;
              if ( v10 >= 0x40 )
                v11 = 64;
              v27 = 0;
              v28 = *_ctype_tolower_loc();
              while ( 1 )
              {
                v29 = *++v26;
                v30 = strchr("0123456789abcdef", v28[v29]);
                if ( !v30 )
                  break;
                v31 = (v27 & 1) == 0;
                v32 = v27 >> 1;
                if ( (v27 & 1) != 0 )
                  v32 += (size_t)v51;
                v33 = (_BYTE)v30 - (unsigned __int8)"0123456789abcdef";
                if ( (v27 & 1) != 0 )
                  v34 = (_BYTE *)*(unsigned __int8 *)(v32 - 548);
                else
                  v34 = v51;
                ++v27;
                if ( v31 )
                  v35 = 16 * v33;
                else
                  v35 = v33 | (unsigned __int8)v34;
                if ( v31 )
                  v32 += (size_t)v34;
                *(_BYTE *)(v32 - 548) = v35;
                if ( v11 == v27 )
                  goto LABEL_62;
              }
              if ( v11 <= v27 )
              {
LABEL_62:
                v36 = v11 >> 1;
                v12 = sub_967C(0, v36 + 20, 0, 0);
                *(_DWORD *)(v12 + 8) = v5;
                *(_WORD *)(v12 + 14) = v36;
                *(_WORD *)(v12 + 12) = v43;
                *(_DWORD *)(v12 + 4) = 0;
                memcpy((void *)(v12 + 16), src, v36);
LABEL_18:
                v13 = sub_8798((unsigned __int8 **)&v46);
                if ( v13 )
                {
                  v44 = v1;
                  while ( 1 )
                  {
                    v14 = strchr((const char *)v13, 44);
                    if ( v14 )
                      *v14 = 0;
                    v15 = strchr((const char *)v13, 47);
                    if ( v15 )
                    {
                      v16 = (unsigned __int8)v15[1];
                      v17 = 0;
                      *v15 = 0;
                      v18 = v15 + 1;
                      if ( v16 )
                      {
                        v19 = _ctype_b_loc();
                        v20 = v18;
                        v21 = *v19;
                        do
                        {
                          v24 = ((v21[v16] ^ 0x800u) >> 11) & 1;
                          if ( v17 > 0x3E8 )
                            v24 = 1;
                          if ( v24 )
                          {
                            sub_88AC(
                              &v47,
                              (int)"authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
                              v20,
                              v18,
                              v5);
                            goto LABEL_30;
                          }
                          v22 = v16 - 48;
                          v23 = (unsigned __int8)*++v20;
                          v16 = v23;
                          v17 = v22 + 10 * v17;
                        }
                        while ( v23 );
                        if ( sub_9B3C(v13, 0, v48) )
                        {
                          if ( v17 != -1 )
                          {
                            if ( v48[0] == 2 )
                            {
                              if ( v17 > 0x20 )
                                goto LABEL_75;
                            }
                            else
                            {
                              v25 = v17 > 0x80;
                              if ( v48[0] != 10 )
                                v25 = 0;
                              if ( !v25 )
                                goto LABEL_42;
LABEL_75:
                              sub_88AC(0, (int)"authreadkeys: excessive subnet mask <%s/%s> for key %d", v13, v18, v5);
                            }
                          }
LABEL_42:
                          *(_DWORD *)(v12 + 4) = sub_74FC(*(_DWORD *)(v12 + 4), v48, v17);
                          goto LABEL_30;
                        }
                      }
                      else if ( sub_9B3C(v13, 0, v48) )
                      {
                        v17 = 0;
                        goto LABEL_42;
                      }
                    }
                    else if ( sub_9B3C(v13, 0, v48) )
                    {
                      v17 = -1;
                      goto LABEL_42;
                    }
                    sub_88AC(&v47, (int)"authreadkeys: invalid IP address <%s> for key %d", v13, v5);
LABEL_30:
                    if ( v14 )
                    {
                      v13 = (unsigned __int8 *)(v14 + 1);
                      if ( v14 != (char *)-1 )
                        continue;
                    }
                    v1 = v44;
                    break;
                  }
                }
                if ( v43 )
                {
                  *(_DWORD *)v12 = v1;
                  v1 = v12;
                }
                else
                {
                  sub_8930((_DWORD *)v12);
                }
              }
              else
              {
                sub_88AC(&v47, (int)"authreadkeys: invalid hex digit for key %d", v5);
              }
            }
            else
            {
              sub_88AC(0, (int)"authreadkeys: invalid type for key %d", v5);
              v8 = sub_8798((unsigned __int8 **)&v46);
              v9 = v8;
              if ( v8 )
                goto LABEL_16;
LABEL_73:
              sub_88AC(&v47, (int)"authreadkeys: no key for key %d", v5);
            }
          }
          else
          {
            sub_88AC(&v47, (int)"authreadkeys: no key type for key %d", v5);
          }
        }
      }
      else
      {
        sub_88AC(&v47, (int)"authreadkeys: cannot change key %s", v3);
      }
    }
  }
  fclose(stream);
  if ( v47 )
  {
    if ( v47 > 0xF )
      v37 = " (emergency break)";
    else
      v37 = "";
    sub_A828(3, "authreadkeys: rejecting file '%s' after %u error(s)%s", a1, v47, v37);
    if ( v1 )
    {
      v38 = (_DWORD *)v1;
      do
      {
        v39 = (_DWORD *)*v38;
        sub_8930(v38);
        v38 = v39;
      }
      while ( v39 );
    }
    return 0;
  }
  else
  {
    sub_8474();
    if ( v1 )
    {
      do
      {
        v41 = *(_DWORD *)v1;
        sub_8328(
          *(_DWORD *)(v1 + 8),
          *(_WORD *)(v1 + 12),
          (const void *)(v1 + 16),
          *(unsigned __int16 *)(v1 + 14),
          *(_DWORD *)(v1 + 4));
        *(_DWORD *)(v1 + 4) = 0;
        sub_8930((_DWORD *)v1);
        v1 = v41;
      }
      while ( v41 );
    }
    return 1;
  }
}
