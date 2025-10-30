int *__fastcall sub_31C0B8(_DWORD *a1, int *a2, int a3)
{
  int v3; // r7
  int v4; // r8
  unsigned __int8 *v6; // r1
  char v7; // r10
  int v9; // r9
  unsigned __int8 *v10; // r0
  int v11; // r11
  int *v12; // r5
  int v13; // r1
  int v14; // r3
  int v15; // r11
  _BYTE *v16; // r2
  int v17; // r0
  unsigned __int8 *v18; // r0
  char v19; // r10
  int v20; // r11
  int *v21; // r6
  int v22; // r3
  _BYTE *v24; // r2
  __int64 v25; // r2
  int v26; // r1

  v6 = (unsigned __int8 *)a1[3];
  v7 = a3;
  if ( a3 )
    v9 = 30;
  else
    v9 = 27;
  if ( a3 )
    v4 = 29;
  v10 = (unsigned __int8 *)a1[3];
  if ( a3 )
    v3 = 28;
  else
    v4 = 26;
  if ( !a3 )
    v3 = 25;
  v11 = *v6;
  v12 = a2;
  if ( sub_313E7C(v10) )
  {
    do
    {
      a1[3] = v13 + 1;
      switch ( v11 )
      {
        case 'r':
          v26 = v3;
          HIDWORD(v25) = 0;
          a1[11] += 9;
          break;
        case 'V':
          v26 = v4;
          HIDWORD(v25) = 0;
          a1[11] += 9;
          break;
        case 'K':
          v26 = v9;
          HIDWORD(v25) = 0;
          a1[11] += 6;
          break;
        default:
          if ( !*(_BYTE *)(v13 + 1) )
            return 0;
          a1[3] = v13 + 2;
          v14 = *(unsigned __int8 *)(v13 + 1);
          if ( v14 == 120 )
          {
            HIDWORD(v25) = 0;
            v26 = 76;
            a1[11] += 17;
          }
          else if ( (v14 & 0xDF) == 0x4F )
          {
            a1[11] += 9;
            if ( v14 == 79 )
            {
              v15 = a1[12];
              a1[12] = 1;
              HIDWORD(v25) = sub_31BA00(a1);
              a1[12] = v15;
              if ( !HIDWORD(v25) )
                return 0;
              v16 = (_BYTE *)a1[3];
              if ( *v16 != 69 )
                return 0;
              v26 = 78;
              a1[3] = v16 + 1;
            }
            else
            {
              HIDWORD(v25) = 0;
              v26 = 78;
            }
          }
          else
          {
            if ( v14 != 119 )
              return 0;
            a1[11] += 6;
            HIDWORD(v25) = sub_31AADC(a1);
            if ( !HIDWORD(v25) )
              return 0;
            v24 = (_BYTE *)a1[3];
            if ( *v24 != 69 )
              return 0;
            v26 = 79;
            a1[3] = v24 + 1;
          }
          break;
      }
      LODWORD(v25) = 0;
      v17 = sub_313728(a1, v26, v25);
      *v12 = v17;
      if ( !v17 )
        return 0;
      v12 = (int *)(v17 + 8);
      v18 = (unsigned __int8 *)a1[3];
      v11 = *v18;
    }
    while ( sub_313E7C(v18) );
  }
  v19 = v7 ^ 1;
  if ( v11 == 70 )
    v20 = v19 & 1;
  else
    v20 = 0;
  if ( v20 && v12 != a2 )
  {
    do
    {
      v21 = (int *)*a2;
      v22 = *v21;
      if ( *v21 == 26 )
      {
        *v21 = 29;
      }
      else if ( v22 == 27 )
      {
        *v21 = 30;
      }
      else if ( v22 == 25 )
      {
        *v21 = 28;
      }
      a2 = v21 + 2;
    }
    while ( v12 != a2 );
  }
  return v12;
}
