int __fastcall sub_138200(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // r0
  int v5; // r3
  int v6; // r6
  int v7; // r3
  __int16 v8; // r12
  char *v9; // r0
  unsigned int v10; // r3
  bool v11; // cc
  int v12; // r3
  int v13; // r2
  bool v14; // zf
  int v15; // r1
  int v16; // r0
  int v18; // r1
  bool v19; // zf
  int v20; // r0
  int v21; // r7
  int v22; // r7
  char v23; // r3
  int v24; // r3
  bool v25; // zf

  v3 = *((unsigned __int8 *)a1 + 2);
  if ( !v3 )
    goto LABEL_6;
  if ( a1[12] != 105 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( a1[8 * v5 + 12] == 105 )
      {
        v15 = 16 * v5 + 24;
        goto LABEL_17;
      }
    }
LABEL_6:
    v6 = ((int (__fastcall *)(_DWORD))loc_16FD44)(*a2);
    v7 = *(_DWORD *)(v6 + 24);
    v8 = *(_WORD *)(v7 + 2);
    *(_DWORD *)(v7 + 28) = &word_3B4A2C;
    *(_WORD *)(v7 + 2) = v8 & 0xFC7F | 0x80;
    v9 = sub_12FAF0(a1, a2);
    if ( v9 )
    {
      v10 = a2[16];
      v11 = v10 > 0xC;
      if ( v10 != 12 )
        v11 = v10 - 4 > 1;
      if ( v11 )
      {
        v12 = *a1;
        v13 = *(_DWORD *)(v6 + 24);
        v14 = v12 == 2;
        if ( v12 == 2 )
          v12 = 3;
        *(_DWORD *)(v13 + 12) = v9;
        if ( v14 )
        {
          *(_DWORD *)(v13 + 8) = v9;
          *(_BYTE *)v13 = v12;
LABEL_27:
          v20 = sub_12E694((int)a1, 11, (int)a2);
          v21 = v20;
          if ( v20 )
          {
            switch ( *(_WORD *)(v20 + 2) & 0x7FFF )
            {
              case 5:
              case 6:
              case 7:
              case 0xB:
              case 0xD:
              case 0xF:
              case 0x21:
                *(_DWORD *)(v6 + 20) = *(_DWORD *)(v20 + 8);
                break;
              default:
                *(_DWORD *)(v6 + 20) = 0;
                break;
            }
          }
          else
          {
            *(_DWORD *)(v6 + 20) = 0;
          }
          v23 = *((_BYTE *)a2 + 192);
          if ( (v23 & 4) == 0 )
          {
            sub_11D77C((int)a2);
            v23 = *((_BYTE *)a2 + 192);
          }
          v14 = (v23 & 0x20) == 0;
          v24 = *(_DWORD *)(v6 + 24);
          if ( v14 || *(_DWORD *)(v6 + 20) )
            *(_BYTE *)(v24 + 2) |= 2u;
          else
            *(_BYTE *)(v24 + 1) |= 4u;
          if ( sub_12FF48((int)a1, (int)a2) || !v21 && !*((_DWORD *)a1 + 3) && sub_220480(a2[18]) )
            *(_BYTE *)(*(_DWORD *)(v6 + 24) + 1) |= 4u;
          sub_134FA4((int)a1, v6, a2);
          sub_134A14(v6, (int)a1, (int)a2);
          return v6;
        }
      }
      else
      {
        v22 = sub_1359DC(v9, (int)a1, a2, 0);
        if ( sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]) )
          return sub_11D4EC(*((_DWORD *)a1 + 2), a2[34]);
        v12 = *a1;
        v13 = *(_DWORD *)(v6 + 24);
        v25 = v12 == 19;
        if ( v12 != 19 )
          v25 = v12 == 2;
        *(_DWORD *)(v13 + 12) = v22;
        if ( v25 )
          *(_DWORD *)(v13 + 8) = v22;
      }
    }
    else
    {
      v12 = *a1;
      v13 = *(_DWORD *)(v6 + 24);
    }
    if ( v12 == 19 )
    {
      *(_BYTE *)v13 = 3;
    }
    else if ( v12 == 23 )
    {
      *(_BYTE *)v13 = 4;
    }
    else
    {
      v18 = a2[16];
      *(_BYTE *)v13 = 3;
      v19 = v18 == 4;
      if ( v18 == 4 )
        v19 = v12 == 2;
      if ( v19 )
        *(_BYTE *)(v13 + 2) |= 0x20u;
    }
    goto LABEL_27;
  }
  v15 = 24;
LABEL_17:
  sub_13810C((int)a1, (int)a1 + v15, a2);
  return sub_134FA4((int)a1, v16, a2);
}
