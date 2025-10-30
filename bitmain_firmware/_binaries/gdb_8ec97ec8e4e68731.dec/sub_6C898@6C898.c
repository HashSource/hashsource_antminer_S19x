size_t __fastcall sub_6C898(char **a1)
{
  int v2; // r6
  char *v3; // r0
  size_t v4; // r10
  char *v5; // r0
  char *v6; // r2
  char *v7; // r1
  int v8; // r3
  int v9; // r7
  int v10; // r9
  const char *v11; // r4
  const char **v12; // r2
  const char *v13; // r7
  const char *i; // r4
  unsigned __int8 *v15; // r8
  char *v16; // r4
  char *v17; // r3
  int v18; // r0
  const char *v19; // r4
  const char **v20; // r2
  size_t result; // r0
  const char *v22; // r4
  const char **v23; // r2
  size_t v24; // r0
  int v25; // r8
  int v26; // r0
  int v27; // r1
  char *v28; // [sp+0h] [bp-54h] BYREF
  char *v29; // [sp+4h] [bp-50h]
  int v30; // [sp+8h] [bp-4Ch]
  char *v31; // [sp+Ch] [bp-48h]
  size_t n; // [sp+10h] [bp-44h]
  char *src; // [sp+14h] [bp-40h]
  char *v34; // [sp+18h] [bp-3Ch] BYREF
  char *v35; // [sp+1Ch] [bp-38h] BYREF
  char *s; // [sp+20h] [bp-34h] BYREF
  char *v37; // [sp+24h] [bp-30h] BYREF
  char *endptr[2]; // [sp+28h] [bp-2Ch] BYREF

  v2 = (int)a1[6];
  v3 = (char *)((int (__fastcall *)(int))loc_16D158)(v2);
  src = v3;
  if ( v3 )
    v4 = strlen(v3);
  else
    v4 = 0;
  v5 = (char *)((int (__fastcall *)(int))loc_16D1D0)(v2);
  v31 = v5;
  if ( v5 )
    n = strlen(v5);
  else
    n = 0;
  v7 = *a1;
  v8 = (unsigned __int8)**a1;
  if ( v8 == 43 )
  {
    v6 = v7 + 1;
    *a1 = v7 + 1;
    v8 = (unsigned __int8)*++v7;
  }
  if ( v8 == 45 )
  {
    v6 = v7 + 1;
    v9 = 1;
    *a1 = v7 + 1;
  }
  else
  {
    v9 = 0;
  }
  if ( v8 == 45 )
  {
    v8 = (unsigned __int8)v7[1];
    v7 = v6;
  }
  if ( (unsigned int)(v8 - 48) <= 9 )
  {
    v25 = strtol(v7, endptr, 10);
    *a1 = endptr[0];
    sub_1C37BC(a1 + 1, 38);
    v26 = sub_1780B4(v2);
    sub_1C38F4(a1 + 1, *(_DWORD *)(v26 + 16));
    sub_1C3898(a1 + 1, v27, v25, v25 >> 31);
    sub_1C37BC(a1 + 1, 38);
    if ( v9 )
      sub_1C37BC(a1 + 1, 58);
    if ( !sub_6C72C(v2, *a1, (const char **)&v35) )
      sub_946E0("Invalid register displacement syntax on expression `%s'.", a1[4]);
    v30 = 1;
  }
  else
  {
    v10 = sub_6C72C(v2, v7, (const char **)&v35);
    if ( !v10 )
    {
      v11 = *a1;
      v30 = 0;
      goto LABEL_15;
    }
    v30 = 0;
  }
  v10 = 1;
  v11 = &(*a1)[strlen(v35)];
  *a1 = (char *)v11;
LABEL_15:
  v12 = (const char **)((int (__fastcall *)(int))loc_16CF78)(v2);
  if ( !v12 )
  {
    v34 = "";
LABEL_36:
    v13 = (char *)v12 + (_DWORD)*a1;
    *a1 = (char *)v13;
    goto LABEL_18;
  }
  if ( sub_6C6BC(v11, (const char **)&v34, v12) )
  {
    v12 = (const char **)strlen(v34);
    goto LABEL_36;
  }
  v13 = *a1;
LABEL_18:
  for ( i = v13; ; ++i )
  {
    v15 = (unsigned __int8 *)(i + 1);
    if ( !isalnum(*(unsigned __int8 *)i) )
      break;
    *a1 = (char *)v15;
  }
  v16 = (char *)(i - v13);
  v29 = &v16[v4];
  LOBYTE(v28) = 0;
  if ( src && (unsigned int)*(unsigned __int8 *)v13 - 48 <= 9 )
  {
    v28 = (char *)((unsigned int)&v28 >> 3);
    strncpy((char *)&v28, src, v4);
    strncpy((char *)&v28 + v4, v13, (size_t)v16);
    v17 = v28;
    if ( v31 )
    {
      src = v28;
      strncpy((char *)&v28 + (_DWORD)v29, v31, n);
      v17 = src;
    }
    v16 += v4 + n;
  }
  else
  {
    src = (char *)((unsigned int)&v28 >> 3);
    strncpy((char *)&v28, v13, (size_t)v16);
    v17 = src;
  }
  v16[8 * (_DWORD)v17] = 0;
  if ( sub_257E94(v2, (char *)&v28) == -1 )
    sub_946E0("Invalid register name `%s' on expression `%s'.", (const char *)&v28, a1[4]);
  sub_1C37BC(a1 + 1, 44);
  endptr[0] = (char *)&v28;
  endptr[1] = v16;
  sub_1C4F0C(a1 + 1, &v28, v16);
  sub_1C37BC(a1 + 1, 44);
  if ( v10 )
  {
    if ( v30 )
      sub_1C37BC(a1 + 1, 1);
    sub_1C37BC(a1 + 1, 52);
    v18 = sub_1700C0(a1[5]);
    sub_1C38F4(a1 + 1, v18);
    sub_1C37BC(a1 + 1, 52);
    sub_1C37BC(a1 + 1, 61);
  }
  v19 = *a1;
  v20 = (const char **)((int (__fastcall *)(int))loc_16CFF0)(v2);
  if ( v20 )
  {
    if ( !sub_6C6BC(v19, (const char **)&s, v20) )
      sub_946E0("Missing register name suffix on expression `%s'.", a1[4]);
    result = strlen(s);
  }
  else
  {
    result = 0;
    s = "";
  }
  v22 = &(*a1)[result];
  *a1 = (char *)v22;
  if ( v10 )
  {
    v23 = (const char **)((int (__fastcall *)(int))loc_16D0E0)(v2);
    if ( v23 )
    {
      if ( !sub_6C6BC(v22, (const char **)&v37, v23) )
        sub_946E0("Missing indirection suffix on expression `%s'.", a1[4]);
      v24 = strlen(v37);
    }
    else
    {
      v24 = 0;
    }
    result = (size_t)&(*a1)[v24];
    *a1 = (char *)result;
  }
  return result;
}
