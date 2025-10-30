int __fastcall sub_310880(_DWORD *a1, unsigned __int8 **a2, const void **a3, unsigned int a4, int a5, int a6)
{
  unsigned __int8 *v9; // r1
  int v11; // r9
  signed int v13; // r10
  unsigned __int8 *v14; // r11
  __int64 v15; // r0
  int v16; // r0
  int v17; // r5
  size_t v18; // r9
  void *v19; // r0
  int v20; // r12
  unsigned __int8 *v21; // r3
  int v22; // r2
  int v23; // r0
  _BYTE *v24; // r1
  _BYTE *v25; // r2
  size_t v26; // r2
  signed int v27; // r10
  __int64 v28; // r0
  void *v29; // r0
  int v30; // r0
  int v31; // r9
  int v32; // r3
  char *v33; // r1
  char *v34; // r1
  _DWORD *v35; // r0
  int v36; // r3
  _DWORD *v37; // r3
  size_t v38; // r10
  void *v39; // r0
  int v40; // r3
  void *v41; // r0
  int v42; // r3
  size_t n; // [sp+0h] [bp-34h]
  size_t nb; // [sp+0h] [bp-34h]
  size_t na; // [sp+0h] [bp-34h]
  int v46; // [sp+4h] [bp-30h]
  int v47; // [sp+8h] [bp-2Ch]
  signed int v48; // [sp+14h] [bp-20h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  int v50; // [sp+1Ch] [bp-18h]
  int v51; // [sp+20h] [bp-14h]
  void *src; // [sp+24h] [bp-10h] BYREF
  int v53; // [sp+28h] [bp-Ch]
  int v54; // [sp+2Ch] [bp-8h]

  v9 = *a2;
  *a2 = v9 + 1;
  if ( !a5 )
    goto LABEL_18;
  if ( v9[1] == 122 )
  {
    *a2 = v9 + 2;
    if ( !v9[2] )
      return 0;
    *a2 = v9 + 3;
    v30 = sub_30D0AC(a2);
    v31 = v30;
    if ( v30 == -1 || a1[16] && a1[17] <= v30 )
      return 0;
    if ( sub_30D0AC(a2) == -1 )
      return 0;
    v32 = a1[16];
    if ( v32 )
    {
      v33 = *(char **)(v32 + 4 * v31);
      if ( v33 )
      {
        if ( *v33 )
        {
          sub_30D3E4((int)a3, v33);
          if ( a4 )
          {
            v34 = *(char **)(a1[16] + 4 * v31);
            if ( v34 )
            {
              if ( *v34 )
              {
                sub_30D3E4(a4, v34);
                goto LABEL_46;
              }
            }
          }
        }
      }
LABEL_18:
      sub_30D3E4((int)a3, (char *)&word_364FA4);
      if ( sub_30CBF8(a2, &v48) )
      {
        v16 = v48;
        if ( !a5 )
        {
          v35 = sub_93028(4 * v48);
          v36 = v48;
          a1[16] = v35;
          a1[17] = v36;
          if ( v36 > 0 )
          {
            v37 = &v35[v36];
            do
              *v35++ = 0;
            while ( v37 != v35 );
            goto LABEL_21;
          }
LABEL_80:
          v11 = 0;
          goto LABEL_36;
        }
LABEL_20:
        if ( v16 > 0 )
        {
LABEL_21:
          v47 = 0;
          goto LABEL_22;
        }
        goto LABEL_80;
      }
      return 0;
    }
    sub_30D428((int)a3, v31);
    if ( !a4 )
      goto LABEL_18;
    sub_30D428(a4, v31);
    goto LABEL_46;
  }
  v13 = sub_30D00C(a2);
  v48 = v13;
  if ( v13 <= 0 )
    return 0;
  v14 = *a2;
  if ( v13 > (int)strlen((const char *)*a2) )
    return 0;
  if ( (*a1 & 4) == 0 || (v11 = strncmp((const char *)v14, "JArray1Z", 8u)) != 0 )
  {
    sub_30D320(__SPAIR64__((unsigned int)v14, (unsigned int)a3), v13);
    if ( a4 )
    {
      if ( !v48 )
        goto LABEL_46;
      LODWORD(v15) = a4;
      HIDWORD(v15) = *a2;
      sub_30D320(v15, v48);
      *a2 += v48;
      goto LABEL_18;
    }
    *a2 += v48;
LABEL_46:
    sub_30D3E4((int)a3, (char *)&word_364FA4);
    if ( sub_30CBF8(a2, &v48) )
    {
      v16 = v48;
      goto LABEL_20;
    }
    return 0;
  }
  if ( a4 )
  {
    sub_30D320(__SPAIR64__((unsigned int)v14, a4), v13);
    *a2 += v48;
  }
  else
  {
    *a2 = &v14[v13];
  }
  if ( !sub_30CBF8(a2, &v48) )
    return 0;
  if ( v48 <= 0 )
    goto LABEL_16;
  v47 = a5;
LABEL_22:
  v17 = 0;
  while ( 1 )
  {
    v21 = *a2;
    v22 = **a2;
    if ( v22 != 90 )
    {
      if ( v22 == 122 )
      {
        *a2 = v21 + 1;
        v11 = sub_3106F8(a1, a2, (int)a3);
        if ( !v11 )
          goto LABEL_35;
        v27 = sub_30D00C(a2);
        if ( v27 > 0 && (int)strlen((const char *)*a2) >= v27 )
        {
          sub_30D3E4((int)a3, (char *)&word_3E1F84);
          HIDWORD(v28) = *a2;
          LODWORD(v28) = a3;
          sub_30D320(v28, v27);
          if ( !a5 )
          {
            na = a1[16];
            v41 = sub_93028(v27 + 1);
            v42 = a1[16];
            *(_DWORD *)(na + 4 * v17) = v41;
            memcpy(*(void **)(v42 + 4 * v17), *a2, v27);
            *(_BYTE *)(*(_DWORD *)(a1[16] + 4 * v17) + v27) = 0;
          }
          *a2 += v27;
        }
      }
      else
      {
        v18 = sub_30E828(a1, a2, (unsigned int)&ptr);
        if ( ptr )
        {
          free(ptr);
          v50 = 0;
          v51 = 0;
          ptr = 0;
        }
        if ( !v18 )
          goto LABEL_49;
        if ( a5 )
        {
          v11 = sub_30E114(a1, a2, (unsigned int)a3, v18);
          if ( !v11 )
            goto LABEL_49;
        }
        else
        {
          src = 0;
          v54 = 0;
          v53 = 0;
          v11 = sub_30E114(a1, a2, (unsigned int)&src, v18);
          if ( !v11 )
          {
            if ( src )
              free(src);
LABEL_49:
            v11 = 0;
            goto LABEL_35;
          }
          v46 = a1[16];
          n = v53 - (_DWORD)src;
          v19 = sub_93028(v53 - (_DWORD)src + 1);
          v20 = a1[16];
          *(_DWORD *)(v46 + 4 * v17) = v19;
          memcpy(*(void **)(v20 + 4 * v17), src, n);
          *(_BYTE *)(*(_DWORD *)(a1[16] + 4 * v17) + n) = 0;
          sub_30D52C(__SPAIR64__(&src, (unsigned int)a3), v53);
          if ( src )
            free(src);
        }
      }
      goto LABEL_30;
    }
    *a2 = v21 + 1;
    v11 = sub_30E828(a1, a2, (unsigned int)&ptr);
    if ( !v11 )
      break;
    sub_30D52C(__SPAIR64__(&ptr, (unsigned int)a3), v50);
    if ( a5 )
    {
      v29 = ptr;
      if ( !ptr )
        goto LABEL_30;
LABEL_60:
      free(v29);
      v50 = 0;
      v51 = 0;
      ptr = 0;
      goto LABEL_30;
    }
    v38 = v50 - (_DWORD)ptr;
    nb = a1[16];
    v39 = sub_93028(v50 - (_DWORD)ptr + 1);
    v40 = a1[16];
    *(_DWORD *)(nb + 4 * v17) = v39;
    memcpy(*(void **)(v40 + 4 * v17), ptr, v38);
    *(_BYTE *)(*(_DWORD *)(a1[16] + 4 * v17) + v38) = 0;
    v29 = ptr;
    if ( ptr )
      goto LABEL_60;
LABEL_30:
    if ( v48 <= ++v17 )
      goto LABEL_35;
    sub_30D3E4((int)a3, ", ");
  }
  if ( ptr )
  {
    free(ptr);
    v50 = 0;
    v51 = 0;
    ptr = 0;
  }
LABEL_35:
  if ( v47 )
  {
LABEL_16:
    sub_30D3E4((int)a3, (char *)&dword_433230);
    goto LABEL_39;
  }
LABEL_36:
  if ( *((char *)a3[1] - 1) == 62 )
    sub_30D3E4((int)a3, (char *)&word_3E1F84);
  sub_30D3E4((int)a3, ">");
LABEL_39:
  if ( (a5 & a6) != 0 )
  {
    v23 = sub_30CE10(a1);
    v24 = *a3;
    v25 = a3[1];
    if ( *a3 == v25 )
      v26 = 0;
    else
      v26 = v25 - v24;
    sub_30D258(a1 + 3, v24, v26, v23);
  }
  return v11;
}
