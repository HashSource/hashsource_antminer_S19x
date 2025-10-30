int __fastcall sub_2C20D4(_DWORD *a1, int *a2)
{
  int v2; // r3
  unsigned int v4; // r2
  int v7; // r8
  int v8; // r6
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r1
  int v12; // r7
  int v13; // r10
  int v14; // r9
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r7
  int v20; // r1
  int v21; // r2

  v2 = a2[2];
  if ( v2 != a1[3] )
    return 1;
  v4 = a1[9];
  v7 = a1[4];
  v8 = a1[11];
  if ( v4 > 0x17 )
    sub_2A6BF0((int)"elf32-arm.c", 4627, (int)"arm_stub_sym_claimed");
  if ( v4 == 17 )
  {
    v19 = (_DWORD *)a1[13];
    if ( v19 )
    {
      v20 = a1[4];
    }
    else
    {
      sub_2A6BBC("elf32-arm.c", 16903);
      v2 = a1[3];
      v20 = a1[4];
    }
    v21 = a1[10];
    v19[5] = v2;
    v19[6] = v20;
    v19[11] = v21;
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 4);
    v10 = a1[16];
    if ( !v9 )
      goto LABEL_28;
    if ( v9 > 2 )
    {
      if ( v9 == 3 )
      {
        if ( !sub_2B28B4(a2, v10, a1[4], a1[10]) )
          return 0;
        goto LABEL_9;
      }
LABEL_28:
      sub_2A6BBC("elf32-arm.c", 16976);
      return 0;
    }
    if ( !sub_2B28B4(a2, v10, v7 | 1, a1[10]) )
      return 0;
  }
LABEL_9:
  v11 = a1[12];
  if ( v11 <= 0 )
    return 1;
  v12 = 0;
  v13 = 4;
  v14 = 0;
  while ( 2 )
  {
    v15 = *(_DWORD *)(v8 + 4);
    switch ( v15 )
    {
      case 1:
      case 2:
        if ( v15 == v13 )
        {
          v17 = v13;
LABEL_24:
          switch ( v17 )
          {
            case 1:
              v12 += 2;
              goto LABEL_26;
            case 2:
            case 3:
            case 4:
              v12 += 4;
LABEL_26:
              v11 = a1[12];
              ++v14;
              v8 += 16;
              if ( v14 >= v11 )
                return 1;
              continue;
            default:
              sub_2A6BBC("elf32-arm.c", 17028);
              return 0;
          }
        }
LABEL_30:
        v13 = v15;
        v18 = 1;
        goto LABEL_31;
      case 3:
LABEL_17:
        v16 = v13;
        v13 = v15;
        while ( 2 )
        {
          if ( v16 != 3 )
          {
            v18 = 0;
            goto LABEL_31;
          }
          ++v14;
          v12 += 4;
          v8 += 16;
          if ( v11 > v14 )
          {
            v13 = *(_DWORD *)(v8 + 4);
            switch ( v13 )
            {
              case 1:
              case 2:
                v18 = 1;
                goto LABEL_31;
              case 3:
                v16 = *(_DWORD *)(v8 + 4);
                continue;
              case 4:
                v13 = 3;
                goto LABEL_14;
              default:
                goto LABEL_37;
            }
          }
          return 1;
        }
      case 4:
LABEL_14:
        while ( 2 )
        {
          if ( v13 == 4 )
          {
            ++v14;
            v12 += 4;
            v8 += 16;
            if ( v14 < v11 )
            {
              v15 = *(_DWORD *)(v8 + 4);
              switch ( v15 )
              {
                case 1:
                case 2:
                  goto LABEL_30;
                case 3:
                  goto LABEL_17;
                case 4:
                  v13 = *(_DWORD *)(v8 + 4);
                  continue;
                default:
                  goto LABEL_37;
              }
            }
            return 1;
          }
          break;
        }
        v13 = 4;
        v18 = 2;
LABEL_31:
        if ( sub_2B9E90((int)a2, v18, v12 + v7) )
        {
          v17 = *(_DWORD *)(v8 + 4);
          goto LABEL_24;
        }
        break;
      default:
LABEL_37:
        sub_2A6BBC("elf32-arm.c", 17001);
        return 0;
    }
    return 0;
  }
}
