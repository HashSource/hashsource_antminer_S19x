int __fastcall sub_31C864(int a1, int a2)
{
  unsigned __int8 *v2; // r3
  int v4; // r2
  bool v5; // zf
  int *v7; // r0
  bool v8; // zf
  int *v9; // r5
  _BOOL4 v10; // r3
  int result; // r0
  int v12; // r3
  int *i; // r2
  int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r0
  __int64 v20; // r2
  int v21; // r0
  _BYTE *v22; // r3
  _BYTE *v23; // r6
  int v24; // r8
  int v25; // r7
  int v26; // r3
  int v27; // r2
  int v28; // r1
  __int64 v29; // r2
  __int64 v30; // r2
  int v31; // r5
  __int64 v32; // r2
  __int64 v33; // r2
  __int64 v34; // r2
  __int64 v35; // r2
  __int64 v36; // r2
  __int64 v37; // r2
  _DWORD *v38; // r5
  _BYTE *v39; // r3
  __int64 v40; // r2
  __int64 v41; // r2
  __int64 v42; // r2
  __int64 v43; // r2
  __int64 v44; // r2
  __int64 v45; // r2
  __int64 v46; // r2
  __int64 v47; // r2
  __int64 v48; // r2
  _BYTE *v49; // r2
  int v50; // r5
  int v51; // r3
  int v52; // t1
  bool v53; // zf
  __int64 v54; // r2

  v2 = *(unsigned __int8 **)(a1 + 12);
  v4 = *v2;
  v5 = v4 == 84;
  if ( v4 != 84 )
    v5 = v4 == 71;
  if ( v5 )
  {
    v17 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 44) = v17 + 20;
    v18 = *v2;
    if ( v18 == 84 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      if ( v2[1] )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        switch ( v2[1] )
        {
          case 'C':
            v38 = sub_319DD0(a1);
            if ( sub_313C18((unsigned __int8 **)(a1 + 12)) < 0 )
              return 0;
            v39 = *(_BYTE **)(a1 + 12);
            if ( *v39 != 95 )
              return 0;
            *(_DWORD *)(a1 + 12) = v39 + 1;
            v40 = __PAIR64__((unsigned int)v38, (unsigned int)sub_319DD0(a1));
            *(_DWORD *)(a1 + 44) += 5;
            result = sub_313728((_DWORD *)a1, 11, v40);
            break;
          case 'F':
            v37 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 14, v37);
            break;
          case 'H':
            v36 = (unsigned int)sub_31C2F0(a1, 0);
            result = sub_313728((_DWORD *)a1, 20, v36);
            break;
          case 'I':
            v35 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 12, v35);
            break;
          case 'J':
            v48 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 18, v48);
            break;
          case 'S':
            v47 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 13, v47);
            break;
          case 'T':
            *(_DWORD *)(a1 + 44) = v17 + 10;
            v46 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 10, v46);
            break;
          case 'V':
            *(_DWORD *)(a1 + 44) = v17 + 15;
            v45 = (unsigned int)sub_319DD0(a1);
            result = sub_313728((_DWORD *)a1, 9, v45);
            break;
          case 'W':
            v44 = (unsigned int)sub_31C2F0(a1, 0);
            result = sub_313728((_DWORD *)a1, 21, v44);
            break;
          case 'c':
            if ( !sub_31452C(a1, 0) || !sub_31452C(a1, 0) )
              return 0;
            v43 = (unsigned int)sub_31C864(a1, 0);
            result = sub_313728((_DWORD *)a1, 17, v43);
            break;
          case 'h':
            if ( !sub_31452C(a1, 104) )
              return 0;
            v42 = (unsigned int)sub_31C864(a1, 0);
            result = sub_313728((_DWORD *)a1, 15, v42);
            break;
          case 'v':
            if ( !sub_31452C(a1, 118) )
              return 0;
            v41 = (unsigned int)sub_31C864(a1, 0);
            result = sub_313728((_DWORD *)a1, 16, v41);
            break;
          default:
            return 0;
        }
        return result;
      }
    }
    else if ( v18 == 71 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      if ( v2[1] )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        switch ( v2[1] )
        {
          case 'A':
            v30 = (unsigned int)sub_31C864(a1, 0);
            return sub_313728((_DWORD *)a1, 23, v30);
          case 'R':
            v31 = sub_31C2F0(a1, 0);
            v32 = __PAIR64__((unsigned int)sub_313CD0(a1), v31);
            return sub_313728((_DWORD *)a1, 22, v32);
          case 'T':
            if ( v2[2] && (*(_DWORD *)(a1 + 12) = v2 + 3, v2[2] == 110) )
            {
              v54 = (unsigned int)sub_31C864(a1, 0);
              return sub_313728((_DWORD *)a1, 73, v54);
            }
            else
            {
              v33 = (unsigned int)sub_31C864(a1, 0);
              return sub_313728((_DWORD *)a1, 72, v33);
            }
          case 'V':
            v34 = (unsigned int)sub_31C2F0(a1, 0);
            return sub_313728((_DWORD *)a1, 19, v34);
          case 'r':
            v21 = sub_313C18((unsigned __int8 **)(a1 + 12));
            if ( v21 <= 1 )
              return 0;
            v22 = *(_BYTE **)(a1 + 12);
            if ( !*v22 )
              return 0;
            v23 = v22 + 1;
            *(_DWORD *)(a1 + 12) = v22 + 1;
            if ( *v22 != 95 )
              return 0;
            v24 = 0;
            v25 = v21 - 1;
            break;
          default:
            return 0;
        }
        while ( *v23 )
        {
          if ( *v23 == 36 )
          {
            v26 = (unsigned __int8)v23[1];
            switch ( v26 )
            {
              case 'S':
                v27 = 47;
                break;
              case '_':
                v27 = 46;
                break;
              case '$':
                v27 = 36;
                break;
              default:
                return 0;
            }
            v28 = *(_DWORD *)(a1 + 20);
            v23 = (_BYTE *)(*(_DWORD *)(a1 + 12) + 2);
            if ( v28 >= *(_DWORD *)(a1 + 24) )
            {
              *(_DWORD *)(a1 + 12) = v23;
              return 0;
            }
            v25 -= 2;
            HIDWORD(v29) = *(_DWORD *)(a1 + 16) + 16 * v28;
            *(_DWORD *)(HIDWORD(v29) + 4) = 0;
            *(_DWORD *)(a1 + 20) = v28 + 1;
            *(_DWORD *)HIDWORD(v29) = 64;
            *(_DWORD *)(HIDWORD(v29) + 8) = v27;
            *(_DWORD *)(a1 + 12) = v23;
          }
          else
          {
            v49 = v23;
            v50 = 0;
            do
            {
              if ( ++v50 >= v25 )
                break;
              v52 = (unsigned __int8)*++v49;
              v51 = v52;
              v53 = v52 == 36;
              if ( v52 != 36 )
                v53 = v51 == 0;
            }
            while ( !v53 );
            v25 -= v50;
            HIDWORD(v29) = sub_314104((_DWORD *)a1, (int)v23, v50);
            v23 = (_BYTE *)(*(_DWORD *)(a1 + 12) + v50);
            *(_DWORD *)(a1 + 12) = v23;
            if ( !HIDWORD(v29) )
              return 0;
          }
          if ( v24 )
          {
            LODWORD(v29) = v24;
            v24 = sub_313728((_DWORD *)a1, 63, v29);
            if ( !v24 )
              return 0;
          }
          else
          {
            v24 = HIDWORD(v29);
          }
          if ( v25 <= 0 )
            return sub_313728((_DWORD *)a1, 62, (unsigned int)v24);
        }
      }
    }
    return 0;
  }
  v7 = (int *)sub_31C2F0(a1, a2);
  v8 = v7 == 0;
  if ( v7 )
    v8 = a2 == 0;
  v9 = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 8) & 1) == 0 )
  {
    v12 = *v7;
    if ( (unsigned int)(*v7 - 28) <= 4 )
    {
      do
      {
        v9 = (int *)v9[2];
        v12 = *v9;
      }
      while ( (unsigned int)(*v9 - 28) <= 4 );
    }
    if ( v12 == 2 )
    {
      for ( i = (int *)v9[3]; ; i = (int *)i[2] )
      {
        v14 = *i;
        if ( *i != 76 )
        {
          v15 = v14 - 28;
          v16 = v14 - 78;
          if ( (unsigned int)*i <= 0x4C )
          {
            if ( v15 > 4 )
              goto LABEL_24;
          }
          else if ( v16 > 1 )
          {
LABEL_24:
            v9[3] = (int)i;
            return (int)v9;
          }
        }
      }
    }
    return (int)v9;
  }
  v10 = **(unsigned __int8 **)(a1 + 12) == 69;
  if ( !**(_BYTE **)(a1 + 12) )
    v10 = 1;
  if ( !v7 )
    v10 = 1;
  if ( v10 )
    return (int)v9;
  v19 = sub_3138E0((int)v7);
  v20 = __PAIR64__(sub_31B110((_DWORD *)a1, v19), (unsigned int)v9);
  return sub_313728((_DWORD *)a1, 3, v20);
}
