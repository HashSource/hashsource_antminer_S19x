char *__fastcall sub_88348(int *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  char *result; // r0
  int v5; // r2
  int v6; // t1
  unsigned int v7; // r5
  unsigned __int8 **v8; // r6
  int v9; // r7
  unsigned int v10; // r3
  unsigned int v11; // t1
  unsigned int v12; // t1
  int v13; // r0
  int v14; // r3
  int v15; // t1
  int v16; // r3
  int v17; // r2
  int v18; // r3

  v2 = a2;
  if ( a2 || (result = getenv("AUTOOPTS_USAGE"), (v2 = (unsigned __int8 *)result) != 0) )
  {
    result = (char *)dword_108358;
    if ( !dword_108358 )
      result = (char *)sub_7F738(12);
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
        v8 = (unsigned __int8 **)&unk_B62E8;
        v9 = 0;
        while ( 1 )
        {
          result = (char *)sub_86F54(v2, v8[2], (int)*v8);
          if ( !result )
            break;
          ++v9;
          v8 += 3;
          if ( v9 == 5 )
            return result;
        }
        v11 = (*v8)[(_DWORD)v2];
        v2 = &(*v8)[(_DWORD)v2];
        v10 = v11;
        if ( v11 > 0x7F || (dword_A0784[v10] & 0xC13) == 0 )
          break;
        result = (char *)dword_108358;
        v7 |= 1 << v9;
        if ( !dword_108358 )
        {
          result = (char *)sub_7F738(12);
          v10 = *v2;
        }
        if ( result[v10] )
        {
          do
          {
            v12 = *++v2;
            v10 = v12;
          }
          while ( result[v12] );
        }
        if ( !v10 )
        {
          if ( (v7 & 3) != 3 && (v7 & 0xC) != 0xC )
          {
            for ( result = (char *)&unk_B62E8; ; result += 12 )
            {
              if ( (v7 & 1) != 0 )
              {
                v16 = *((_DWORD *)result + 1);
                v17 = *a1;
                if ( (v16 & 1) != 0 )
                  v18 = v16 & v17;
                else
                  v18 = v17 | v16;
                *a1 = v18;
              }
              v7 >>= 1;
              if ( !v7 )
                break;
            }
          }
          return result;
        }
        if ( v10 == 44 )
        {
          v13 = dword_108358;
          if ( !dword_108358 )
            v13 = sub_7F738(12);
          v14 = *++v2;
          if ( *(_BYTE *)(v13 + v14) )
          {
            do
              v15 = *++v2;
            while ( *(_BYTE *)(v13 + v15) );
          }
        }
      }
    }
  }
  return result;
}
