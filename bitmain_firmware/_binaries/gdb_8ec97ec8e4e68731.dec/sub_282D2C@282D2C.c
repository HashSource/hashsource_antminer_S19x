int __fastcall sub_282D2C(int a1, int a2)
{
  int v2; // r4
  unsigned int v3; // r3
  int v5; // r9
  size_t v6; // r0
  int v7; // r1
  int i; // r7
  unsigned int v9; // r3
  int v10; // r6
  signed int mb_cur_max; // r0
  int v12; // r1
  unsigned int v13; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r10
  int v18; // r6
  unsigned int v19; // r3
  int v20; // r3
  unsigned int v21; // r3
  bool v22; // zf
  int v23; // r3

  v2 = dword_4900D8;
  v3 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
  if ( v3 == 91 )
  {
LABEL_90:
    v17 = 2;
    goto LABEL_53;
  }
  if ( v3 <= 0x5B )
  {
    if ( v3 == 40 )
    {
      v17 = 1;
      goto LABEL_53;
    }
    if ( v3 == 41 )
    {
      v5 = -1;
      goto LABEL_17;
    }
  }
  else
  {
    switch ( v3 )
    {
      case '{':
        v17 = 3;
        goto LABEL_53;
      case '}':
        v5 = -3;
        goto LABEL_17;
      case ']':
        v5 = -2;
LABEL_17:
        v10 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            mb_cur_max = _ctype_get_mb_cur_max();
            if ( mb_cur_max == 1 || dword_48BB60 || (mb_cur_max = sub_29B610(dword_48AAD4, v2, 0), mb_cur_max == v2) )
            {
              if ( --v2 < 0 )
                goto LABEL_39;
            }
            else
            {
              v2 = mb_cur_max;
              if ( mb_cur_max < 0 )
                goto LABEL_39;
            }
            v13 = *(unsigned __int8 *)(dword_48AAD4 + v2);
            if ( v13 != 91 )
              break;
            v16 = 2;
LABEL_46:
            if ( v16 == -v5 )
              goto LABEL_47;
          }
          if ( v13 <= 0x5B )
          {
            if ( v13 == 40 )
            {
              if ( v5 != -1 )
                goto LABEL_26;
LABEL_47:
              --v10;
              goto LABEL_26;
            }
            if ( v13 != 41 )
              goto LABEL_26;
            v15 = -1;
LABEL_32:
            if ( v5 == v15 )
              ++v10;
          }
          else
          {
            switch ( v13 )
            {
              case '{':
                v16 = 3;
                goto LABEL_46;
              case '}':
                v15 = -3;
                goto LABEL_32;
              case ']':
                v15 = -2;
                goto LABEL_32;
            }
LABEL_26:
            if ( !v10 )
              goto LABEL_27;
          }
        }
    }
  }
  v6 = _ctype_get_mb_cur_max();
  if ( v6 > 1 )
  {
    i = dword_4900D8;
    if ( dword_48BB60 )
      goto LABEL_9;
    while ( 1 )
    {
      v21 = *(unsigned __int8 *)(dword_48AAD4 + i);
      if ( v21 == 91 )
        break;
      if ( v21 <= 0x5B )
      {
        if ( v21 == 40 )
          goto LABEL_97;
        if ( v21 == 41 )
          goto LABEL_76;
      }
      else
      {
        if ( v21 == 123 )
          goto LABEL_93;
        if ( v21 == 125 || v21 == 93 )
          goto LABEL_76;
      }
      v6 = sub_295408(1, a2);
      v22 = dword_4900D8 == i;
      i = dword_4900D8;
      if ( v22 )
        goto LABEL_76;
    }
LABEL_89:
    v2 = i;
    goto LABEL_90;
  }
  for ( i = dword_4900D8; ; i = dword_4900D8 )
  {
LABEL_9:
    v9 = *(unsigned __int8 *)(dword_48AAD4 + i);
    if ( v9 == 91 )
      goto LABEL_89;
    if ( v9 > 0x5B )
      break;
    if ( v9 == 40 )
    {
LABEL_97:
      v2 = i;
      v17 = 1;
LABEL_53:
      v18 = 1;
LABEL_54:
      mb_cur_max = _ctype_get_mb_cur_max();
      if ( mb_cur_max == 1 || dword_48BB60 )
      {
LABEL_56:
        ++v2;
        goto LABEL_57;
      }
      while ( 1 )
      {
        mb_cur_max = sub_29B4D0(dword_48AAD4);
        v2 = mb_cur_max;
LABEL_57:
        if ( dword_4900DC <= v2 )
        {
LABEL_39:
          sub_2945C8(mb_cur_max, v12);
          return -1;
        }
        v19 = *(unsigned __int8 *)(dword_48AAD4 + v2);
        if ( v19 == 91 )
        {
          v20 = 2;
        }
        else
        {
          if ( v19 <= 0x5B )
          {
            if ( v19 == 40 )
            {
              v20 = 1;
              goto LABEL_64;
            }
            if ( v19 == 41 )
            {
              v23 = -1;
LABEL_81:
              if ( !(v23 + v17) && !--v18 )
              {
LABEL_27:
                dword_4900D8 = v2;
                return 0;
              }
              goto LABEL_54;
            }
          }
          else
          {
            switch ( v19 )
            {
              case '{':
                v20 = 3;
                goto LABEL_64;
              case '}':
                v23 = -3;
                goto LABEL_81;
              case ']':
                v23 = -2;
                goto LABEL_81;
            }
          }
          v20 = 0;
        }
LABEL_64:
        if ( v17 == v20 )
          ++v18;
        mb_cur_max = _ctype_get_mb_cur_max();
        if ( mb_cur_max == 1 || dword_48BB60 )
          goto LABEL_56;
      }
    }
    if ( v9 == 41 )
      goto LABEL_76;
LABEL_14:
    v7 = a2;
    v6 = 1;
    if ( dword_4900DC - 1 <= i )
      goto LABEL_76;
    v6 = sub_295408(1, a2);
  }
  if ( v9 == 123 )
  {
LABEL_93:
    v2 = i;
    v17 = 3;
    goto LABEL_53;
  }
  if ( v9 != 125 && v9 != 93 )
    goto LABEL_14;
LABEL_76:
  dword_4900D8 = v2;
  sub_2945C8(v6, v7);
  return -1;
}
