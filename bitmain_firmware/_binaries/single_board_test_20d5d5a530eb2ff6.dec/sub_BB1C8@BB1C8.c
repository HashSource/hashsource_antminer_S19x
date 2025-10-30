int __fastcall sub_BB1C8(_DWORD *a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  bool v6; // zf
  int v10; // r0
  int v11; // r0
  size_t v12; // r5
  unsigned int v13; // r2
  _DWORD *v14; // r12
  unsigned int v15; // r8
  unsigned __int8 *v16; // r1
  char *v17; // r7
  char v18; // r3
  unsigned int v19; // t1
  size_t v20; // lr
  char v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r8
  unsigned __int8 *v24; // r12
  unsigned __int8 *v25; // r1
  char *v26; // lr
  char v27; // r3
  unsigned int v28; // t1
  size_t v29; // r3
  int v30; // r8
  char v31; // r1
  size_t v32; // r0

  v6 = a2 == 0;
  if ( !a2 )
    v6 = a4 == 0;
  if ( !v6 )
  {
    if ( a4 )
    {
      v10 = *a1;
      a1[33] = -1;
      if ( !sub_D875C(v10, a4, a5, 0, 0) )
        return 0;
    }
    if ( a2 )
    {
      v11 = *a1;
      a1[33] = -1;
      if ( sub_D8920(v11) )
      {
        if ( sub_D8784(*a1, a3) )
        {
          if ( sub_D875C(*a1, 0, 0, a2, &unk_1B01AC) )
          {
            v12 = sub_D8904(*a1);
            if ( sub_D8910(*a1, a1 + 17, &unk_1B01AC, v12) > 0 )
            {
              v13 = *((unsigned __int8 *)a1 + 68);
              v14 = a1 + 1;
              v15 = v13 >> 7;
              if ( (int)(v12 - 1) <= 0 )
              {
                v20 = 0;
              }
              else
              {
                v16 = (unsigned __int8 *)a1 + 69;
                v17 = (char *)a1 + 3;
                do
                {
                  v18 = 2 * v13;
                  v19 = *v16++;
                  v13 = v19;
                  *++v17 = v18 | (v19 >> 7);
                }
                while ( v16 != (unsigned __int8 *)((char *)a1 + v12 + 68) );
                v20 = v12 - 1;
              }
              v21 = v12 == 16 ? -121 : 27;
              *((_BYTE *)v14 + v20) = v21 & -(char)v15 ^ (2 * ((int)(v13 << 25) >> 25));
              v22 = *((unsigned __int8 *)a1 + 4);
              v23 = v22 >> 7;
              if ( (int)(v12 - 1) <= 0 )
              {
                v29 = 0;
              }
              else
              {
                v24 = (unsigned __int8 *)v14 + v12;
                v25 = (unsigned __int8 *)a1 + 5;
                v26 = (char *)a1 + 35;
                do
                {
                  v27 = 2 * v22;
                  v28 = *v25++;
                  v22 = v28;
                  *++v26 = v27 | (v28 >> 7);
                }
                while ( v24 != v25 );
                v29 = v12 - 1;
              }
              v30 = -v23;
              v31 = v12 == 16 ? -121 : 27;
              *((_BYTE *)a1 + v29 + 36) = v30 & v31 ^ (2 * ((int)(v22 << 25) >> 25));
              sub_E07F8((int)(a1 + 17), v12);
              if ( sub_D875C(*a1, 0, 0, 0, &unk_1B01AC) )
              {
                memset(a1 + 17, 0, v12);
                a1[33] = 0;
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
    return 1;
  }
  if ( __PAIR64__(a5, a3) )
    return 1;
  if ( a1[33] == -1 || !sub_D875C(*a1, 0, 0, 0, &unk_1B01AC) )
    return 0;
  v32 = sub_D8904(*a1);
  memset(a1 + 17, 0, v32);
  a1[33] = 0;
  return 1;
}
