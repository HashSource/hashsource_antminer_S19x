int __fastcall sub_D81A0(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // r4
  int v5; // r2
  unsigned int v9; // r7
  int v10; // r0
  char *v11; // r1
  int v12; // r2
  int v13; // t1
  int v14; // r0
  bool v15; // cc
  char v16; // r2
  int v17; // r2
  unsigned int v18; // r2
  int v19; // r1
  int v20; // r0
  unsigned int v21; // r6
  char *v22; // r1
  char *v23; // r3
  char v24; // t1

  v3 = a1[2];
  if ( v3 )
  {
    sub_D0048(6, 101, 148, (int)"crypto/evp/evp_enc.c", 574);
    return 0;
  }
  else
  {
    v5 = *a1;
    *a3 = 0;
    if ( (*(_DWORD *)(v5 + 16) & 0x100000) != 0 )
    {
      v20 = (*(int (__fastcall **)(_DWORD *, unsigned int, _DWORD, _DWORD))(v5 + 24))(a1, a2, 0, 0);
      if ( v20 < 0 )
        return v3;
      *a3 = v20;
      return 1;
    }
    if ( (a1[23] & 0x100) != 0 )
    {
      if ( a1[3] )
      {
        sub_D0048(6, 101, 138, (int)"crypto/evp/evp_enc.c", 593);
        return v3;
      }
      return 1;
    }
    v9 = *(_DWORD *)(v5 + 4);
    if ( v9 <= 1 )
      return 1;
    if ( !a1[3] && a1[25] )
    {
      if ( v9 > 0x20 )
        sub_BC328("assertion failed: b <= sizeof(ctx->final)", "crypto/evp/evp_enc.c", 604);
      v10 = *((unsigned __int8 *)a1 + v9 + 107);
      v11 = (char *)a1 + v9 + 107;
      v12 = (int)v9 < v10;
      if ( !v10 )
        v12 = 1;
      if ( v12 )
      {
        sub_D0048(6, 101, 100, (int)"crypto/evp/evp_enc.c", 612);
        return v3;
      }
      while ( v10 > ++v12 )
      {
        v13 = (unsigned __int8)*--v11;
        if ( v10 != v13 )
        {
          v3 = 0;
          sub_D0048(6, 101, 100, (int)"crypto/evp/evp_enc.c", 617);
          return v3;
        }
      }
      v14 = v9 - v10;
      if ( v14 > 0 )
      {
        v15 = (unsigned int)(a1 + 28) > a2;
        if ( (unsigned int)(a1 + 28) > a2 )
          v15 = a2 + 4 > (unsigned int)(a1 + 27);
        v16 = !v15;
        if ( (unsigned int)v14 <= 8 )
          v16 = 0;
        v17 = v16 & 1;
        if ( (a2 & 3) != 0 )
          v17 = 0;
        if ( v17 )
        {
          *(_DWORD *)a2 = a1[27];
          v18 = ((unsigned int)(v14 - 4) >> 2) + 1;
          v19 = 4 * v18;
          *(_DWORD *)(a2 + 4) = a1[28];
          if ( (unsigned int)(v14 - 4) >> 2 != 1 )
          {
            *(_DWORD *)(a2 + 8) = a1[29];
            if ( (unsigned int)(v14 - 4) >> 2 != 2 )
            {
              *(_DWORD *)(a2 + 12) = a1[30];
              if ( (unsigned int)(v14 - 4) >> 2 != 3 )
              {
                *(_DWORD *)(a2 + 16) = a1[31];
                if ( (unsigned int)(v14 - 4) >> 2 != 4 )
                {
                  *(_DWORD *)(a2 + 20) = a1[32];
                  if ( (unsigned int)(v14 - 4) >> 2 == 6 )
                    *(_DWORD *)(a2 + 24) = a1[33];
                }
              }
            }
          }
          if ( v14 != v19 )
          {
            *(_BYTE *)(a2 + 4 * v18) = a1[v18 + 27];
            if ( v14 > v19 + 1 )
            {
              *(_BYTE *)(a2 + v19 + 1) = BYTE1(a1[v19 / 4u + 27]);
              if ( v14 > v19 + 2 )
                *(_BYTE *)(a2 + v19 + 2) = BYTE2(a1[v19 / 4u + 27]);
            }
          }
        }
        else
        {
          v21 = a2 - 1;
          v22 = (char *)a1 + v14 + 107;
          v23 = (char *)a1 + 107;
          do
          {
            v24 = *++v23;
            *(_BYTE *)++v21 = v24;
          }
          while ( v23 != v22 );
        }
      }
      *a3 = v14;
      return 1;
    }
    sub_D0048(6, 101, 109, (int)"crypto/evp/evp_enc.c", 601);
    return 0;
  }
}
