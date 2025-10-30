char *__fastcall sub_86D90(int *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  char *result; // r0
  int v5; // r3
  int v6; // t1
  unsigned int v7; // r5
  char *v8; // r11
  int v9; // r6
  unsigned __int8 *v10; // r1
  int v11; // t1
  char *v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // t1
  unsigned int v15; // t1
  char *v16; // r0
  int v17; // r3
  int v18; // t1
  int v19; // t1
  _DWORD *i; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r2

  v2 = a2;
  if ( a2 || (result = getenv("AUTOOPTS_USAGE"), (v2 = (unsigned __int8 *)result) != 0) )
  {
    result = (char *)dword_107334;
    if ( !dword_107334 )
      result = sub_7E2F8(12);
    v5 = *v2;
    if ( result[v5] )
    {
      do
      {
        v6 = *++v2;
        v5 = v6;
      }
      while ( result[v6] );
    }
    if ( v5 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (char *)&unk_B52E8;
        result = (char *)sub_859EC(v2, "gnu", 3);
        v9 = 0;
        if ( result )
          break;
LABEL_11:
        v12 = (char *)(&off_B5208)[3 * v9 + 56];
        v14 = (unsigned __int8)v12[(_DWORD)v2];
        v2 = (unsigned __int8 *)&v12[(_DWORD)v2];
        v13 = v14;
        if ( v14 > 0x7F || (dword_9F184[v13] & 0xC13) == 0 )
          return result;
        v7 |= 1 << v9;
        result = (char *)dword_107334;
        if ( !dword_107334 )
        {
          result = sub_7E2F8(12);
          v13 = *v2;
        }
        if ( result[v13] )
        {
          do
          {
            v15 = *++v2;
            v13 = v15;
          }
          while ( result[v15] );
        }
        if ( !v13 )
        {
          if ( (v7 & 3) != 3 && (v7 & 0xC) != 0xC )
          {
            for ( i = &unk_B52E8; ; i += 3 )
            {
              if ( (v7 & 1) != 0 )
              {
                v21 = i[1];
                v22 = *a1;
                if ( (v21 & 1) != 0 )
                  v23 = v21 & v22;
                else
                  v23 = v21 | v22;
                *a1 = v23;
              }
              v7 >>= 1;
              if ( !v7 )
                break;
            }
          }
          return result;
        }
        if ( v13 == 44 )
        {
          v16 = (char *)dword_107334;
          if ( !dword_107334 )
            v16 = sub_7E2F8(12);
          v17 = *++v2;
          if ( v16[v17] )
          {
            do
            {
              v18 = *++v2;
              if ( !v16[v18] )
                break;
              v19 = *++v2;
            }
            while ( v16[v19] );
          }
        }
      }
      while ( ++v9 != 5 )
      {
        v10 = (unsigned __int8 *)*((_DWORD *)v8 + 5);
        v11 = *((_DWORD *)v8 + 3);
        v8 += 12;
        result = (char *)sub_859EC(v2, v10, v11);
        if ( !result )
          goto LABEL_11;
      }
    }
  }
  return result;
}
