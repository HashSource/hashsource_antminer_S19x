char *__fastcall sub_28C61C(const char *a1, size_t *a2, int *a3, _DWORD *a4, size_t *a5)
{
  size_t v5; // r6
  _BYTE *v6; // r0
  const char *v7; // r4
  _BYTE *v8; // r5
  int v9; // r8
  int v10; // r7
  int v11; // r10
  int v12; // r9
  int v13; // r3
  signed int v14; // r0
  int v15; // r12
  _BYTE *v16; // r3
  const char *v17; // lr
  char v18; // t1
  size_t v19; // r4
  char *v20; // r0
  char *v21; // r0
  size_t v22; // r0
  int v23; // r3
  int v24; // r3
  int v26; // [sp+0h] [bp-2Ch]
  char *v28; // [sp+Ch] [bp-20h]
  const char *v30; // [sp+14h] [bp-18h]
  int v33; // [sp+20h] [bp-Ch]
  int v34; // [sp+24h] [bp-8h]

  if ( _ctype_get_mb_cur_max() <= 1 )
  {
    v19 = strlen(a1) + 1;
    goto LABEL_16;
  }
  v19 = strlen(a1) + 1;
  if ( dword_48BB60 )
  {
LABEL_16:
    if ( !strchr(a1, 1) )
    {
      v20 = (char *)sub_93028(v19);
      v21 = strcpy(v20, a1);
      v28 = v21;
      if ( a2 )
        *a2 = strlen(v21);
      if ( a3 )
        *a3 = 0;
      if ( a4 )
        *a4 = 0;
      if ( a5 )
      {
        if ( a2 )
          v22 = *a2;
        else
          v22 = strlen(v28);
        *a5 = v22;
      }
      return v28;
    }
  }
  v5 = 0;
  v6 = sub_93028(v19);
  v7 = a1;
  v8 = v6;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v28 = v6;
  v26 = 0;
  v33 = 0;
  v30 = 0;
  do
  {
    v13 = *(unsigned __int8 *)v7;
    if ( !*v7 )
      break;
    if ( v11 )
    {
      if ( v13 == 2 )
      {
        v11 = 0;
        if ( v7 != v30 + 1 )
          v33 = v8 - v28 - 1;
        goto LABEL_35;
      }
      if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
      {
        v34 = v7 - a1;
        v14 = sub_29B4D0(a1);
        v15 = v14 - (v7 - a1);
        if ( v14 != v7 - a1 )
          goto LABEL_11;
LABEL_14:
        v10 += v15;
        goto LABEL_15;
      }
      ++v8;
      ++v10;
      *(v8 - 1) = *v7;
LABEL_31:
      if ( !v9 )
      {
        v23 = v26;
        if ( dword_490144 <= v12 )
        {
          v9 = 1;
          v23 = v10;
        }
        v26 = v23;
      }
      goto LABEL_35;
    }
    if ( v13 != 1 )
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      {
        ++v8;
        ++v12;
        ++v5;
        *(v8 - 1) = *v7;
      }
      else
      {
        v34 = v7 - a1;
        v14 = sub_29B4D0(a1);
        v15 = v14 - (v7 - a1);
        if ( v14 != v7 - a1 )
        {
LABEL_11:
          v16 = v8 - 1;
          v17 = &v7[v15];
          do
          {
            v18 = *v7++;
            *++v16 = v18;
          }
          while ( v17 != v7 );
          v8 += v15;
          if ( v11 )
            goto LABEL_14;
        }
        v12 += v15;
        v5 += sub_28C428(a1, v34, v14, 0);
LABEL_15:
        --v7;
      }
      goto LABEL_31;
    }
    v11 = 1;
    v30 = v7;
LABEL_35:
    ++v7;
  }
  while ( v7 );
  v24 = dword_490144;
  *v8 = 0;
  if ( v24 <= v12 )
    v10 = v26;
  if ( a2 )
    *a2 = v12;
  if ( a3 )
    *a3 = v33;
  if ( a4 )
    *a4 = v10;
  if ( a5 )
    *a5 = v5;
  return v28;
}
