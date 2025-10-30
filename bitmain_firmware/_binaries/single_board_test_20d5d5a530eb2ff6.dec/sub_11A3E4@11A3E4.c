int __fastcall sub_11A3E4(int a1, _DWORD *a2)
{
  bool v2; // zf
  int v4; // r1
  signed int v6; // r6
  int v7; // r4
  _DWORD *v8; // r0
  int *v9; // r3
  int v10; // r9
  int v11; // r8
  bool v12; // cc
  unsigned int v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int *v16; // r3
  int v17; // r10
  int v18; // r0

  v2 = a2 == (_DWORD *)a1;
  if ( a2 != (_DWORD *)a1 )
    v2 = a2 == 0;
  v4 = v2;
  if ( !v2 )
  {
    if ( !a1 )
      return 0;
    v6 = v4;
    v7 = v4;
LABEL_11:
    if ( v6 < sub_10C010((int)a2) )
    {
      v8 = (_DWORD *)sub_10C01C(a2, v6);
      if ( v8 )
      {
        if ( !*v8 )
        {
          v10 = v8[1];
          v11 = v10;
LABEL_16:
          v12 = v7 < sub_10C010(a1);
          v13 = v7;
          v14 = (_DWORD *)a1;
          if ( v12 )
          {
            while ( 1 )
            {
              v15 = (_DWORD *)sub_10C01C(v14, v13);
              if ( !v15 )
                break;
              if ( *v15 )
              {
                if ( *v15 != 1 )
                  return 0;
                v16 = (int *)v15[1];
                v17 = *v16;
                v18 = v16[1];
              }
              else
              {
                v17 = v15[1];
                v18 = v17;
              }
              if ( sub_126528(v18, v11) >= 0 )
              {
                if ( sub_126528(v17, v10) > 0 )
                  return 0;
                ++v6;
                goto LABEL_11;
              }
              v12 = ++v7 < sub_10C010(a1);
              v13 = v7;
              v14 = (_DWORD *)a1;
              if ( !v12 )
                return 0;
            }
          }
          return 0;
        }
        if ( *v8 == 1 )
        {
          v9 = (int *)v8[1];
          v10 = *v9;
          v11 = v9[1];
          goto LABEL_16;
        }
      }
      return 0;
    }
  }
  return 1;
}
