int __fastcall sub_30E828(_DWORD *a1, unsigned __int8 **a2, unsigned int a3)
{
  int v4; // r6
  int v5; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r3
  unsigned __int8 *v11; // r7
  int v12; // r0
  char *v13; // r0
  unsigned __int8 *v14; // r3
  unsigned __int8 *v15; // r2
  int v16; // r3
  bool v17; // zf
  _BYTE *v18; // r3
  _BYTE *v19; // r2
  unsigned __int8 *v20; // r3
  unsigned int v21; // r3
  char *v22; // r1
  int v23; // r3
  int v24; // r0
  signed int v25; // r10
  __int64 v26; // r0
  unsigned __int8 *v27; // r1
  int v28; // r10
  unsigned __int8 *v29; // r3
  int v30; // r2
  unsigned int v31; // r1
  unsigned __int8 *v32; // r11
  void *v33; // r0
  size_t v34; // r2
  int v35; // r0
  int v36; // r5
  void *v37; // r0
  int v39; // r0
  int *v40; // r3
  int *v41; // r0
  int v42; // t1
  __int64 v43; // r0
  char *v44; // r1
  int v45; // r0
  char *v46; // r0
  int v47; // r3
  char *v48; // r1
  char *v49; // r0
  int v50; // r4
  unsigned __int8 *v51; // r3
  void **p_ptr; // r12
  int v53; // r2
  int v54; // r0
  unsigned __int8 *v55; // r1
  bool v56; // zf
  int v57; // r0
  int v58; // r10
  size_t v59; // r2
  size_t v60; // r0
  unsigned __int8 *v61; // r0
  int v62; // [sp+10h] [bp-4Ch]
  int v63; // [sp+14h] [bp-48h]
  int v64; // [sp+18h] [bp-44h] BYREF
  int v65; // [sp+1Ch] [bp-40h] BYREF
  int v66; // [sp+20h] [bp-3Ch] BYREF
  void *v67; // [sp+24h] [bp-38h] BYREF
  _BYTE *v68; // [sp+28h] [bp-34h]
  int v69; // [sp+2Ch] [bp-30h]
  void *ptr; // [sp+30h] [bp-2Ch] BYREF
  _BYTE *v71; // [sp+34h] [bp-28h]
  int v72; // [sp+38h] [bp-24h]

  v4 = 0;
  v5 = 1;
  v69 = 0;
  v62 = 0;
  v68 = 0;
  v67 = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  while ( 1 )
  {
    v8 = v5;
    v9 = 0;
    if ( v5 )
      v8 = 1;
LABEL_4:
    v10 = v9 ^ 1;
    v9 = 1;
    if ( (v8 & v10) == 0 )
      break;
    v11 = *a2;
    v12 = **a2;
    switch ( **a2 )
    {
      case 'A':
        v18 = v67;
        v19 = v68;
        *a2 = v11 + 1;
        if ( v18 != v19 && ((*v18 - 38) & 0xFB) == 0 )
        {
          sub_30D3B8((unsigned int)&v67, "(");
          sub_30D3E4((int)&v67, ")");
        }
        sub_30D3E4((int)&v67, "[");
        v20 = *a2;
        if ( **a2 == 95 || (v24 = sub_30E114(a1, a2, (unsigned int)&v67, 4u), v20 = *a2, v5 = v24, **a2 == 95) )
          *a2 = v20 + 1;
        sub_30D3E4((int)&v67, (char *)&word_419FC8);
        continue;
      case 'C':
      case 'V':
      case 'u':
        if ( (*a1 & 2) != 0 )
        {
          if ( v67 != v68 )
          {
            sub_30D3B8((unsigned int)&v67, (char *)&word_3E1F84);
            v11 = *a2;
            v12 = **a2;
          }
          v13 = sub_30CFD4(v12);
          if ( v13 && *v13 )
          {
            sub_30D3B8((unsigned int)&v67, v13);
            v11 = *a2;
          }
        }
        goto LABEL_12;
      case 'F':
        v14 = (unsigned __int8 *)v67;
        v15 = v68;
        *a2 = v11 + 1;
        if ( v14 != v15 && ((*v14 - 38) & 0xFB) == 0 )
        {
          sub_30D3B8((unsigned int)&v67, "(");
          sub_30D3E4((int)&v67, ")");
        }
        if ( !sub_3117CC(a1, a2, &v67) )
          goto LABEL_30;
        v16 = **a2;
        v17 = v16 == 95;
        if ( v16 != 95 )
          v17 = v16 == 0;
        if ( !v17 )
          goto LABEL_30;
        if ( v16 == 95 )
          ++*a2;
        continue;
      case 'G':
LABEL_12:
        *a2 = v11 + 1;
        continue;
      case 'M':
        *a2 = v11 + 1;
        sub_30D3E4((int)&v67, ")");
        if ( **a2 == 81 )
          goto LABEL_52;
        v22 = "::";
        if ( (*a1 & 4) != 0 )
          v22 = ".";
        sub_30D3B8((unsigned int)&v67, v22);
        v23 = **a2;
        if ( (word_438898[v23] & 4) == 0 )
        {
          if ( (unsigned int)(v23 - 88) <= 1 )
          {
            sub_30E828(a1, a2, &ptr);
            v33 = ptr;
            if ( ptr == v71 )
              goto LABEL_77;
            v34 = v71 - (_BYTE *)ptr;
          }
          else
          {
            if ( v23 != 116 )
            {
              if ( v23 != 81 )
                goto LABEL_30;
LABEL_52:
              v5 = sub_310EBC(a1, a2, &v67, 0, 0);
              if ( !v5 )
                continue;
              goto LABEL_79;
            }
            ptr = 0;
            v72 = 0;
            v71 = 0;
            v5 = sub_310880((int)a1, (int)a2, (int)&ptr, 0, 1, 1);
            v33 = ptr;
            if ( !v5 )
            {
              if ( ptr )
                free(ptr);
              continue;
            }
            v34 = v71 - (_BYTE *)ptr;
            if ( v71 == ptr )
            {
LABEL_77:
              if ( v33 )
                free(v33);
LABEL_79:
              v28 = v5;
              goto LABEL_62;
            }
          }
          HIDWORD(v43) = v33;
          LODWORD(v43) = &v67;
          sub_30D358(v43, v34);
          v33 = ptr;
          goto LABEL_77;
        }
        v25 = sub_30D00C(a2);
        v64 = v25;
        if ( v25 == -1 || v25 > (int)strlen((const char *)*a2) )
        {
LABEL_30:
          v5 = 0;
          continue;
        }
        HIDWORD(v26) = *a2;
        if ( v25 )
        {
          LODWORD(v26) = &v67;
          sub_30D358(v26, v25);
          HIDWORD(v26) = *a2;
          v25 = v64;
        }
        v27 = (unsigned __int8 *)(HIDWORD(v26) + v25);
        v28 = v5;
        *a2 = v27;
LABEL_62:
        sub_30D3B8((unsigned int)&v67, "(");
        v29 = *a2;
        v30 = **a2;
        switch ( v30 )
        {
          case 'V':
            v63 = 2;
            break;
          case 'u':
            v63 = 4;
            break;
          case 'C':
            v63 = 1;
            break;
          default:
            v63 = 0;
            goto LABEL_68;
        }
        *a2 = v29 + 1;
        v30 = *++v29;
LABEL_68:
        if ( v30 != 70 )
          goto LABEL_30;
        *a2 = v29 + 1;
        v5 = sub_3117CC(a1, a2, &v67);
        if ( v5 )
        {
          if ( **a2 != 95 )
            goto LABEL_30;
          v31 = *a1;
          ++*a2;
          if ( ((v63 != 0) & (v31 >> 1)) == 0 )
            goto LABEL_72;
          if ( v67 != v68 )
            sub_30D3E4((int)&v67, (char *)&word_3E1F84);
          v49 = sub_30CF40(v63);
          if ( v49 && *v49 )
          {
            v5 = v28;
            sub_30D3E4((int)&v67, v49);
          }
          else
          {
LABEL_72:
            v5 = v28;
          }
        }
        break;
      case 'O':
        *a2 = v11 + 1;
        sub_30D3B8((unsigned int)&v67, (char *)&dword_364FBC);
        if ( !v4 )
          v4 = 3;
        continue;
      case 'P':
      case 'p':
        v21 = *a1;
        *a2 = v11 + 1;
        if ( (v21 & 4) == 0 )
          sub_30D3B8((unsigned int)&v67, "*");
        if ( !v4 )
          v4 = 1;
        continue;
      case 'R':
        *a2 = v11 + 1;
        sub_30D3B8((unsigned int)&v67, "&");
        if ( !v4 )
          v4 = 2;
        continue;
      case 'T':
        *a2 = v11 + 1;
        if ( !sub_30CBF8(a2, &v64) || v64 < 0 || v64 >= a1[8] )
          goto LABEL_30;
        v39 = a1[23];
        if ( v39 <= 0 )
          goto LABEL_100;
        v40 = (int *)a1[21];
        v41 = &v40[v39];
        do
        {
          v42 = *v40++;
          if ( v64 == v42 )
            v5 = 0;
        }
        while ( v41 != v40 );
        if ( v5 )
        {
LABEL_100:
          sub_30CD70((int)a1, v64);
          v62 = 1;
          v65 = *(_DWORD *)(a1[1] + 4 * v64);
          a2 = (unsigned __int8 **)&v65;
        }
        continue;
      default:
        goto LABEL_4;
    }
  }
  if ( v5 )
  {
    v32 = *a2;
    switch ( **a2 )
    {
      case 'B':
        *a2 = v32 + 1;
        if ( !sub_30CBF8(a2, &v64) || v64 < 0 || v64 >= a1[5] )
          goto LABEL_83;
        v44 = *(char **)(a1[3] + 4 * v64);
        if ( v44 && *v44 )
          sub_30D3E4(a3, v44);
        goto LABEL_116;
      case 'K':
      case 'Q':
        v5 = sub_310EBC(a1, a2, a3, 0, 1);
        if ( v5 )
          goto LABEL_116;
        goto LABEL_83;
      case 'X':
      case 'Y':
        *a2 = v32 + 1;
        v35 = sub_30D0AC(a2);
        v36 = v35;
        if ( v35 == -1 || a1[16] && a1[17] <= v35 || sub_30D0AC(a2) == -1 )
          goto LABEL_83;
        v47 = a1[16];
        if ( v47 )
        {
          v48 = *(char **)(v47 + 4 * v36);
          if ( v48 && *v48 )
          {
            v5 = 1;
            sub_30D3E4(a3, v48);
          }
          else
          {
            v5 = 1;
          }
        }
        else
        {
          sub_30D428(a3, v36);
          v5 = 1;
        }
        goto LABEL_116;
      default:
        v66 = 0;
        break;
    }
    while ( 2 )
    {
      v45 = *v32;
      switch ( *v32 )
      {
        case 'C':
        case 'V':
        case 'u':
          if ( (*a1 & 2) != 0 )
          {
            if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
            {
              sub_30D3B8(a3, (char *)&word_3E1F84);
              v32 = *a2;
              v45 = **a2;
            }
            v46 = sub_30CFD4(v45);
            if ( v46 && *v46 )
            {
              sub_30D3B8(a3, v46);
              v32 = *a2;
            }
          }
          *a2 = ++v32;
          continue;
        case 'J':
          *a2 = v32 + 1;
          if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
            sub_30D3E4(a3, (char *)&word_3E1F84);
          sub_30D3E4(a3, "__complex");
          v32 = *a2;
          continue;
        case 'S':
          *a2 = v32 + 1;
          if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
            sub_30D3E4(a3, (char *)&word_3E1F84);
          sub_30D3E4(a3, "signed");
          v32 = *a2;
          continue;
        case 'U':
          *a2 = v32 + 1;
          if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
            sub_30D3E4(a3, (char *)&word_3E1F84);
          sub_30D3E4(a3, "unsigned");
          v32 = *a2;
          continue;
        default:
          switch ( *v32 )
          {
            case 0u:
            case 0x5Fu:
              goto LABEL_151;
            case 0x30u:
            case 0x31u:
            case 0x32u:
            case 0x33u:
            case 0x34u:
            case 0x35u:
            case 0x36u:
            case 0x37u:
            case 0x38u:
            case 0x39u:
              v57 = sub_30CE10(a1);
              ptr = 0;
              v58 = v57;
              v72 = 0;
              v71 = 0;
              v50 = sub_310258(a1, a2, &ptr);
              if ( v50 )
              {
                if ( ptr == v71 )
                  v59 = 0;
                else
                  v59 = v71 - (_BYTE *)ptr;
                sub_30D258(a1 + 3, ptr, v59, v58);
                if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                  sub_30D3E4(a3, (char *)&word_3E1F84);
                v50 = 1;
                sub_30D52C(__SPAIR64__(&ptr, a3), (int)v71);
              }
              goto LABEL_148;
            case 0x47u:
              *a2 = v32 + 1;
              if ( (word_438898[v32[1]] & 4) == 0 )
                goto LABEL_83;
              ++v32;
              goto LABEL_155;
            case 0x49u:
LABEL_155:
              *a2 = v32 + 1;
              if ( v32[1] == 95 )
              {
                v51 = v32 + 2;
                *a2 = v32 + 2;
                p_ptr = &ptr;
                v53 = 0;
                while ( 1 )
                {
                  v54 = *v51;
                  v55 = v51++;
                  v56 = v54 == 95;
                  if ( v54 != 95 )
                    v56 = v54 == 0;
                  if ( v56 )
                    break;
                  ++v53;
                  *(_BYTE *)p_ptr = v54;
                  p_ptr = (void **)((char *)p_ptr + 1);
                  *a2 = v51;
                  if ( v53 == 36 )
                  {
                    v54 = v55[1];
                    v55 = v51;
                    break;
                  }
                }
                if ( v54 != 95 )
                  goto LABEL_83;
                *a2 = v55 + 1;
                *((_BYTE *)&ptr + v53) = 0;
              }
              else
              {
                strncpy((char *)&ptr, (const char *)v32 + 1, 2u);
                BYTE2(ptr) = 0;
                v60 = strlen((const char *)v32 + 1);
                if ( v60 > 2 )
                  v61 = v32 + 3;
                else
                  v61 = &v32[v60 + 1];
                *a2 = v61;
              }
              sscanf((const char *)&ptr, "%x", &v66);
              sprintf((char *)&ptr, "int%u_t", v66);
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              if ( (_BYTE)ptr )
              {
                sub_30D3E4(a3, (char *)&ptr);
                if ( v4 )
                  goto LABEL_152;
              }
              else
              {
LABEL_151:
                if ( v4 )
                {
LABEL_152:
                  v5 = 4;
                  goto LABEL_116;
                }
              }
LABEL_172:
              v4 = 4;
              v5 = 4;
LABEL_116:
              v37 = v68;
              if ( v67 != v68 )
              {
                sub_30D3E4(a3, (char *)&word_3E1F84);
                sub_30D52C(__SPAIR64__(&v67, a3), (int)v68);
                v37 = v67;
              }
              break;
            case 0x62u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "bool");
              if ( !v4 )
                v4 = 5;
              v5 = 5;
              goto LABEL_116;
            case 0x63u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "char");
              if ( !v4 )
                goto LABEL_220;
              goto LABEL_188;
            case 0x64u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "double");
              if ( v4 )
                goto LABEL_212;
              goto LABEL_180;
            case 0x66u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "float");
              if ( v4 )
                goto LABEL_212;
              goto LABEL_180;
            case 0x69u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "int");
              if ( v4 )
                goto LABEL_152;
              goto LABEL_172;
            case 0x6Cu:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "long");
              if ( v4 )
                goto LABEL_152;
              goto LABEL_172;
            case 0x72u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "long double");
              if ( v4 )
              {
LABEL_212:
                v5 = 7;
              }
              else
              {
LABEL_180:
                v4 = 7;
                v5 = 7;
              }
              goto LABEL_116;
            case 0x73u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "short");
              if ( v4 )
                goto LABEL_152;
              goto LABEL_172;
            case 0x74u:
              ptr = 0;
              v72 = 0;
              v71 = 0;
              v50 = sub_310880((int)a1, (int)a2, (int)&ptr, 0, 1, 1);
              sub_30D52C(__SPAIR64__(&ptr, a3), (int)v71);
