const char *__fastcall sub_813A4(const char *a1, _DWORD *a2, _DWORD *a3)
{
  char *v6; // r0
  int v7; // r3
  const char *v8; // r4
  int v9; // r1
  int v10; // t1
  char *v11; // r0
  int v12; // r3
  int v13; // t1
  char *v14; // r0
  int v15; // r3
  int v16; // t1
  unsigned int v18; // r3
  char *v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // t1
  const char *v22; // r5
  char *v23; // r0
  int v24; // r3
  int v25; // t1
  char *v26; // r0
  int v27; // r3
  int v28; // t1
  unsigned int v29; // r3
  unsigned int v30; // r3
  char *v31; // r0
  const char *v32; // r3
  int v33; // t1
  int v34; // r1
  unsigned int v35; // r3

  while ( 2 )
  {
    v6 = (char *)dword_107358;
    if ( !dword_107358 )
      v6 = sub_7E2F8(21);
    v7 = *(unsigned __int8 *)a1;
    v8 = a1;
    v9 = (unsigned __int8)v6[v7];
    if ( v6[v7] )
    {
      do
        v10 = *(unsigned __int8 *)++v8;
      while ( v6[v10] );
      v9 = v8 - a1;
    }
    switch ( sub_812E0(a1, v9) )
    {
      case 1:
        v22 = v8 + 1;
        if ( *v8 == 61 )
        {
          v31 = (char *)dword_107370;
          if ( !dword_107370 )
            v31 = sub_7E2F8(27);
          if ( v31[*((unsigned __int8 *)v8 + 1)] )
          {
            v32 = v8 + 1;
            do
              v33 = *(unsigned __int8 *)++v32;
            while ( v31[v33] );
            v34 = v32 - v22;
            if ( v32 != v22 )
            {
              v35 = *(unsigned __int8 *)v32;
              v8 = &v22[v34];
              if ( v35 <= 0x7F && (dword_9F184[v35] & 0x1000C01) != 0 )
              {
                switch ( (unsigned int)sub_8121C(v22, v34) )
                {
                  case 1u:
                    *a3 = 1;
                    goto LABEL_25;
                  case 2u:
                    *a3 = 5;
                    goto LABEL_25;
                  case 3u:
                  case 4u:
                    *a3 = 3;
                    goto LABEL_25;
                  case 5u:
                    *a3 = 2;
                    goto LABEL_25;
                  case 6u:
                  case 7u:
                    *a3 = 4;
                    goto LABEL_25;
                  case 8u:
                  case 9u:
                    *a3 = 6;
                    goto LABEL_25;
                  default:
                    break;
                }
              }
              v22 = v8;
            }
          }
        }
        *a3 = 0;
        v23 = (char *)dword_107388;
        if ( !dword_107388 )
          v23 = sub_7E2F8(33);
        v24 = *(unsigned __int8 *)v22;
        if ( !*v22 )
          return 0;
        while ( !v23[v24] )
        {
          v25 = *(unsigned __int8 *)++v22;
          v24 = v25;
          if ( !v25 )
            return 0;
        }
        v8 = v22;
        goto LABEL_25;
      case 2:
        v26 = (char *)dword_107388;
        if ( !dword_107388 )
          v26 = sub_7E2F8(33);
        v27 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !v26[v27] )
        {
          v28 = *(unsigned __int8 *)++v8;
          v27 = v28;
          if ( !v28 )
            return 0;
        }
        goto LABEL_25;
      case 3:
        v14 = (char *)dword_107388;
        if ( !dword_107388 )
          v14 = sub_7E2F8(33);
        v15 = *(unsigned __int8 *)v8;
        if ( !*v8 )
          return 0;
        while ( !v14[v15] )
        {
          v16 = *(unsigned __int8 *)++v8;
          v15 = v16;
          if ( !v16 )
            return 0;
        }
        goto LABEL_25;
      case 4:
        v29 = *(unsigned __int8 *)v8;
        if ( v29 > 0x7F || (dword_9F184[v29] & 0x1000C01) == 0 )
          goto LABEL_7;
        *a2 = 0;
        goto LABEL_25;
      case 5:
        v30 = *(unsigned __int8 *)v8;
        if ( v30 > 0x7F || (dword_9F184[v30] & 0x1000C01) == 0 )
          goto LABEL_7;
        *a2 = 1;
        goto LABEL_25;
      case 6:
        v18 = *(unsigned __int8 *)v8;
        if ( v18 <= 0x7F && (dword_9F184[v18] & 0x1000C01) != 0 )
        {
          *a2 = 2;
LABEL_25:
          v19 = (char *)dword_107334;
          if ( !dword_107334 )
            v19 = sub_7E2F8(12);
          v20 = *(unsigned __int8 *)v8;
          if ( v19[v20] )
          {
            do
            {
              v21 = *(unsigned __int8 *)++v8;
              v20 = v21;
            }
            while ( v19[v21] );
          }
          if ( v20 == 47 )
          {
            *a3 = 0;
            return v8;
          }
          if ( v20 == 62 )
            return v8;
          if ( v20 > 0x7F )
            return 0;
          a1 = v8;
          if ( (dword_9F184[v20] & 0x80000) == 0 )
            return 0;
          continue;
        }
LABEL_7:
        a1 = v8;
LABEL_8:
        *a3 = 0;
        v11 = (char *)dword_107388;
        if ( !dword_107388 )
          v11 = sub_7E2F8(33);
        v12 = *(unsigned __int8 *)a1;
        if ( !*a1 )
          return 0;
        while ( !v11[v12] )
        {
          v13 = *(unsigned __int8 *)++a1;
          v12 = v13;
          if ( !v13 )
            return 0;
        }
        return a1;
      default:
        goto LABEL_8;
    }
  }
}
