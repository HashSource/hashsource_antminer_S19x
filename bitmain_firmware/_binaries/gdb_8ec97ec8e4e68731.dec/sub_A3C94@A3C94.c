int __fastcall sub_A3C94(int a1, int a2)
{
  char *v2; // r6
  _BYTE *v5; // r1
  int v6; // r3
  unsigned int v7; // r2
  char *v8; // r3
  __int64 v9; // r0
  int v10; // r2
  void *v11; // r0
  int v13; // r0
  char *v14; // r0
  const char *v15; // r0
  char *v16; // r8
  size_t v17; // r0
  char *v18; // r8
  char v19; // r2
  unsigned int v20; // r0
  _BYTE *v21; // r1
  int v22; // r2
  char *v23; // r3
  __int64 v24; // r0
  int v25; // r2
  unsigned int v26; // r2
  char *v27; // r3
  __int64 v28; // r0
  int v29; // r2
  char *v30; // [sp+8h] [bp-48h] BYREF
  _QWORD v31[2]; // [sp+Ch] [bp-44h] BYREF
  void *ptr; // [sp+20h] [bp-30h] BYREF
  _QWORD v33[2]; // [sp+24h] [bp-2Ch] BYREF
  void *v34; // [sp+38h] [bp-18h] BYREF
  _QWORD v35[2]; // [sp+3Ch] [bp-14h] BYREF

  v2 = (char *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = a1 + 8;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *(_BYTE **)(a2 + 8);
  if ( *v5 == 60 )
  {
    v6 = *(_DWORD *)(a2 + 12);
    v7 = v6 - 1;
    if ( v5[v6 - 1] != 62 )
    {
      if ( !v6 )
        sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", 1u, 0);
      ptr = (char *)v33 + 4;
      sub_9D8E0(&ptr, v5 + 1, (int)&v5[v6]);
      v8 = *(char **)a1;
      if ( ptr == (char *)v33 + 4 )
      {
        sub_33B48C(a1, &ptr);
        v8 = (char *)ptr;
      }
      else
      {
        v9 = v33[0];
        if ( v2 == v8 )
        {
          *(_DWORD *)a1 = ptr;
          *(_QWORD *)(a1 + 4) = v9;
        }
        else
        {
          *(_DWORD *)a1 = ptr;
          *(_DWORD *)(a1 + 4) = v9;
          v10 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 8) = HIDWORD(v9);
          if ( v8 )
          {
            ptr = v8;
            HIDWORD(v33[0]) = v10;
            goto LABEL_8;
          }
        }
        ptr = (char *)v33 + 4;
        v8 = (char *)v33 + 4;
      }
LABEL_8:
      LODWORD(v33[0]) = 0;
      *v8 = 0;
      v11 = ptr;
      if ( ptr == (char *)v33 + 4 )
      {
LABEL_10:
        *(_BYTE *)(a1 + 24) = *(_BYTE *)(a1 + 24) & 0xF0 | 5;
        return a1;
      }
LABEL_9:
      sub_339E64(v11);
      goto LABEL_10;
    }
    v20 = v6 - 2;
    if ( !v6 )
      sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", 1u, 0);
    v21 = v5 + 1;
    if ( v20 > v7 )
      v22 = (int)&v21[v7];
    else
      v22 = (int)&v21[v20];
    v30 = (char *)v31 + 4;
    sub_9D8E0(&v30, v21, v22);
    v23 = *(char **)a1;
    if ( v30 == (char *)v31 + 4 )
    {
      sub_33B48C(a1, &v30);
      v23 = v30;
    }
    else
    {
      v24 = v31[0];
      if ( v2 == v23 )
      {
        *(_DWORD *)a1 = v30;
        *(_QWORD *)(a1 + 4) = v24;
      }
      else
      {
        *(_DWORD *)a1 = v30;
        *(_DWORD *)(a1 + 4) = v24;
        v25 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = HIDWORD(v24);
        if ( v23 )
        {
          v30 = v23;
          HIDWORD(v31[0]) = v25;
          goto LABEL_29;
        }
      }
      v30 = (char *)v31 + 4;
      v23 = (char *)v31 + 4;
    }
LABEL_29:
    LODWORD(v31[0]) = 0;
    *v23 = 0;
    v11 = v30;
    if ( v30 == (char *)v31 + 4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  *(_BYTE *)(a1 + 24) &= ~4u;
  v13 = sub_33C62C(a2 + 8, &dword_3C439C, 0, 2);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a1 + 24) & 0xFE | (v13 != -1);
  if ( v13 == -1 && (v14 = sub_9EAD0(*(const char **)(a2 + 8)), v15 = sub_9DBFC(v14, 0), (v16 = (char *)v15) != 0) )
  {
    v17 = strlen(v15);
    sub_33BC54(a1, 0, *(_DWORD *)(a1 + 4), v16, v17);
  }
  else
  {
    sub_33B48C(a1, a2 + 8);
  }
  v18 = *(char **)a1;
  if ( !strncmp(*(const char **)a1, "standard__", 0xAu) )
  {
    v26 = *(_DWORD *)(a1 + 4);
    if ( v26 <= 9 )
      sub_33D20C(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        0xAu,
        *(_DWORD *)(a1 + 4));
    v34 = (char *)v35 + 4;
    sub_9D8E0(&v34, v18 + 10, (int)&v18[v26]);
    v27 = *(char **)a1;
    if ( v34 == (char *)v35 + 4 )
    {
      sub_33B48C(a1, &v34);
      v27 = (char *)v34;
      goto LABEL_40;
    }
    v28 = v35[0];
    if ( v2 == v27 )
    {
      *(_DWORD *)a1 = v34;
      *(_QWORD *)(a1 + 4) = v28;
    }
    else
    {
      *(_DWORD *)a1 = v34;
      *(_DWORD *)(a1 + 4) = v28;
      v29 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = HIDWORD(v28);
      if ( v27 )
      {
        v34 = v27;
        HIDWORD(v35[0]) = v29;
LABEL_40:
        LODWORD(v35[0]) = 0;
        *v27 = 0;
        if ( v34 != (char *)v35 + 4 )
          sub_339E64(v34);
        *(_BYTE *)(a1 + 24) |= 8u;
        goto LABEL_17;
      }
    }
    v34 = (char *)v35 + 4;
    v27 = (char *)v35 + 4;
    goto LABEL_40;
  }
  *(_BYTE *)(a1 + 24) &= ~8u;
LABEL_17:
  if ( *(_DWORD *)a2 == 1 || (v19 = *(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v19 = 0;
  }
  else if ( (*(_BYTE *)(a1 + 24) & 8) == 0 )
  {
    v19 = sub_33C6C4(a2 + 8, 46, 0) == -1;
  }
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a1 + 24) & 0xFD | (2 * (v19 & 1));
  return a1;
}
