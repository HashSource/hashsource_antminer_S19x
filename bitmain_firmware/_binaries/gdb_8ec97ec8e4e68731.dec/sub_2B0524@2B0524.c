bool __fastcall sub_2B0524(int a1, int a2)
{
  const char *v3; // r6
  size_t v5; // r0
  int v6; // r7
  unsigned int v7; // r0
  _DWORD *v8; // r9
  unsigned int v9; // r8
  unsigned int v10; // r2
  unsigned int v11; // r6
  int v12; // r5
  int v13; // r7
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r3
  int v18; // r9
  int v19; // r8
  int v20; // r8
  int v21; // r9
  int v22; // r5
  int v23; // t1
  size_t v24; // r11
  int v25; // r3
  char *v26; // r2
  int v27; // t1
  char *p_s; // r5
  size_t v29; // r0
  int v30; // [sp+8h] [bp-3Ch]
  char s; // [sp+16h] [bp-2Eh] BYREF
  char v32; // [sp+17h] [bp-2Dh] BYREF

  v3 = *(const char **)a1;
  v30 = *(_DWORD *)(a1 + 160);
  v5 = strlen(*(const char **)a1);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a1 + 124);
    if ( v6 )
    {
      v18 = v5;
      v19 = *(_DWORD *)(a1 + 120);
      if ( sub_2A8884((int)"$$ ", 3, a1) != 3
        || sub_2A8884(*(_DWORD *)a1, v18, a1) != v18
        || sub_2A8884((int)"\r\n", 2, a1) != 2 )
      {
        return 0;
      }
      if ( v6 > 0 )
      {
        v20 = v19 - 4;
        v21 = 0;
        do
        {
          v23 = *(_DWORD *)(v20 + 4);
          v20 += 4;
          v22 = v23;
          if ( !sub_302A7C(a1, v23) && (*(_DWORD *)(v22 + 12) & 4) == 0 )
          {
            v24 = strlen(*(const char **)(v22 + 4));
            if ( sub_2A8884((int)"  ", 2, a1) != 2 || v24 != sub_2A8884(*(_DWORD *)(v22 + 4), v24, a1) )
              return 0;
            sprintf(
              &s,
              "%08lx",
              *(_DWORD *)(v22 + 8)
            + *(_DWORD *)(*(_DWORD *)(v22 + 16) + 56)
            + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v22 + 16) + 60) + 32));
            if ( s == 48 && (v25 = (unsigned __int8)v32, v32) )
            {
              v26 = &v32;
              do
              {
                p_s = v26;
                if ( v25 != 48 )
                  break;
                v27 = (unsigned __int8)*++v26;
                v25 = v27;
              }
              while ( v27 );
            }
            else
            {
              p_s = &s;
            }
            v29 = strlen(p_s);
            p_s[v29] = 13;
            p_s[v29 + 1] = 10;
            *(p_s - 1) = 36;
            *(p_s - 2) = 32;
            if ( v29 + 4 != sub_2A8884((int)(p_s - 2), v29 + 4, a1) )
              return 0;
          }
        }
        while ( v6 != ++v21 );
      }
      if ( sub_2A8884((int)"$$ \r\n", 5, a1) != 5 )
        return 0;
      v3 = *(const char **)a1;
      v5 = strlen(*(const char **)a1);
    }
  }
  if ( v5 > 0x28 )
    v7 = (unsigned int)(v3 + 40);
  else
    v7 = (unsigned int)&v3[v5];
  if ( !sub_2AFE64(a1, 0, 0, (unsigned int)v3, v7) )
    return 0;
  v8 = *(_DWORD **)v30;
  if ( *(_DWORD *)v30 )
  {
    while ( 1 )
    {
      v9 = v8[1];
      if ( dword_470AB0 )
      {
        if ( dword_470AB0 > (unsigned int)(253 - *(_DWORD *)(v30 + 8)) )
          dword_470AB0 = 253 - *(_DWORD *)(v30 + 8);
      }
      else
      {
        dword_470AB0 = 1;
      }
      v10 = v8[3];
      if ( v10 )
        break;
LABEL_20:
      v8 = (_DWORD *)*v8;
      if ( !v8 )
        return sub_2AFE64(a1, 10 - *(_DWORD *)(v30 + 8), *(_DWORD *)(a1 + 116), 0, 0);
    }
    v11 = 0;
    while ( 1 )
    {
      v12 = v10 - v11;
      v13 = v8[2];
      if ( v10 - v11 >= dword_470AB0 )
        v12 = dword_470AB0;
      v14 = sub_2A6904(a1);
      v15 = sub_347418(v11, v14);
      v11 += v12;
      v16 = v9;
      v9 += v12;
      if ( !sub_2AFE64(a1, *(_DWORD *)(v30 + 8), v15 + v13, v16, v9) )
        return 0;
      v10 = v8[3];
      if ( v10 <= v11 )
        goto LABEL_20;
    }
  }
  return sub_2AFE64(a1, 10 - *(_DWORD *)(v30 + 8), *(_DWORD *)(a1 + 116), 0, 0);
}
