int __fastcall sub_2B17C0(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // r0
  unsigned int v7; // r1
  int v8; // r0
  unsigned int v9; // r6
  int v10; // r4
  unsigned int v11; // r3
  int v12; // r5
  int v13; // r1
  unsigned int v14; // r4
  _DWORD *v15; // r0
  char *v16; // r4
  char *v17; // r8
  unsigned int v18; // r2
  unsigned int v19; // r2
  _DWORD *v20; // r0
  unsigned int v21; // r3
  _DWORD *v22; // r9
  unsigned int v23; // r10
  int v24; // r0
  int v25; // r12
  int v26; // r1
  int v27; // r0
  void *v28; // r0
  int v29; // r3
  int v30; // r3
  int v31; // r3
  char *v32; // r0
  char *v33; // r4
  int v34; // r3
  unsigned int v35[2]; // [sp+4h] [bp-24h] BYREF
  int v36; // [sp+Ch] [bp-1Ch] BYREF
  unsigned int v37; // [sp+10h] [bp-18h] BYREF
  int src[5]; // [sp+14h] [bp-14h] BYREF

  v35[0] = a3;
  if ( a2 == 51 )
  {
    if ( sub_2B1378(src, v35, &v36, a4) )
    {
      v16 = sub_2AD7AC((int)a1, (const char *)src);
      if ( v16
        || (v32 = (char *)sub_2ACBF4((int)a1, v36 + 1), (v33 = v32) != 0)
        && (memcpy(v32, src, v36 + 1), (v16 = (char *)sub_2ADCC0((int)a1, v33)) != 0) )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( v35[0] >= a4 || !*(_BYTE *)v35[0] )
            return 1;
          switch ( *(_BYTE *)v35[0] )
          {
            case '0':
            case '2':
            case '3':
            case '4':
            case '6':
            case '7':
            case '8':
              v20 = (_DWORD *)sub_2ACBF4((int)a1, 28);
              v21 = v35[0];
              v22 = v20;
              v23 = *(unsigned __int8 *)v35[0];
              if ( !v20 )
                return 0;
              *v20 = a1;
              v24 = a1[10];
              v25 = a1[40];
              v35[0] = v21 + 1;
              v26 = a1[31];
              a1[10] = v24 | 0x200;
              v27 = *(_DWORD *)(v25 + 8);
              a1[31] = v26 + 1;
              v22[6] = v27;
              *(_DWORD *)(v25 + 8) = v22;
              if ( !sub_2B1378(src, v35, &v36, a4) )
                return 0;
              v28 = (void *)sub_2ACBF4((int)a1, v36 + 1);
              v22[1] = v28;
              if ( !v28 )
                return 0;
              memcpy(v28, src, v36 + 1);
              v22[4] = v16;
              if ( v23 > 0x34 )
                v29 = 1;
              else
                v29 = 2;
              v22[3] = v29;
              if ( (v23 & 0xFB) == 0x32 )
              {
                v22[4] = &off_470950;
                goto LABEL_38;
              }
              if ( (v23 & 0xFB) == 0x33 )
              {
                v30 = *((_DWORD *)v16 + 5);
                if ( (v30 & 0x20) == 0 )
                {
                  *((_DWORD *)v16 + 5) = v30 | 0x10;
                  goto LABEL_38;
                }
                if ( !v17 )
                {
                  v17 = sub_2AD7CC(0, (const char **)v16);
                  if ( !v17 )
                  {
                    v17 = (char *)sub_2ADB48(
                                    (int)a1,
                                    *(const char **)v16,
                                    (const char *)(*((_DWORD *)v16 + 5) & 0xFFFFFFCF | 0x10));
                    if ( !v17 )
                      return 0;
                  }
                }
                goto LABEL_37;
              }
              if ( (((_BYTE)v23 - 52) & 0xFB) == 0 )
              {
                v34 = *((_DWORD *)v16 + 5);
                if ( (v34 & 0x10) != 0 )
                {
                  if ( !v17 )
                  {
                    v17 = sub_2AD7CC(0, (const char **)v16);
                    if ( !v17 )
                    {
                      v17 = (char *)sub_2ADB48(
                                      (int)a1,
                                      *(const char **)v16,
                                      (const char *)(*((_DWORD *)v16 + 5) & 0xFFFFFFCF | 0x20));
                      if ( !v17 )
                        return 0;
                    }
                  }
LABEL_37:
                  v22[4] = v17;
                  goto LABEL_38;
                }
                *((_DWORD *)v16 + 5) = v34 | 0x20;
              }
LABEL_38:
              if ( !sub_2B12A8(v35, (int *)&v37, a4) )
                return 0;
              v22[2] = v37 - *((_DWORD *)v16 + 7);
              break;
            case '1':
              ++v35[0];
              if ( !sub_2B12A8(v35, (int *)v16 + 7, a4) || !sub_2B12A8(v35, (int *)&v37, v18) )
                return 0;
              v19 = *((_DWORD *)v16 + 7);
              if ( v19 <= v37 )
              {
                v31 = v37 - v19;
                *((_DWORD *)v16 + 9) = v37 - v19;
                if ( v31 < 0 )
                  return 0;
              }
              else
              {
                v37 = *((_DWORD *)v16 + 7);
                *((_DWORD *)v16 + 9) = 0;
              }
              *((_DWORD *)v16 + 5) = 259;
              continue;
            default:
              return 0;
          }
        }
      }
    }
    return 0;
  }
  else
  {
    if ( a2 != 54 )
      return 1;
    result = sub_2B12A8(v35, src, a4);
    if ( result )
    {
      v7 = v35[0];
      v8 = *(unsigned __int8 *)v35[0];
      if ( *(_BYTE *)v35[0] )
      {
        v9 = a4 - 1;
        if ( v35[0] < v9 )
        {
          v10 = src[0];
          do
          {
            v12 = (unsigned __int8)aCccccccccccccc[*(unsigned __int8 *)(v7 + 1)]
                + 16 * (unsigned __int8)aCccccccccccccc[v8];
            if ( v12 )
            {
              v13 = v10;
              v14 = v10 & 0x1FFF;
              v15 = sub_2B14F0((int)a1, v13, 1);
              *((_BYTE *)v15 + v14) = v12;
              v7 = v35[0];
              *((_BYTE *)v15 + (v14 >> 5) + 0x2000) = 1;
              v10 = src[0];
            }
            v11 = v7;
            ++v10;
            v7 += 2;
            src[0] = v10;
            v35[0] = v7;
            v8 = *(unsigned __int8 *)(v11 + 2);
          }
          while ( *(_BYTE *)(v11 + 2) && v7 < v9 );
        }
      }
      return 1;
    }
  }
  return result;
}
