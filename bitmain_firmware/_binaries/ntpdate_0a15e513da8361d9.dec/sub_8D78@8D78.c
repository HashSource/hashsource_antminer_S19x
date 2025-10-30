int __fastcall sub_8D78(const char *a1)
{
  const char *v1; // r10
  const char *v2; // r0
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r3
  int v6; // r8
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r3
  const char *v12; // r0
  int v13; // r3
  const char *v14; // r4
  size_t v15; // r0
  size_t v16; // r5
  const char *v17; // r4
  size_t v18; // r9
  const __int32_t *v19; // r7
  int v20; // t1
  char *v21; // r0
  _BYTE *v22; // r2
  int v23; // r3
  bool v24; // zf
  char v25; // r0
  _BYTE *v26; // r3
  size_t v27; // r5
  int v28; // r9
  const char *v29; // r7
  char *v30; // r6
  char *v31; // r0
  int v32; // r5
  unsigned int v33; // r4
  int v34; // r10
  const unsigned __int16 **v35; // r0
  int v36; // r2
  const unsigned __int16 *v37; // r0
  int v38; // r1
  int v39; // t1
  unsigned int v40; // r3
  _BOOL4 v41; // r1
  _DWORD *v42; // r11
  const char *v43; // r3
  _DWORD *v44; // r0
  _DWORD *v45; // r4
  _DWORD *v47; // r3
  _DWORD *v48; // r4
  FILE *stream; // [sp+8h] [bp-274h]
  int v50; // [sp+10h] [bp-26Ch]
  const char *v51; // [sp+18h] [bp-264h]
  _DWORD *v52; // [sp+1Ch] [bp-260h]
  char *v54; // [sp+30h] [bp-24Ch] BYREF
  unsigned int v55; // [sp+34h] [bp-248h] BYREF
  unsigned __int16 v56[14]; // [sp+38h] [bp-244h] BYREF
  char src[32]; // [sp+54h] [bp-228h] BYREF
  char v58[512]; // [sp+74h] [bp-208h] BYREF
  _BYTE v59[4]; // [sp+278h] [bp-4h] BYREF

  stream = (FILE *)fopen64(a1, "r");
  if ( !stream )
  {
    sub_ABF8(3, "authreadkeys: file '%s': %m", a1);
    return 0;
  }
  if ( !ssl_init_done )
    sub_102C4();
  v55 = 0;
  v1 = "0123456789abcdef";
  v52 = 0;
  while ( 1 )
  {
    v54 = fgets(v58, 512, stream);
    if ( !v54 || v55 > 0xF )
      break;
    v2 = (const char *)sub_8B58((unsigned __int8 **)&v54);
    v3 = (int)v2;
    if ( v2 )
    {
      v4 = strtol(v2, 0, 10);
      v6 = v4;
      if ( v4 )
      {
        if ( v4 < 0x10000 )
        {
          v7 = sub_8B58((unsigned __int8 **)&v54);
          if ( v7 )
          {
            v9 = sub_1051C(v7, 0);
            v50 = v9;
            if ( v9 )
            {
              if ( v9 != 894 )
              {
                v10 = OBJ_nid2sn(v9);
                if ( !EVP_get_digestbyname(v10) )
                {
                  sub_8C70(0, (int)"authreadkeys: no algorithm for key %d", v6, v11);
                  v50 = 0;
                }
              }
              v12 = (const char *)sub_8B58((unsigned __int8 **)&v54);
              v14 = v12;
              if ( v12 )
                goto LABEL_17;
LABEL_77:
              sub_8C70(&v55, (int)"authreadkeys: no key for key %d", v6, v13);
            }
            else
            {
              sub_8C70(0, (int)"authreadkeys: invalid type for key %d", v6, 0);
              v12 = (const char *)sub_8B58((unsigned __int8 **)&v54);
              v14 = v12;
              if ( !v12 )
                goto LABEL_77;
LABEL_17:
              v15 = strlen(v12);
              v16 = v15;
              if ( v15 <= 0x14 )
              {
                v28 = sub_9A68(0, v15 + 20, 0, 0);
                *(_DWORD *)(v28 + 8) = v6;
                *(_WORD *)(v28 + 12) = v50;
                *(_WORD *)(v28 + 14) = v16;
                *(_DWORD *)(v28 + 4) = 0;
                memcpy((void *)(v28 + 16), v14, v16);
LABEL_32:
                v29 = (const char *)sub_8B58((unsigned __int8 **)&v54);
                if ( v29 )
                {
                  v51 = v1;
                  while ( 1 )
                  {
                    v30 = strchr(v29, 44);
                    if ( v30 )
                      *v30 = 0;
                    v31 = strchr(v29, 47);
                    if ( v31 )
                    {
                      v32 = (unsigned __int8)v31[1];
                      v33 = 0;
                      v34 = (int)(v31 + 1);
                      *v31 = 0;
                      if ( v32 )
                      {
                        v35 = _ctype_b_loc();
                        v36 = v34;
                        v37 = *v35;
                        do
                        {
                          v40 = ((v37[v32] ^ 0x800u) >> 11) & 1;
                          if ( v33 > 0x3E8 )
                            v40 = 1;
                          if ( v40 )
                          {
                            sub_8C70(
                              &v55,
                              (int)"authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
                              v36,
                              v34);
                            goto LABEL_44;
                          }
                          v38 = v32 - 48;
                          v39 = *(unsigned __int8 *)++v36;
                          v32 = v39;
                          v33 = v38 + 10 * v33;
                        }
                        while ( v39 );
                        if ( sub_9F50((int)v29, 0, v56) )
                        {
                          if ( v33 == -1 )
                          {
LABEL_58:
                            v33 = -1;
                          }
                          else if ( v56[0] == 2 )
                          {
                            if ( v33 > 0x20 )
                              goto LABEL_55;
                          }
                          else
                          {
                            v41 = v33 > 0x80;
                            if ( v56[0] != 10 )
                              v41 = 0;
                            if ( v41 )
LABEL_55:
                              sub_8C70(0, (int)"authreadkeys: excessive subnet mask <%s/%s> for key %d", (int)v29, v34);
                          }
LABEL_56:
                          *(_DWORD *)(v28 + 4) = sub_78AC(*(_DWORD *)(v28 + 4), v56, v33);
                          goto LABEL_44;
                        }
                      }
                      else if ( sub_9F50((int)v29, 0, v56) )
                      {
                        v33 = 0;
                        goto LABEL_56;
                      }
                    }
                    else if ( sub_9F50((int)v29, 0, v56) )
                    {
                      goto LABEL_58;
                    }
                    sub_8C70(&v55, (int)"authreadkeys: invalid IP address <%s> for key %d", (int)v29, v6);
LABEL_44:
                    if ( v30 )
                    {
                      v29 = v30 + 1;
                      if ( v30 != (char *)-1 )
                        continue;
                    }
                    v1 = v51;
                    break;
                  }
                }
                if ( v50 )
                {
                  v47 = v52;
                  v52 = (_DWORD *)v28;
                  *(_DWORD *)v28 = v47;
                }
                else
                {
                  sub_8CF0((_DWORD *)v28);
                }
              }
              else
              {
                v17 = v14 - 1;
                v18 = 0;
                if ( v15 >= 0x40 )
                  v16 = 64;
                v19 = *_ctype_tolower_loc();
                while ( 1 )
                {
                  v20 = *(unsigned __int8 *)++v17;
                  v21 = strchr(v1, v19[v20]);
                  if ( !v21 )
                    break;
                  v24 = (v18 & 1) == 0;
                  v25 = (_BYTE)v21 - (_BYTE)v1;
                  v26 = v59;
                  if ( (v18 & 1) != 0 )
                    v22 = &v59[v18 >> 1];
                  else
                    v26 = &v59[v18 >> 1];
                  ++v18;
                  if ( v24 )
                  {
                    v25 *= 16;
                    *(v26 - 548) = v25;
                  }
                  else
                  {
                    LOBYTE(v26) = *(v22 - 548);
                  }
                  if ( !v24 )
                    *(v22 - 548) = v25 | (unsigned __int8)v26;
                  if ( v18 == v16 )
                    goto LABEL_31;
                }
                if ( v16 <= v18 )
                {
LABEL_31:
                  v27 = v16 >> 1;
                  v28 = sub_9A68(0, v27 + 20, 0, 0);
                  *(_WORD *)(v28 + 12) = v50;
                  *(_DWORD *)(v28 + 8) = v6;
                  *(_WORD *)(v28 + 14) = v27;
                  *(_DWORD *)(v28 + 4) = 0;
                  memcpy((void *)(v28 + 16), src, v27);
                  goto LABEL_32;
                }
                sub_8C70(&v55, (int)"authreadkeys: invalid hex digit for key %d", v6, v23);
              }
            }
          }
          else
          {
            sub_8C70(&v55, (int)"authreadkeys: no key type for key %d", v6, v8);
          }
        }
        else
        {
          sub_8C70(&v55, (int)"authreadkeys: key %s > %d reserved for Autokey", v3, 0xFFFF);
        }
      }
      else
      {
        sub_8C70(&v55, (int)"authreadkeys: cannot change key %s", v3, v5);
      }
    }
  }
  v42 = v52;
  fclose(stream);
  if ( v55 )
  {
    if ( v55 > 0xF )
      v43 = " (emergency break)";
    else
      v43 = "";
    sub_ABF8(3, "authreadkeys: rejecting file '%s' after %u error(s)%s", a1, v55, v43);
    if ( v52 )
    {
      v44 = v52;
      do
      {
        v45 = (_DWORD *)*v44;
        sub_8CF0(v44);
        v44 = v45;
      }
      while ( v45 );
    }
    return 0;
  }
  else
  {
    sub_8830();
    if ( v52 )
    {
      do
      {
        v48 = (_DWORD *)*v42;
        sub_86D4(v42[2], *((_WORD *)v42 + 6), v42 + 4, *((unsigned __int16 *)v42 + 7), v42[1]);
        v42[1] = 0;
        sub_8CF0(v42);
        v42 = v48;
      }
      while ( v48 );
    }
    return 1;
  }
}
