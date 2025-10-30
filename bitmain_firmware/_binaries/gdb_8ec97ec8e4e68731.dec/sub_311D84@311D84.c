int __fastcall sub_311D84(_DWORD *a1, unsigned __int8 **a2, unsigned int a3)
{
  unsigned __int8 *v4; // r6
  int v5; // r3
  unsigned __int8 *v6; // r4
  int v9; // r9
  int v10; // r11
  int v11; // r8
  char *v12; // r1
  __int64 v13; // r0
  void *v14; // r0
  _BOOL4 v15; // r6
  int v16; // r3
  int v17; // r3
  _BYTE *v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  int v21; // r0
  char *v22; // r0
  int v24; // r3
  bool v25; // zf
  int v26; // r0
  int v27; // r1
  unsigned int v28; // r3
  char *v29; // r1
  void *v30; // r0
  int v31; // r6
  __int64 v32; // r2
  int v33; // r3
  char *v34; // r8
  int v35; // r2
  __int64 v36; // r0
  bool v37; // cc
  char *v38; // r2
  size_t v39; // r2
  size_t v40; // r2
  size_t v41; // r2
  char *v42; // r1
  void *v43; // r0
  int v44; // r0
  unsigned __int8 *v45; // r1
  void *v46; // r0
  int v47; // [sp+10h] [bp-3Ch]
  void *ptr; // [sp+24h] [bp-28h] BYREF
  int v49; // [sp+28h] [bp-24h]
  int v50; // [sp+2Ch] [bp-20h]
  void *v51; // [sp+30h] [bp-1Ch] BYREF
  _BYTE *v52; // [sp+34h] [bp-18h]
  int v53; // [sp+38h] [bp-14h]
  void *v54; // [sp+3Ch] [bp-10h] BYREF
  char *v55; // [sp+40h] [bp-Ch]
  int v56; // [sp+44h] [bp-8h]

  v4 = *a2;
  v5 = **a2;
  v6 = 0;
  v47 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  if ( **a2 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          a1[13] = -1;
          v54 = 0;
          if ( !v6 )
            v6 = v4;
          v56 = 0;
          v55 = 0;
          v31 = sub_30CE10(a1);
          v11 = sub_310258(a1, a2, &v54);
          if ( v11 )
          {
            v34 = v55;
            if ( (a1[10] & 1) != 0 || (a1[11] & 1) != 0 )
            {
              v35 = a1[13];
              HIDWORD(v36) = v54;
              v37 = (unsigned int)(v35 + 1) > 1;
              if ( (unsigned int)(v35 + 1) <= 1 )
                v38 = v55;
              else
                v38 = (char *)v54 + v35;
              if ( v37 )
                v55 = v38;
              if ( v54 != v38 )
              {
                v39 = v38 - (_BYTE *)v54;
                if ( v39 )
                {
                  LODWORD(v36) = a3;
                  sub_30D358(v36, v39);
                }
              }
              if ( (a1[11] & 1) != 0 )
              {
                sub_30D3B8(a3, "~");
                --a1[11];
              }
              else
              {
                --a1[10];
              }
            }
            v55 = v34;
            if ( v34 == v54 )
              v40 = 0;
            else
              v40 = v34 - (_BYTE *)v54;
            sub_30CEA0(a1, v54, v40);
            if ( v54 == v55 )
              v41 = 0;
            else
              v41 = v55 - (_BYTE *)v54;
            sub_30D258(a1 + 3, v54, v41, v31);
            v42 = "::";
            if ( (*a1 & 4) != 0 )
              v42 = ".";
            sub_30D3B8(a3, v42);
            v43 = v54;
            if ( v54 != v55 && v55 != v54 )
            {
              sub_30D358(__SPAIR64__((unsigned int)v54, a3), v55 - (_BYTE *)v54);
              v43 = v54;
            }
            if ( v43 )
              free(v43);
            v15 = 1;
            v11 = 1;
            sub_30D7CC(a1, v6, *a2 - v6);
          }
          else
          {
            v15 = 0;
            if ( v54 )
              free(v54);
          }
          v6 = (unsigned __int8 *)(*a1 & 0x2300);
          if ( !v6 )
          {
            v16 = v9;
            goto LABEL_31;
          }
          if ( **a2 == 70 )
          {
            v16 = v9;
            v6 = 0;
            goto LABEL_31;
          }
          v16 = 1;
          goto LABEL_110;
        case 'B':
          v11 = sub_30E828(a1, a2, (unsigned int)&v54);
          if ( v11 )
          {
            v29 = "::";
            if ( (*a1 & 4) != 0 )
              v29 = ".";
            sub_30D3E4((int)&v54, v29);
            v30 = v54;
            if ( v54 != v55 && v55 != v54 )
            {
              sub_30D358(__SPAIR64__((unsigned int)v54, a3), v55 - (_BYTE *)v54);
              v30 = v54;
            }
            if ( v30 )
              free(v30);
          }
          v16 = 1;
          v15 = v11;
          if ( v11 )
            v15 = 1;
          v9 = 1;
          v6 = 0;
          goto LABEL_31;
        case 'C':
        case 'V':
        case 'u':
          if ( v5 == 86 )
          {
            v44 = 2;
          }
          else if ( v5 == 117 )
          {
            v44 = 4;
          }
          else
          {
            if ( v5 != 67 )
              abort();
            v44 = 1;
          }
          v45 = v4 + 1;
          v16 = v9;
          if ( !v6 )
            v6 = v4;
          v15 = 1;
          a1[14] |= v44;
          *a2 = v45;
          goto LABEL_31;
        case 'F':
          v28 = *a1;
          *a2 = v4 + 1;
          if ( (v28 & 0x3C00) != 0 )
            sub_30D12C(a1 + 1, a1 + 8);
          v11 = sub_31147C(a1, a2, a3);
          if ( !v11 )
            return 0;
          v16 = v9;
          v6 = (unsigned __int8 *)(*a1 & 0x2100);
          if ( v6 )
          {
            if ( **a2 == 95 )
            {
              ++*a2;
              v11 = sub_30E828(a1, a2, (unsigned int)&v51);
              v16 = v9;
              if ( v51 )
              {
                v15 = v11;
                if ( v11 )
                  v15 = 1;
                v10 = 1;
                free(v51);
                v16 = v9;
                v52 = 0;
                v6 = 0;
                v53 = 0;
                v51 = 0;
              }
              else
              {
                v15 = v11;
                v6 = 0;
                if ( v11 )
                  v15 = 1;
                v10 = 1;
              }
            }
            else
            {
              v15 = 1;
              v6 = 0;
              v10 = 1;
            }
          }
          else
          {
            v15 = 1;
            v10 = 1;
          }
          goto LABEL_31;
        case 'H':
          if ( (*a1 & 0x300) == 0 )
            return 0;
          v26 = sub_310880(a1, a2, (const void **)a3, 0, 0, 0);
          v11 = v26;
          v27 = v47;
          if ( (a1[10] & 1) == 0 )
            v27 = 1;
          v47 = v27;
          if ( !**a2 )
            return 0;
          v15 = v26;
          v16 = v9;
          ++*a2;
          if ( v26 )
            v15 = 1;
          goto LABEL_31;
        case 'K':
          v6 = 0;
          v11 = sub_310EBC(a1, a2, (_DWORD *)a3, 1, 0);
          if ( (*a1 & 0x300) != 0 )
          {
            v16 = 1;
          }
          else
          {
            v6 = 0;
            v16 = v9;
          }
          if ( (*a1 & 0x300) != 0 )
            v9 = v16;
          v15 = v11;
          if ( v11 )
            v15 = 1;
          goto LABEL_31;
        case 'L':
          if ( (*a1 & 0x1000) == 0 )
            return 0;
          while ( 1 )
          {
            *a2 = v4 + 1;
            v24 = v4[1];
            v25 = v24 == 0;
            if ( v4[1] )
              v25 = v24 == 95;
            if ( v25 )
              break;
            ++v4;
          }
          if ( !v4[1] )
            return 0;
          v16 = v9;
          *a2 = v4 + 2;
          v15 = 1;
          goto LABEL_31;
        case 'Q':
          v6 = 0;
          v11 = sub_310EBC(a1, a2, (_DWORD *)a3, 1, 0);
          if ( !v11 )
            return 0;
          sub_30D7CC(a1, v4, *a2 - v4);
          v19 = *a1;
          if ( (*a1 & 0x300) != 0 )
            goto LABEL_33;
          v6 = 0;
          v16 = v9;
          v15 = 1;
          goto LABEL_31;
        case 'S':
          *a2 = v4 + 1;
          if ( !v6 )
            v6 = v4;
          a1[12] = 1;
          v15 = 1;
          v16 = v9;
          goto LABEL_31;
        case '_':
          if ( (*a1 & 0x300) != 0 )
            v17 = v47;
          else
            v17 = 0;
          if ( v17 )
          {
            *a2 = v4 + 1;
            v11 = sub_30E828(a1, a2, (unsigned int)&v54);
            v46 = v55;
            if ( v54 != v55 )
            {
              sub_30D3E4((int)&v54, (char *)&word_3E1F84);
              v46 = v54;
              if ( v54 != v55 )
              {
                sub_30D358(__SPAIR64__((unsigned int)v54, a3), v55 - (_BYTE *)v54);
                v46 = v54;
              }
            }
            if ( v46 )
              free(v46);
            v15 = v11;
            v16 = v9;
            if ( v11 )
              v15 = 1;
            v47 = 1;
          }
          else
          {
            if ( (*a1 & 0x1000) == 0 )
              return 0;
            v18 = v4 + 1;
            v16 = v9;
            *a2 = v4 + 1;
            if ( v4[1] && (word_438898[v4[1]] & 4) != 0 )
            {
              do
                *a2 = ++v18;
              while ( *v18 && (word_438898[(unsigned __int8)*v18] & 4) != 0 );
            }
            v15 = 1;
          }
          goto LABEL_31;
        case 't':
          if ( !v6 )
            v6 = v4;
          v50 = 0;
          v49 = 0;
          ptr = 0;
          v53 = 0;
          v52 = 0;
          v51 = 0;
          v11 = sub_310880(a1, a2, (const void **)&v51, (unsigned int)&ptr, 1, 1);
          if ( v11 )
            sub_30D7CC(a1, v6, *a2 - v6);
          v12 = "::";
          if ( (*a1 & 4) != 0 )
            v12 = ".";
          sub_30D3E4((int)&v51, v12);
          HIDWORD(v13) = v51;
          if ( v51 != v52 && v52 != v51 )
          {
            LODWORD(v13) = a3;
            sub_30D358(v13, v52 - (_BYTE *)v51);
          }
          if ( (a1[11] & 1) != 0 )
          {
            sub_30D3B8((unsigned int)&ptr, "~");
            sub_30D52C(__SPAIR64__(&ptr, a3), v49);
            v32 = *((_QWORD *)a1 + 5);
            v33 = HIDWORD(v32) - 1;
            a1[11] = v33;
            if ( (v32 & 1) == 0 && (v33 & 1) == 0 )
            {
LABEL_14:
              v14 = ptr;
              if ( !ptr )
                goto LABEL_16;
LABEL_15:
              free(v14);
              v49 = 0;
              v50 = 0;
              ptr = 0;
              goto LABEL_16;
            }
          }
          else if ( (a1[10] & 1) == 0 )
          {
            goto LABEL_14;
          }
          sub_30D52C(__SPAIR64__(&ptr, a3), v49);
          v14 = ptr;
          v25 = ptr == 0;
          --a1[10];
          if ( !v25 )
            goto LABEL_15;
LABEL_16:
          v15 = v11;
          if ( v11 )
            v15 = 1;
          v16 = 1;
          if ( v51 )
          {
            free(v51);
            v16 = 1;
            v52 = 0;
            v6 = 0;
            v53 = 0;
            v9 = 1;
            v51 = 0;
          }
          else
          {
LABEL_110:
            v6 = 0;
            v9 = 1;
          }
LABEL_31:
          if ( (v15 & v16) != 0 )
          {
            v19 = *a1;
LABEL_33:
            if ( (v19 & 0x2C00) != 0 )
              sub_30D12C(a1 + 1, a1 + 8);
            v9 = 0;
            v10 = 1;
            v11 = sub_31147C(a1, a2, a3);
          }
          if ( !v11 )
            return 0;
          v4 = *a2;
          v5 = **a2;
          if ( !**a2 )
            goto LABEL_38;
          break;
        default:
          if ( (*a1 & 0x300) == 0 )
            return 0;
          v10 = 1;
          v11 = sub_31147C(a1, a2, a3);
          v15 = v11 != 0;
          v16 = v9;
          goto LABEL_31;
      }
    }
  }
LABEL_38:
  v20 = *a1;
  if ( !v10 && (v20 & 0x300) != 0 )
  {
    v11 = sub_31147C(a1, a2, a3);
    if ( !v11 )
      return 0;
    v20 = *a1;
  }
  if ( (v20 & 1) != 0 )
  {
    if ( a1[12] )
      sub_30D3E4(a3, " static");
    v21 = a1[14];
    if ( v21 )
    {
      if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
      {
        sub_30D3E4(a3, (char *)&word_3E1F84);
        v21 = a1[14];
      }
      v22 = sub_30CF40(v21);
      if ( v22 && *v22 )
        sub_30D3E4(a3, v22);
    }
  }
  return v11;
}
