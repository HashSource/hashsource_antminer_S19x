void *__fastcall sub_298578(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  _BOOL4 v3; // r3
  int v4; // r3
  void *v5; // r11
  int v6; // r4
  int v8; // r10
  unsigned __int8 *v9; // r9
  bool v10; // zf
  const char *v11; // r4
  bool v12; // zf
  int v13; // t1
  int v14; // r5
  const char *v15; // r8
  int v16; // r0
  size_t v17; // r7
  size_t v18; // r2
  bool v19; // cc
  char *v20; // r0
  int v21; // r5
  char *v22; // r0
  int v24; // r1
  unsigned __int8 *v25; // r7
  const char *v26; // r9
  char *v27; // r0
  unsigned __int8 *v28; // r2
  size_t v29; // r1
  void *v30; // r0
  int v31; // [sp+4h] [bp-20h]
  _BOOL4 v32; // [sp+Ch] [bp-18h]
  int v33; // [sp+10h] [bp-14h]
  size_t v34; // [sp+10h] [bp-14h]

  v3 = a2 != -1;
  if ( !a3 )
    v3 = 0;
  v32 = v3;
  if ( v3 )
    *a3 = -1;
  v4 = *a1;
  if ( !*a1 )
    return (void *)*a1;
  v6 = 0;
  v5 = 0;
  v8 = 0;
  v9 = a1;
  v31 = 0;
  while ( 1 )
  {
    v10 = v4 == 32;
    if ( v4 != 32 )
      v10 = v4 == 9;
    if ( v10 )
      break;
    v14 = v6;
    v15 = (const char *)v9;
LABEL_19:
    if ( (unsigned __int8)byte_48BB34 != v4 )
    {
      v16 = sub_2980CC((int)a1, v14);
      v6 = v16;
      if ( v16 == v14 )
      {
        if ( off_4707B0 )
        {
          v24 = a1[v14 + 1];
          v9 = &a1[v14 + 1];
          if ( *v9 )
          {
            v33 = v16;
            v25 = &a1[v14 + 2];
            v26 = off_4707B0;
            v6 = v14 + 1;
            do
            {
              v27 = strchr(v26, v24);
              v28 = v25;
              if ( !v27 )
              {
                v9 = &a1[v6];
                v17 = v6 - v33;
                v18 = v6 - v33 + 1;
                goto LABEL_22;
              }
              v24 = *v25;
              ++v6;
              ++v25;
            }
            while ( v24 );
            v9 = v28;
            v17 = v6 - v33;
            v18 = v6 - v33 + 1;
          }
          else
          {
            v6 = v14 + 1;
            v17 = 1;
            v18 = 2;
          }
        }
        else
        {
          v17 = 0;
          v9 = &a1[v14];
          v18 = 1;
        }
      }
      else
      {
        v17 = v16 - v14;
        v9 = &a1[v16];
        v18 = v16 - v14 + 1;
      }
LABEL_22:
      if ( v32 )
      {
        v19 = a2 <= v14;
        if ( a2 >= v14 )
          v19 = v6 <= a2;
        if ( !v19 )
          *a3 = v8;
      }
      if ( v31 <= v8 + 2 )
      {
        v29 = 4 * (v31 + 10);
        v34 = v18;
        v31 += 10;
        v30 = sub_93050(v5, v29);
        v18 = v34;
        v5 = v30;
      }
      ++v8;
      v20 = (char *)sub_93028(v18);
      v21 = v8 + 0x3FFFFFFF;
      v22 = strncpy(v20, v15, v17);
      v22[v17] = 0;
      *((_DWORD *)v5 + v21) = v22;
      *((_DWORD *)v5 + v21 + 1) = 0;
      v4 = *v9;
      if ( *v9 )
        continue;
    }
    return v5;
  }
  v11 = (const char *)&a1[v6 + 1];
  while ( 1 )
  {
    v14 = v11 - (const char *)a1;
    v15 = v11;
    v13 = *(unsigned __int8 *)v11++;
    v4 = v13;
    if ( !v13 )
      return v5;
    v12 = v4 == 9;
    if ( v4 != 9 )
      v12 = v4 == 32;
    if ( !v12 )
      goto LABEL_19;
  }
}
