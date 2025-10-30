const char *__fastcall sub_82880(const char *a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r3
  const char *v8; // r4
  int v9; // r1
  int v10; // t1
  unsigned int v11; // r3
  int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // t1
  const char *v16; // r2
  int v17; // r4
  int v18; // r0
  int v19; // r3
  int v20; // t1
  int v21; // r0
  int v22; // r3
  int v23; // t1
  unsigned int v24; // r3
  unsigned int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // t1
  int v29; // r0
  int v30; // r3
  int v31; // t1
  int v32; // r0
  unsigned int v33; // r3
  unsigned int v34; // t1
  char *v35; // r0
  const char *v36; // [sp+Ch] [bp-10h]

  while ( 2 )
  {
    v6 = dword_10837C;
    if ( !dword_10837C )
      v6 = sub_7F738(21);
    v7 = *(unsigned __int8 *)a1;
    v8 = a1;
    v9 = *(unsigned __int8 *)(v6 + v7);
    if ( *(_BYTE *)(v6 + v7) )
    {
      do
        v10 = *(unsigned __int8 *)++v8;
      while ( *(_BYTE *)(v6 + v10) );
      v9 = v8 - a1;
    }
    switch ( sub_827BC(a1, v9) )
    {
      case 1:
        v16 = v8 + 1;
        if ( *v8 != 61 )
          goto LABEL_20;
        v32 = dword_108394;
        if ( !dword_108394 )
        {
          v32 = sub_7F738(27);
          v16 = v8 + 1;
        }
        if ( !*(_BYTE *)(v32 + *((unsigned __int8 *)v8 + 1)) )
          goto LABEL_20;
        a1 = v16;
        do
        {
          v34 = *(unsigned __int8 *)++a1;
          v33 = v34;
        }
        while ( *(_BYTE *)(v32 + v34) );
        v17 = a1 - v16;
        if ( a1 != v16 )
        {
          if ( v33 <= 0x7F && (dword_A0784[v33] & 0x1000C01) != 0 )
          {
            v36 = v16;
            v35 = sub_826F8(v16, a1 - v16);
            v16 = v36;
            switch ( (unsigned int)v35 )
            {
              case 1u:
                *a3 = 1;
                goto LABEL_10;
              case 2u:
                *a3 = 5;
                goto LABEL_10;
              case 3u:
              case 4u:
                *a3 = 3;
                goto LABEL_10;
              case 5u:
                *a3 = 2;
                goto LABEL_10;
              case 6u:
              case 7u:
                *a3 = 4;
                goto LABEL_10;
              case 8u:
              case 9u:
                *a3 = 6;
                goto LABEL_10;
              default:
                break;
            }
          }
        }
        else
        {
LABEL_20:
          v17 = 0;
        }
        v8 = &v16[v17];
        *a3 = 0;
        v18 = dword_1083AC;
        if ( !dword_1083AC )
          v18 = sub_7F738(33);
        v19 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !*(_BYTE *)(v18 + v19) )
        {
          v20 = *(unsigned __int8 *)++v8;
          v19 = v20;
          if ( !v20 )
            return 0;
        }
        goto LABEL_27;
      case 2:
        v21 = dword_1083AC;
        if ( !dword_1083AC )
          v21 = sub_7F738(33);
        v22 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !*(_BYTE *)(v21 + v22) )
        {
          v23 = *(unsigned __int8 *)++v8;
          v22 = v23;
          if ( !v23 )
            return 0;
        }
        goto LABEL_27;
      case 3:
        v26 = dword_1083AC;
        if ( !dword_1083AC )
          v26 = sub_7F738(33);
        v27 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !*(_BYTE *)(v26 + v27) )
        {
          v28 = *(unsigned __int8 *)++v8;
          v27 = v28;
          if ( !v28 )
            return 0;
        }
LABEL_27:
        a1 = v8;
LABEL_10:
        v12 = dword_108358;
        if ( !dword_108358 )
          v12 = sub_7F738(12);
        v13 = *(unsigned __int8 *)a1;
        if ( *(_BYTE *)(v12 + v13) )
        {
          do
          {
            v14 = *(unsigned __int8 *)++a1;
            v13 = v14;
          }
          while ( *(_BYTE *)(v12 + v14) );
        }
        if ( v13 != 47 )
        {
          if ( v13 == 62 )
            return a1;
          if ( v13 > 0x7F || (dword_A0784[v13] & 0x80000) == 0 )
            return 0;
          continue;
        }
        *a3 = 0;
        return a1;
      case 4:
        v24 = *(unsigned __int8 *)v8;
        if ( v24 > 0x7F || (dword_A0784[v24] & 0x1000C01) == 0 )
          goto LABEL_51;
        a1 = v8;
        *a2 = 0;
        goto LABEL_10;
      case 5:
        v25 = *(unsigned __int8 *)v8;
        if ( v25 > 0x7F || (dword_A0784[v25] & 0x1000C01) == 0 )
          goto LABEL_51;
        a1 = v8;
        *a2 = 1;
        goto LABEL_10;
      case 6:
        v11 = *(unsigned __int8 *)v8;
        if ( v11 > 0x7F || (dword_A0784[v11] & 0x1000C01) == 0 )
          goto LABEL_51;
        a1 = v8;
        *a2 = 2;
        goto LABEL_10;
      default:
        v8 = a1;
LABEL_51:
        *a3 = 0;
        v29 = dword_1083AC;
        if ( !dword_1083AC )
          v29 = sub_7F738(33);
        v30 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !*(_BYTE *)(v29 + v30) )
        {
          v31 = *(unsigned __int8 *)++v8;
          v30 = v31;
          if ( !v31 )
            return 0;
        }
        return v8;
    }
  }
}