LABEL_148:
              if ( ptr )
                free(ptr);
              if ( v50 )
                goto LABEL_151;
              goto LABEL_83;
            case 0x76u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "void");
              if ( v4 )
                goto LABEL_152;
              goto LABEL_172;
            case 0x77u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "wchar_t");
              if ( v4 )
              {
LABEL_188:
                v5 = 6;
              }
              else
              {
LABEL_220:
                v4 = 6;
                v5 = 6;
              }
              goto LABEL_116;
            case 0x78u:
              *a2 = v32 + 1;
              if ( *(_DWORD *)a3 != *(_DWORD *)(a3 + 4) )
                sub_30D3E4(a3, (char *)&word_3E1F84);
              sub_30D3E4(a3, "long long");
              if ( !v4 )
                goto LABEL_172;
              goto LABEL_152;
            default:
              goto LABEL_83;
          }
          break;
      }
      break;
    }
  }
  else
  {
LABEL_83:
    if ( *(_DWORD *)a3 )
    {
      free(*(void **)a3);
      v37 = v67;
      v5 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)a3 = 0;
    }
    else
    {
      v5 = 0;
      v37 = v67;
    }
  }
  if ( v37 )
    free(v37);
  if ( v62 )
    --a1[23];
  if ( v5 )
  {
    if ( v4 )
      return v4;
    else
      return 4;
  }
  return v5;
}
