_BYTE *__fastcall sub_331E04(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // r3
  int v3; // lr
  int v4; // r6
  _BYTE *v5; // r12
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r2
  char *v10; // r7
  char *v11; // r6
  _DWORD *v12; // r2
  _BYTE *v13; // r2
  bool v14; // cc
  int v15; // r0
  _BYTE *v16; // r5
  _BYTE *v17; // r3
  int v18; // r0
  _BYTE *v19; // r12
  bool v20; // nf
  char v21; // r12
  int v22; // r12
  int v23; // r3
  int v24; // r3
  _BYTE *v25; // r3
  char v26; // t1
  _BYTE *v27; // r3
  _BYTE *v28; // r0

  v2 = *a1;
  v3 = (*a1 >> 26) & 0x1F;
  v4 = dword_439E14[v3];
  if ( (*a1 & 0x80000000) == 0 )
  {
    v5 = a2;
  }
  else
  {
    *a2 = 45;
    v5 = a2 + 1;
  }
  v6 = dword_439D94[v3];
  if ( v4 != 3 )
  {
    v7 = ((v2 >> 20) & 0x3F) - 101 + (v4 << 6);
    v8 = 4 * (unsigned __int16)word_439E94[v2 & 0x3FF];
    v9 = 4 * (unsigned __int16)word_439E94[(v2 >> 10) & 0x3FF];
    v10 = (char *)&byte_438DF0[v8];
    v11 = (char *)&byte_438DF0[v9];
    if ( v6 )
    {
      v12 = v5 + 4;
      *v5 = v6 + 48;
      *(_DWORD *)(v5 + 1) = *(_DWORD *)(v11 + 1);
      goto LABEL_7;
    }
LABEL_34:
    v23 = byte_438DF0[v9];
    if ( !byte_438DF0[v9] || (*(_DWORD *)v5 = *(_DWORD *)&v11[4 - v23], v12 = &v5[v23], &v5[v23] == v5) )
    {
      v24 = byte_438DF0[v8];
      if ( byte_438DF0[v8] )
      {
        v8 = *(_DWORD *)&v10[4 - v24];
        *(_DWORD *)v5 = v8;
        v13 = &v5[v24];
        if ( &v5[v24] != v5 )
        {
LABEL_8:
          v14 = v7 <= 0;
          if ( !v7 )
          {
            *v13 = 0;
            return a2;
          }
          if ( v7 > 0 )
            v8 = 1;
          v15 = v13 - v5 + v7;
          if ( v14 )
            v8 = 0;
          v16 = v13 - 1;
          if ( v8 | (v15 < -5) )
          {
            v17 = v5 + 1;
            v18 = v15 - 1;
            if ( v13 <= v5 + 1 )
              goto LABEL_20;
            if ( v17 > v16 )
            {
              v19 = v13;
LABEL_19:
              ++v13;
              *v19 = 46;
LABEL_20:
              v20 = v18 < 0;
              if ( v18 )
              {
                v21 = 69;
                *v13 = 69;
                if ( v18 >= 0 )
                  v21 = 43;
                else
                  v18 = -v18;
                if ( v20 )
                  v21 = 45;
                v13[1] = v21;
                v22 = byte_438DF0[4 * v18];
                *(_DWORD *)(v13 + 2) = *(_DWORD *)&byte_438DF0[4 * v18 + 4 - v22];
                v13 += v22 + 2;
              }
              goto LABEL_27;
            }
          }
          else
          {
            if ( v15 <= 0 )
            {
              v25 = &v13[1 - v15];
              v25[1] = 0;
              if ( v16 >= v5 )
              {
                do
                {
                  v26 = *--v13;
                  *v25-- = v26;
                }
                while ( v25 != &v5[1 - v15] );
              }
              *v5 = 48;
              v27 = v5 + 2;
              v5[1] = 46;
              if ( v15 )
              {
                v28 = &v27[-v15];
                do
                  *v27++ = 48;
                while ( v28 != v27 );
              }
              return a2;
            }
            v17 = &v5[v15];
            if ( v13 <= &v5[v15] )
              goto LABEL_27;
            if ( v17 > v16 )
            {
              *v13++ = 46;
LABEL_27:
              *v13 = 0;
              return a2;
            }
            v18 = 0;
          }
          v19 = v13;
          do
          {
            *v19 = *(v19 - 1);
            --v19;
          }
          while ( v19 != v17 );
          goto LABEL_19;
        }
      }
LABEL_38:
      v13 = v5 + 1;
      *v5 = 48;
      goto LABEL_8;
    }
LABEL_7:
    *v12 = *(_DWORD *)(v10 + 1);
    v13 = (char *)v12 + 3;
    if ( v13 != v5 )
      goto LABEL_8;
    goto LABEL_38;
  }
  if ( v6 )
  {
    if ( (v2 & 0x2000000) != 0 )
      *v5++ = 115;
    strcpy(v5, "NaN");
    if ( (v2 & 0xFFFFF) == 0 )
      return a2;
    v5 += 3;
    v7 = 0;
    v8 = 4 * (unsigned __int16)word_439E94[v2 & 0x3FF];
    v9 = 4 * (unsigned __int16)word_439E94[(v2 >> 10) & 0x3FF];
    v10 = (char *)&byte_438DF0[v8];
    v11 = (char *)&byte_438DF0[v9];
    goto LABEL_34;
  }
  strcpy(v5, "Inf");
  strcpy(v5 + 3, "inity");
  return a2;
}
