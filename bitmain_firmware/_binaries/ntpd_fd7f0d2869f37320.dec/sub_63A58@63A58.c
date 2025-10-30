int __fastcall sub_63A58(const char *a1)
{
  int v1; // r0
  const char *v2; // r10
  const char *v3; // r0
  const char *v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r0
  const char *v10; // r0
  const char *v11; // r4
  size_t v12; // r0
  size_t v13; // r5
  const char *v14; // r4
  size_t v15; // r9
  const __int32_t *v16; // r7
  int v17; // t1
  char *v18; // r0
  _BYTE *v19; // r2
  bool v20; // zf
  char v21; // r0
  _BYTE *v22; // r3
  size_t v23; // r5
  int v24; // r9
  const char *v25; // r7
  char *v26; // r6
  char *v27; // r0
  int v28; // r5
  unsigned int v29; // r4
  char *v30; // r10
  const unsigned __int16 **v31; // r0
  char *v32; // r2
  const unsigned __int16 *v33; // r0
  int v34; // r1
  int v35; // t1
  unsigned int v36; // r3
  _BOOL4 v37; // r1
  _DWORD *v38; // r11
  const char *v39; // r3
  _DWORD *v40; // r0
  _DWORD *v41; // r4
  _DWORD *v43; // r3
  _DWORD *v44; // r4
  FILE *stream; // [sp+8h] [bp-274h]
  int v46; // [sp+10h] [bp-26Ch]
  const char *v47; // [sp+18h] [bp-264h]
  _DWORD *v48; // [sp+1Ch] [bp-260h]
  char *v50; // [sp+30h] [bp-24Ch] BYREF
  unsigned int v51; // [sp+34h] [bp-248h] BYREF
  unsigned __int16 v52[14]; // [sp+38h] [bp-244h] BYREF
  char src[32]; // [sp+54h] [bp-228h] BYREF
  char v54[512]; // [sp+74h] [bp-208h] BYREF
  _BYTE v55[4]; // [sp+278h] [bp-4h] BYREF

  v1 = fopen64(a1, "r");
  stream = (FILE *)v1;
  if ( !v1 )
  {
    sub_65D40(3, "authreadkeys: file '%s': %m", a1);
    return 0;
  }
  if ( !ssl_init_done )
    sub_6D690(v1);
  v51 = 0;
  v2 = "0123456789abcdef";
  v48 = 0;
  while ( 1 )
  {
    v50 = fgets(v54, 512, stream);
    if ( !v50 || v51 > 0xF )
      break;
    v3 = (const char *)sub_63838((unsigned __int8 **)&v50);
    v4 = v3;
    if ( v3 )
    {
      v5 = strtol(v3, 0, 10);
      v6 = v5;
      if ( v5 )
      {
        if ( v5 < 0x10000 )
        {
          v7 = sub_63838((unsigned __int8 **)&v50);
          if ( v7 )
          {
            v8 = sub_6D8E8(v7, 0);
            v46 = v8;
            if ( v8 )
            {
              if ( v8 != 894 )
              {
                v9 = OBJ_nid2sn(v8);
                if ( !EVP_get_digestbyname(v9) )
                {
                  sub_63950(0, (int)"authreadkeys: no algorithm for key %d", v6);
                  v46 = 0;
                }
              }
              v10 = (const char *)sub_63838((unsigned __int8 **)&v50);
              v11 = v10;
              if ( v10 )
                goto LABEL_17;
LABEL_77:
              sub_63950(&v51, (int)"authreadkeys: no key for key %d", v6);
            }
            else
            {
              sub_63950(0, (int)"authreadkeys: invalid type for key %d", v6);
              v10 = (const char *)sub_63838((unsigned __int8 **)&v50);
              v11 = v10;
              if ( !v10 )
                goto LABEL_77;
LABEL_17:
              v12 = strlen(v10);
              v13 = v12;
              if ( v12 <= 0x14 )
              {
                v24 = sub_64B04(0, v12 + 20, 0, 0);
                *(_DWORD *)(v24 + 8) = v6;
                *(_WORD *)(v24 + 12) = v46;
                *(_WORD *)(v24 + 14) = v13;
                *(_DWORD *)(v24 + 4) = 0;
                memcpy((void *)(v24 + 16), v11, v13);
LABEL_32:
                v25 = (const char *)sub_63838((unsigned __int8 **)&v50);
                if ( v25 )
                {
                  v47 = v2;
                  while ( 1 )
                  {
                    v26 = strchr(v25, 44);
                    if ( v26 )
                      *v26 = 0;
                    v27 = strchr(v25, 47);
                    if ( v27 )
                    {
                      v28 = (unsigned __int8)v27[1];
                      v29 = 0;
                      v30 = v27 + 1;
                      *v27 = 0;
                      if ( v28 )
                      {
                        v31 = _ctype_b_loc();
                        v32 = v30;
                        v33 = *v31;
                        do
                        {
                          v36 = ((v33[v28] ^ 0x800u) >> 11) & 1;
                          if ( v29 > 0x3E8 )
                            v36 = 1;
                          if ( v36 )
                          {
                            sub_63950(
                              &v51,
                              (int)"authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
                              v32,
                              v30,
                              v6);
                            goto LABEL_44;
                          }
                          v34 = v28 - 48;
                          v35 = (unsigned __int8)*++v32;
                          v28 = v35;
                          v29 = v34 + 10 * v29;
                        }
                        while ( v35 );
                        if ( sub_64FD8((int)v25, 0, v52) )
                        {
                          if ( v29 == -1 )
                          {
LABEL_58:
                            v29 = -1;
                          }
                          else if ( v52[0] == 2 )
                          {
                            if ( v29 > 0x20 )
                              goto LABEL_55;
                          }
                          else
                          {
                            v37 = v29 > 0x80;
                            if ( v52[0] != 10 )
                              v37 = 0;
                            if ( v37 )
LABEL_55:
                              sub_63950(0, (int)"authreadkeys: excessive subnet mask <%s/%s> for key %d", v25, v30, v6);
                          }
LABEL_56:
                          *(_DWORD *)(v24 + 4) = sub_6258C(*(_DWORD *)(v24 + 4), v52, v29);
                          goto LABEL_44;
                        }
                      }
                      else if ( sub_64FD8((int)v25, 0, v52) )
                      {
                        v29 = 0;
                        goto LABEL_56;
                      }
                    }
                    else if ( sub_64FD8((int)v25, 0, v52) )
                    {
                      goto LABEL_58;
                    }
                    sub_63950(&v51, (int)"authreadkeys: invalid IP address <%s> for key %d", v25, v6);
LABEL_44:
                    if ( v26 )
                    {
                      v25 = v26 + 1;
                      if ( v26 != (char *)-1 )
                        continue;
                    }
                    v2 = v47;
                    break;
                  }
                }
                if ( v46 )
                {
                  v43 = v48;
                  v48 = (_DWORD *)v24;
                  *(_DWORD *)v24 = v43;
                }
                else
                {
                  sub_639D0((_DWORD *)v24);
                }
              }
              else
              {
                v14 = v11 - 1;
                v15 = 0;
                if ( v12 >= 0x40 )
                  v13 = 64;
                v16 = *_ctype_tolower_loc();
                while ( 1 )
                {
                  v17 = *(unsigned __int8 *)++v14;
                  v18 = strchr(v2, v16[v17]);
                  if ( !v18 )
                    break;
                  v20 = (v15 & 1) == 0;
                  v21 = (_BYTE)v18 - (_BYTE)v2;
                  v22 = v55;
                  if ( (v15 & 1) != 0 )
                    v19 = &v55[v15 >> 1];
                  else
                    v22 = &v55[v15 >> 1];
                  ++v15;
                  if ( v20 )
                  {
                    v21 *= 16;
                    *(v22 - 548) = v21;
                  }
                  else
                  {
                    LOBYTE(v22) = *(v19 - 548);
                  }
                  if ( !v20 )
                    *(v19 - 548) = v21 | (unsigned __int8)v22;
                  if ( v15 == v13 )
                    goto LABEL_31;
                }
                if ( v13 <= v15 )
                {
LABEL_31:
                  v23 = v13 >> 1;
                  v24 = sub_64B04(0, v23 + 20, 0, 0);
                  *(_WORD *)(v24 + 12) = v46;
                  *(_DWORD *)(v24 + 8) = v6;
                  *(_WORD *)(v24 + 14) = v23;
                  *(_DWORD *)(v24 + 4) = 0;
                  memcpy((void *)(v24 + 16), src, v23);
                  goto LABEL_32;
                }
                sub_63950(&v51, (int)"authreadkeys: invalid hex digit for key %d", v6);
              }
            }
          }
          else
          {
            sub_63950(&v51, (int)"authreadkeys: no key type for key %d", v6);
          }
        }
        else
        {
          sub_63950(&v51, (int)"authreadkeys: key %s > %d reserved for Autokey", v4, 0xFFFF);
        }
      }
      else
      {
        sub_63950(&v51, (int)"authreadkeys: cannot change key %s", v4);
      }
    }
  }
  v38 = v48;
  fclose(stream);
  if ( v51 )
  {
    if ( v51 > 0xF )
      v39 = " (emergency break)";
    else
      v39 = byte_99528;
    sub_65D40(3, "authreadkeys: rejecting file '%s' after %u error(s)%s", a1, v51, v39);
    if ( v48 )
    {
      v40 = v48;
      do
      {
        v41 = (_DWORD *)*v40;
        sub_639D0(v40);
        v40 = v41;
      }
      while ( v41 );
    }
    return 0;
  }
  else
  {
    sub_63510();
    if ( v48 )
    {
      do
      {
        v44 = (_DWORD *)*v38;
        sub_633B4(v38[2], *((_WORD *)v38 + 6), v38 + 4, *((unsigned __int16 *)v38 + 7), v38[1]);
        v38[1] = 0;
        sub_639D0(v38);
        v38 = v44;
      }
      while ( v44 );
    }
    return 1;
  }
}
