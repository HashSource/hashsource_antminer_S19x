int __fastcall sub_31CFBC(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r3
  int v5; // r12
  int v7; // r5
  unsigned __int8 *v8; // r1
  unsigned int v9; // r3
  bool v10; // cc
  unsigned int v11; // r3
  unsigned __int8 *v12; // r2
  int v13; // r3
  int v14; // t1
  _DWORD *v15; // r0
  bool v16; // cc
  unsigned int v17; // t1
  unsigned int v18; // r0
  bool v19; // cc

  v2 = (unsigned __int8 *)a1[3];
  v5 = *v2;
  if ( v5 == 95 )
  {
    a1[3] = v2 + 1;
    if ( v2[1] == 90 )
    {
      a1[3] = v2 + 2;
      v7 = sub_31C864((int)a1, a2);
      if ( a2 && (a1[2] & 1) != 0 )
      {
        while ( 1 )
        {
          v8 = (unsigned __int8 *)a1[3];
          if ( *v8 != 46 )
            break;
          v9 = v8[1];
          v10 = v9 > 0x5F;
          if ( v9 != 95 )
            v10 = v9 - 97 > 0x19;
          if ( v10 )
          {
            if ( v9 - 48 > 9 )
              return v7;
            v11 = *v8;
            v12 = (unsigned __int8 *)a1[3];
          }
          else
          {
            v11 = v8[2];
            v12 = v8 + 2;
            v16 = v11 > 0x5F;
            if ( v11 != 95 )
              v16 = v11 - 97 > 0x19;
            if ( !v16 )
            {
              do
              {
                v17 = *++v12;
                v11 = v17;
                v18 = v17 - 97;
                v19 = v17 > 0x5F;
                if ( v17 != 95 )
                  v19 = v18 > 0x19;
              }
              while ( !v19 );
            }
          }
LABEL_17:
          if ( v11 == 46 )
          {
            do
            {
              if ( (unsigned int)v12[1] - 48 > 9 )
                break;
              v11 = v12[2];
              v12 += 2;
              if ( v11 - 48 > 9 )
                goto LABEL_17;
              do
              {
                v14 = *++v12;
                v13 = v14;
              }
              while ( (unsigned int)(v14 - 48) <= 9 );
            }
            while ( v13 == 46 );
          }
          a1[3] = v12;
          v15 = sub_314104(a1, (int)v8, v12 - v8);
          v7 = sub_313728(a1, 77, __SPAIR64__((unsigned int)v15, v7));
        }
      }
      return v7;
    }
  }
  else if ( !a2 && v5 == 90 )
  {
    a1[3] = v2 + 1;
    return sub_31C864((int)a1, 0);
  }
  return 0;
}
