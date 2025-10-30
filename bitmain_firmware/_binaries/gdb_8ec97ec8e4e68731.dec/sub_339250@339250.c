int __fastcall sub_339250(int a1, int a2, int a3, int a4, int *a5, int a6, int *a7, int **a8)
{
  int v8; // r4
  unsigned int v11; // r1
  int *v12; // r3
  int v13; // r3
  int result; // r0
  unsigned int v15; // r6
  int v16; // r5
  int v17; // r9
  unsigned int v18; // r11
  int *v19; // r6
  int v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r2
  char *v24; // r1
  int v25; // r3
  int v26; // r1
  int *v27; // r12
  int *v28; // r2
  int v29; // r6
  int v30; // r3
  int *v31; // r1
  int v32; // r3
  int *v33; // r1
  bool v34; // zf
  int v35; // r6
  __int64 v36; // r2
  int v37; // [sp+10h] [bp-3Ch]
  int v38; // [sp+14h] [bp-38h]
  int v41; // [sp+20h] [bp-2Ch]
  int *v42; // [sp+24h] [bp-28h]
  int v43; // [sp+28h] [bp-24h]
  int v44; // [sp+2Ch] [bp-20h]
  __int64 v45; // [sp+34h] [bp-18h] BYREF
  int v46; // [sp+3Ch] [bp-10h]
  int v47; // [sp+40h] [bp-Ch]
  int *v48; // [sp+44h] [bp-8h]

  if ( ((unsigned int)a8[4] & 0x10) != 0 )
    a8[4] = *(int **)(a1 + 8);
  if ( a5 == a7 && sub_33A848(a1, a6) )
  {
    a8[2] = (int *)a3;
    return 0;
  }
  if ( !sub_33A848(a1, a4) )
  {
    v38 = a1;
    if ( a2 < 0 )
      v11 = 0;
    else
      v12 = a7;
    v41 = 1;
    if ( a2 >= 0 )
      v11 = (unsigned int)v12 - a2;
    v15 = v11;
    v37 = 0;
    v44 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v38 + 12);
      v17 = a2;
      v18 = v15;
      if ( v16 )
        break;
LABEL_49:
      v32 = v41;
      v15 = v18;
      a2 = v17;
      v41 = v16;
      v44 &= v32;
      if ( !v44 )
        return v37;
    }
    while ( 1 )
    {
      v19 = a8[4];
      v45 = 0;
      v46 = 0;
      v20 = v38 + 8 * v16;
      v48 = v19;
      v47 = 0;
      v21 = *(_DWORD *)(v20 + 12);
      if ( (v21 & 1) != 0 )
        v8 = *a5;
      v22 = v21 >> 8;
      v23 = a3;
      if ( (v21 & 1) != 0 )
      {
        v22 = *(_DWORD *)(v8 + v22);
        v23 = a3 | 1;
      }
      v24 = (char *)a5 + v22;
      if ( v18 && (v8 = v41, v18 < (unsigned int)v24 == v41) )
      {
        v44 = 1;
      }
      else
      {
        if ( (v21 & 2) != 0 )
          goto LABEL_27;
        if ( v17 != -2 || (v8 = (_DWORD)v19 << 30) != 0 )
        {
          v23 &= ~2u;
LABEL_27:
          result = (*(int (__fastcall **)(_DWORD, int, int, int, char *, int, int *, __int64 *))(**(_DWORD **)(v20 + 8)
                                                                                               + 28))(
                     *(_DWORD *)(v20 + 8),
                     v17,
                     v23,
                     a4,
                     v24,
                     a6,
                     a7,
                     &v45);
          v8 = v47;
          v34 = (v47 & 0xFFFFFFFB) == 2;
          v25 = v46 | (unsigned int)a8[2];
          a8[2] = (int *)v25;
          v26 = v25;
          if ( v34 )
          {
            v36 = v45;
            a8[3] = (int *)v8;
            *(_QWORD *)a8 = v36;
            return result;
          }
          v27 = *a8;
          v28 = (int *)v45;
          if ( !v37 )
          {
            if ( v27 )
              goto LABEL_30;
            v33 = (int *)HIDWORD(v45);
            v34 = v25 == 0;
            if ( v25 )
              v34 = (_DWORD)v45 == 0;
            if ( v34 )
              v37 = result;
            *a8 = (int *)v45;
            a8[1] = v33;
            if ( !v34 )
            {
              v37 = result;
              if ( (*(_DWORD *)(v38 + 8) & 1) == 0 )
                return v37;
            }
            goto LABEL_47;
          }
          if ( v27 )
          {
LABEL_30:
            if ( (int *)v45 == v27 )
            {
              a8[1] = (int *)((unsigned int)a8[1] | HIDWORD(v45));
              goto LABEL_47;
            }
            if ( (_DWORD)v45 )
              LOBYTE(result) = result | 1;
            if ( !(_BYTE)result )
            {
LABEL_47:
              if ( v25 == 4 )
                return v37;
              goto LABEL_48;
            }
          }
          else if ( !(_DWORD)v45 )
          {
            goto LABEL_47;
          }
          v29 = (int)a8[3];
          if ( v25 <= 3 || (v25 & 1) != 0 && ((unsigned int)a8[4] & 2) != 0 )
          {
            LOBYTE(v42) = v8;
            v43 = (int)a8[3];
            if ( v29 > 0 )
              goto LABEL_38;
            if ( v8 > 3 && ((v8 & 1) == 0 || (*(_DWORD *)(v38 + 8) & 2) == 0) )
            {
              if ( (v8 ^ 1) <= 3 )
              {
                v43 = 1;
LABEL_54:
                v8 &= v43;
LABEL_55:
                if ( v8 > 3 )
                {
                  *a8 = 0;
                  v37 = 1;
                  a8[3] = (int *)2;
                  return v37;
                }
LABEL_56:
                v26 = (int)a8[2];
LABEL_57:
                *a8 = 0;
                v25 = v26;
                a8[3] = (int *)1;
                v37 = 1;
                goto LABEL_47;
              }
LABEL_42:
              v30 = v8 & 2;
LABEL_43:
              v31 = (int *)HIDWORD(v45);
              v37 = 0;
              *a8 = v28;
              a8[1] = v31;
LABEL_44:
              a8[3] = (int *)v8;
              if ( v30 || ((unsigned __int8)v42 & 1) == 0 )
                return 0;
              v25 = (int)a8[2];
              goto LABEL_47;
            }
            if ( v17 < 0 )
            {
              if ( v17 == -2 )
              {
                if ( v8 <= 0 )
                  goto LABEL_57;
LABEL_89:
                v43 = 1;
                v29 = 1;
              }
              else
              {
                v29 = (*(int (__fastcall **)(int, int, int *, int, int *))(*(_DWORD *)a4 + 32))(a4, v17, v27, a6, a7);
                v43 = v29;
LABEL_38:
                if ( v8 <= 0 )
                {
                  if ( v29 > 3 && ((v29 & 1) == 0 || (*(_DWORD *)(v38 + 8) & 2) == 0) )
                    goto LABEL_83;
                  v28 = (int *)v45;
                  if ( v17 >= 0 )
                  {
                    if ( a7 != (int *)(v45 + v17) )
                      goto LABEL_95;
                    if ( (v29 ^ 6) <= 3 )
                    {
                      v8 = v29 & 6;
                      goto LABEL_55;
                    }
                    goto LABEL_103;
                  }
                  if ( v17 == -2 )
                  {
LABEL_83:
                    v8 = v29;
                    LOBYTE(v42) = v29;
                    v35 = v29 ^ 1;
                    goto LABEL_84;
                  }
                  v8 = (*(int (__fastcall **)(int, int, _DWORD, int, int *))(*(_DWORD *)a4 + 32))(a4, v17, v45, a6, a7);
                  LOBYTE(v42) = v8;
                }
              }
            }
            else
            {
              if ( a7 != (int *)((char *)v27 + v17) )
              {
                if ( v8 > 0 )
                  goto LABEL_89;
                if ( a7 != (int *)(v45 + v17) )
                {
                  v43 = 1;
                  v29 = 1;
LABEL_95:
                  v8 = v29;
                  LOBYTE(v42) = v43;
                  v35 = v43 ^ 1;
LABEL_84:
                  if ( v35 <= 3 )
                    goto LABEL_56;
LABEL_85:
                  v30 = (unsigned __int8)v42 & 2;
                  goto LABEL_44;
                }
LABEL_103:
                v8 = 6;
                LOBYTE(v42) = 6;
                v30 = 2;
                goto LABEL_43;
              }
              if ( v8 <= 0 )
              {
                v8 = 6;
                LOBYTE(v42) = 6;
                goto LABEL_85;
              }
              v43 = 6;
              v29 = 6;
            }
LABEL_39:
            if ( (v43 ^ v8) <= 3 )
              goto LABEL_54;
          }
          else
          {
            if ( !v29 )
            {
              if ( !v8 )
                goto LABEL_57;
              v29 = 1;
              LOBYTE(v42) = v8;
              v43 = 1;
              goto LABEL_39;
            }
            v42 = a8[3];
            if ( !v8 )
            {
              v8 = (int)a8[3];
              v35 = (unsigned int)v42 ^ 1;
              goto LABEL_84;
            }
            LOBYTE(v42) = v8;
            v43 = (int)a8[3];
            if ( (v29 ^ v8) <= 3 )
              goto LABEL_54;
          }
          if ( v8 > 3 )
          {
            v28 = (int *)v45;
            goto LABEL_42;
          }
          v8 = v29;
          v30 = v43 & 2;
          LOBYTE(v42) = v43;
          goto LABEL_44;
        }
      }
LABEL_48:
      if ( !--v16 )
        goto LABEL_49;
    }
  }
  *a8 = a5;
  a8[1] = (int *)a3;
  if ( a2 < 0 )
  {
    if ( a2 == -2 )
    {
      v37 = 0;
      a8[3] = (int *)1;
      return v37;
    }
    return 0;
  }
  else
  {
    v37 = 0;
    if ( a7 == (int *)((char *)a5 + a2) )
      v13 = 6;
    else
      v13 = 1;
    a8[3] = (int *)v13;
    return v37;
  }
}
