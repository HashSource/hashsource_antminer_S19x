int __fastcall sub_544C8(unsigned __int8 **a1, int a2, const char *a3, int a4, int a5)
{
  unsigned __int8 *v6; // r2
  int v9; // r5
  int v10; // r0
  int v11; // r7
  unsigned __int8 *v12; // r4
  int v13; // r5
  bool v14; // zf
  int v15; // r3
  bool v16; // zf
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r3
  size_t v20; // r9
  int v21; // r2
  int v22; // t1
  bool v23; // zf
  const char *v24; // r10
  size_t v25; // r0
  size_t v26; // r3
  unsigned __int8 *v27; // r5
  size_t v28; // r4
  char *v29; // r0
  char v30[4]; // [sp+0h] [bp-94h] BYREF
  size_t v31; // [sp+4h] [bp-90h]
  int v32; // [sp+8h] [bp-8Ch] BYREF
  char v33[100]; // [sp+Ch] [bp-88h] BYREF

  v6 = *a1;
  v32 = 0;
  if ( !v6 )
    sub_946E0("Lack of needed %scommand", a3);
  v9 = a2;
  v10 = sub_5431C(a1, a2, &v32, a5);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 == -1 )
    {
      v11 = v32;
      if ( v32 )
      {
        a3 = *(const char **)(v32 + 56);
        v9 = **(_DWORD **)(v32 + 52);
      }
      else if ( a4 < 0 )
      {
        return v11;
      }
      v18 = *a1;
      v19 = *a1;
      do
      {
        v20 = v19 - v18;
        v22 = *v19++;
        v21 = v22;
        v23 = (v22 & 0xDF) == 0;
        if ( (v22 & 0xDF) != 0 )
          v23 = v21 == 9;
      }
      while ( !v23 );
      v33[0] = 0;
      while ( 1 )
      {
        if ( !v9 )
          goto LABEL_44;
        v24 = *(const char **)(v9 + 4);
        if ( !strncmp((const char *)v18, v24, v20) )
        {
          v31 = strlen(v33);
          v25 = strlen(v24);
          v26 = v31;
          if ( v31 + v25 + 6 > 0x63 )
          {
            *(_WORD *)&v33[v31] = 11822;
            v33[v26 + 2] = 0;
LABEL_44:
            sub_946E0("Ambiguous %scommand \"%s\": %s.", a3, (const char *)v18, v33);
          }
          if ( v33[0] )
          {
            *(_WORD *)&v33[v31] = *(_WORD *)", ";
            v33[v26 + 2] = aS_47[6];
          }
          strcat(v33, *(const char **)(v9 + 4));
        }
        v9 = *(_DWORD *)v9;
      }
    }
    v12 = *a1;
    v13 = **a1;
    if ( (*(_WORD *)(v10 + 12) & 0x180) == 0x80 )
    {
      if ( !**a1 )
        return v11;
      if ( !isspace(**a1) )
        sub_946E0("Argument must be preceded by space.");
    }
    while ( 1 )
    {
      v14 = v13 == 32;
      if ( v13 != 32 )
        v14 = v13 == 9;
      if ( !v14 )
        break;
      *a1 = ++v12;
      v13 = *v12;
    }
    v15 = *(_DWORD *)(v11 + 52);
    v16 = v15 == 0;
    if ( v15 )
      v16 = v13 == 0;
    if ( !v16 && (*(_BYTE *)(v11 + 12) & 0x20) == 0 )
      sub_15898(*(const char **)(v11 + 56), (const char *)v12);
  }
  else if ( !a4 )
  {
    v27 = *a1;
    if ( **a1 == 33 )
      v28 = 1;
    else
      v28 = (size_t)sub_52FA4(*a1);
    v29 = strncpy(v30, (const char *)v27, v28);
    v30[v28] = 0;
    sub_15898(a3, v29);
  }
  return v11;
}
