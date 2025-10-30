size_t __fastcall sub_EACFC(_BYTE *a1, signed int a2, int a3, int a4)
{
  bool v4; // cc
  int v5; // r4
  _BYTE *v6; // r9
  char *v7; // r6
  int v8; // r5
  int **v9; // r7
  int v10; // r8
  unsigned int v11; // r4
  int v12; // r11
  char v13; // r1
  char v14; // t1
  int v15; // r10
  _BOOL4 v16; // r3
  unsigned int v17; // r1
  const char *v19; // r0
  char *v20; // r8
  signed int v21; // r4
  signed int v22; // r3
  unsigned int v23; // r2
  bool v24; // cc
  signed int v25; // r4
  bool v26; // cc
  char *v27; // r0
  unsigned int v28; // r5
  char *v29; // r6
  signed int v30; // r3
  signed int v31; // [sp+4h] [bp-38h]
  int v32; // [sp+8h] [bp-34h]
  char v33[32]; // [sp+1Ch] [bp-20h] BYREF

  v4 = (int)a1 <= 0;
  if ( a1 )
    v4 = a2 <= 0;
  v5 = a3;
  if ( !v4 )
    LOBYTE(a3) = 0;
  v6 = a1;
  v31 = a2;
  if ( !v4 )
    *a1 = a3;
  if ( !v5 )
    return 0;
  v7 = *(char **)(v5 + 16);
  if ( !v7 )
    return 0;
  if ( a4 )
  {
LABEL_10:
    v8 = *(_DWORD *)(v5 + 12);
    if ( v8 <= 0 )
    {
      v9 = 0;
      v32 = 0;
      goto LABEL_44;
    }
    v10 = 1;
    v9 = 0;
    v32 = 0;
    while ( 1 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = *v7++;
          v13 = v14;
          --v8;
          v15 = v14;
          v16 = v14 < 0;
          if ( v8 )
            v16 = 0;
          if ( v16 )
            goto LABEL_24;
          v17 = v13 & 0x7F;
          if ( !v12 )
            break;
          if ( !sub_BAD28((int)v9, v17) )
            goto LABEL_24;
          if ( v15 >= 0 )
          {
            if ( !v10 )
              goto LABEL_29;
            if ( v11 <= 0x4F )
            {
LABEL_46:
              v23 = v11 / 0x28;
              v11 %= 0x28u;
              goto LABEL_47;
            }
            if ( sub_BACA0(v9, 0x50u) )
            {
LABEL_76:
              LOBYTE(v23) = 2;
LABEL_47:
              v24 = (int)v6 <= 0;
              if ( v6 )
                v24 = v31 <= 1;
              if ( !v24 )
              {
                *v6++ = v23 + 48;
                *v6 = 0;
                --v31;
              }
              ++v32;
              if ( !v12 )
                goto LABEL_52;
LABEL_29:
              v19 = (const char *)sub_135904(v9);
              v20 = (char *)v19;
              if ( v19 )
              {
                v21 = strlen(v19);
                if ( v6 )
                {
                  if ( v31 > 1 )
                  {
                    *v6++ = 46;
                    *v6 = 0;
                    --v31;
                  }
                  sub_E9F28(v6, v20, v31);
                  v22 = v31;
                  if ( v31 < v21 )
                    v6 += v31;
                  else
                    v22 = v31;
                  if ( v31 < v21 )
                    v22 = 0;
                  else
                    v6 += v21;
                  if ( v31 >= v21 )
                    v22 -= v21;
                  v31 = v22;
                }
                v32 += v21 + 1;
                CRYPTO_free(v20);
                goto LABEL_43;
              }
            }
LABEL_24:
            sub_B895C((int)v9);
            return -1;
          }
LABEL_23:
          if ( !sub_BA5F8((void **)v9, (int *)v9, 7) )
            goto LABEL_24;
        }
        v11 |= v17;
        if ( v15 >= 0 )
          break;
        if ( v11 >= 0x2000000 )
        {
          if ( !v9 )
          {
            v9 = (int **)sub_B822C();
            if ( !v9 )
              goto LABEL_24;
          }
          if ( !sub_B8930(v9, v11) )
            goto LABEL_24;
          v12 = 1;
          goto LABEL_23;
        }
        v11 <<= 7;
      }
      if ( v10 )
      {
        if ( v11 <= 0x4F )
          goto LABEL_46;
        v11 -= 80;
        goto LABEL_76;
      }
LABEL_52:
      sub_B5560(v33, 0x1Au, ".%lu", v11);
      v25 = strlen(v33);
      v26 = (int)v6 <= 0;
      if ( v6 )
        v26 = v31 <= 0;
      if ( !v26 )
      {
        sub_E9F28(v6, v33, v31);
        if ( v31 < v25 )
        {
          v30 = 0;
          v6 += v31;
        }
        else
        {
          v30 = v31;
        }
        if ( v31 >= v25 )
        {
          v6 += v25;
          v30 -= v25;
        }
        v31 = v30;
      }
      v32 += v25;
LABEL_43:
      v10 = 0;
      if ( v8 <= 0 )
      {
LABEL_44:
        sub_B895C((int)v9);
        return v32;
      }
    }
  }
  v27 = sub_EAC84(v5);
  v28 = (unsigned int)v27;
  if ( !v27 || (v29 = sub_EAB40((unsigned int)v27)) == 0 && (v29 = sub_EAAB4(v28)) == 0 )
  {
    v7 = *(char **)(v5 + 16);
    goto LABEL_10;
  }
  if ( v6 )
    sub_E9F28(v6, v29, v31);
  return strlen(v29);
}
