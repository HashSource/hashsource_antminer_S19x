void __fastcall sub_DB35C(int a1)
{
  int v2; // r7
  int v3; // r0
  unsigned int v4; // r5
  int v5; // r3
  int v6; // r2
  int v7; // r12
  int v8; // r1
  int v9; // t1
  _DWORD *v10; // r4
  void *v11; // r3
  int v12; // r3
  int v13; // r3
  _DWORD *v14; // r10
  int v15; // [sp+4h] [bp-4h] BYREF

  v2 = dword_487D2C;
  v3 = sub_16F654(a1);
  v4 = ((int (__fastcall *)(int))loc_16D8FC)(v3);
  if ( !v4 )
  {
    v5 = dword_478368;
    if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
    {
      v6 = *(_DWORD *)dword_478368;
      if ( *(_DWORD *)dword_478368 )
      {
        v7 = dword_487D2C;
        v8 = dword_478368 + 4 * dword_47836C - 4;
        do
        {
          if ( *(_DWORD *)(v6 + 48) == v7 )
            *(_BYTE *)(v6 + 39) = 0;
          if ( v8 == v5 )
            break;
          v9 = *(_DWORD *)(v5 + 4);
          v5 += 4;
          v6 = v9;
        }
        while ( v9 );
      }
    }
    v10 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      do
      {
        v13 = v10[7];
        v14 = (_DWORD *)v10[2];
        if ( !v13 || *(_DWORD *)(v13 + 48) == v2 )
        {
          switch ( v10[3] )
          {
            case 3:
            case 0xC:
            case 0xF:
            case 0x11:
            case 0x12:
            case 0x14:
              goto LABEL_26;
            case 6:
            case 7:
            case 8:
            case 9:
              if ( v10[37] )
              {
LABEL_26:
                ((void (__fastcall *)(_DWORD *))loc_DB0B0)(v10);
              }
              else
              {
                v10[7] = 0;
                if ( !a1 )
                {
                  if ( v10[40] )
                    ((void (*)(void))loc_26C200)();
                  v10[40] = 0;
                  v10[41] = 0;
                }
              }
              break;
            default:
              break;
          }
        }
        v10 = v14;
      }
      while ( v14 );
    }
    v11 = (void *)dword_478860;
    if ( dword_478860 )
    {
      if ( !*(_DWORD *)dword_478860 )
      {
LABEL_27:
        free(v11);
        dword_478860 = 0;
        return;
      }
      while ( 1 )
      {
        v12 = *((_DWORD *)v11 + v4 + 2);
        ++v4;
        v15 = v12;
        ((void (__fastcall *)(int *))loc_CC730)(&v15);
        v11 = (void *)dword_478860;
        if ( !dword_478860 )
          break;
        if ( v4 >= *(_DWORD *)dword_478860 )
          goto LABEL_27;
      }
    }
    dword_478860 = 0;
  }
}
