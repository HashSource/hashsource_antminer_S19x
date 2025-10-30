int __fastcall sub_2DC0C(int a1, _DWORD *a2)
{
  _BYTE *v2; // r7
  int v3; // r4
  const char *v5; // r9
  unsigned __int8 *i; // r10
  int v8; // r6
  size_t v9; // r2
  int *v10; // r0
  unsigned int v11; // r1
  bool v12; // cc
  char *v13; // r7
  char *v14; // r0
  const char *v15; // r0
  int v16; // r2
  int v17; // r10
  int v18; // r0
  char *v19; // r9
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r1
  _DWORD *v23; // r5
  int v24; // r0
  int v25; // [sp+0h] [bp-3Ch] BYREF
  _DWORD *v26; // [sp+4h] [bp-38h]
  char *endptr[3]; // [sp+Ch] [bp-30h] BYREF

  v2 = (_BYTE *)*a2;
  if ( *(_BYTE *)*a2 != 91 )
    return 0;
  v5 = v2 + 1;
  v26 = a2;
  for ( i = v2 + 1; ; ++i )
  {
    v8 = *i;
    v3 = isalnum(v8);
    if ( !v3 )
      break;
  }
  if ( v8 == 44 )
  {
    v9 = i - (unsigned __int8 *)v5;
    v10 = (int *)((i - (unsigned __int8 *)v5 + 16) & 0xFFFFFFF8);
    v11 = (unsigned __int8)v2[1] - 48;
    v12 = v11 > 9;
    if ( v11 > 9 )
    {
      v13 = (char *)(i - (unsigned __int8 *)v5);
    }
    else
    {
      LOBYTE(v11) = 114;
      v13 = (char *)(v9 + 1);
      v10 = &v25;
    }
    if ( v12 )
    {
      v14 = (char *)&v25;
    }
    else
    {
      *(_BYTE *)v10 = v11;
      v14 = (char *)v10 + 1;
    }
    strncpy(v14, v5, v9);
    *((_BYTE *)&v25 + (_DWORD)v13) = 0;
    if ( sub_257E94(a1, (char *)&v25) == -1 )
      sub_946E0("Invalid register name `%s' on expression `%s'.", (const char *)&v25, (const char *)v26[4]);
    v15 = (const char *)sub_9360C(i + 1);
    v16 = *(unsigned __int8 *)v15;
    if ( (unsigned int)(v16 - 35) <= 1 )
      v16 = *(unsigned __int8 *)++v15;
    if ( v16 == 45 )
    {
      ++v15;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    v18 = strtol(v15, endptr, 10);
    v19 = endptr[0];
    if ( *endptr[0] == 93 )
    {
      v25 = v18;
      v20 = v26 + 1;
      sub_1C37BC(v26 + 1, 38);
      v21 = sub_1780B4(a1);
      sub_1C38F4(v20, *(_DWORD *)(v21 + 16));
      sub_1C3898(v20, v22, v25, v25 >> 31);
      sub_1C37BC(v20, 38);
      if ( v17 )
        sub_1C37BC(v20, 58);
      sub_1C37BC(v20, 44);
      endptr[1] = (char *)&v25;
      endptr[2] = v13;
      v3 = 1;
      sub_1C4F0C(v20, &v25, v13);
      sub_1C37BC(v20, 44);
      sub_1C37BC(v20, 1);
      sub_1C37BC(v20, 52);
      v23 = v26;
      v24 = sub_1700C0(v26[5]);
      sub_1C38F4(v20, v24);
      sub_1C37BC(v20, 52);
      sub_1C37BC(v20, 61);
      *v23 = v19 + 1;
    }
  }
  return v3;
}
