bool __fastcall sub_D7C9C(_DWORD *a1, int a2, int *a3, char *a4, signed int a5)
{
  signed int v5; // r5
  unsigned int v10; // r7
  int v11; // r0
  int v12; // r10
  int v13; // r0
  int v14; // r7
  int v16; // r0
  size_t v17; // r11
  size_t v18; // r10
  int v19; // r5

  v5 = a5;
  if ( a1[2] )
  {
    v10 = (unsigned int)(a5 + 7) >> 3;
    if ( !sub_D8E10(a1, 0x2000) )
      v10 = a5;
    if ( a5 >= 0 )
    {
      v11 = *a1;
      v12 = *(_DWORD *)(*a1 + 4);
      if ( a5 )
        goto LABEL_6;
      if ( (sub_D8928(v11) & 0xF0007) == 7 )
      {
        v11 = *a1;
LABEL_6:
        if ( (*(_DWORD *)(v11 + 16) & 0x100000) != 0 )
        {
          if ( v12 == 1 )
          {
            if ( sub_D7A88(a2, (int)a4, v10) )
            {
              v14 = 0;
              sub_D0048(6, 219, 162, (int)"crypto/evp/evp_enc.c", 324);
              return v14;
            }
            v11 = *a1;
          }
          v13 = (*(int (__fastcall **)(_DWORD *, int, char *, signed int))(v11 + 24))(a1, a2, a4, a5);
          if ( v13 >= 0 )
          {
            *a3 = v13;
            return 1;
          }
          return 0;
        }
        v14 = sub_D7A88(a1[3] + a2, (int)a4, v10);
        if ( v14 )
        {
          v14 = 0;
          sub_D0048(6, 219, 162, (int)"crypto/evp/evp_enc.c", 337);
          return v14;
        }
        v16 = a1[3];
        if ( v16 )
        {
          if ( v12 <= 32 )
          {
            v17 = v12 - v16;
            if ( a5 < v12 - v16 )
            {
              memcpy((char *)a1 + v16 + 48, a4, a5);
              a1[3] += a5;
              *a3 = 0;
              return 1;
            }
            v5 = a5 - v17;
            if ( 0x7FFFFFFF - v12 < (int)(-v12 & (a5 - v17)) )
            {
              sub_D0048(6, 219, 184, (int)"crypto/evp/evp_enc.c", 370);
              return v14;
            }
            memcpy((char *)a1 + v16 + 48, a4, v17);
            if ( !(*(int (__fastcall **)(_DWORD *, int, _DWORD *, int))(*a1 + 24))(a1, a2, a1 + 12, v12) )
              return 0;
            a4 += v17;
            a2 += v12;
            *a3 = v12;
LABEL_24:
            v18 = (v12 - 1) & v5;
            v19 = v5 - v18;
            if ( v19 > 0 )
            {
              if ( !(*(int (__fastcall **)(_DWORD *, int, char *, int))(*a1 + 24))(a1, a2, a4, v19) )
                return 0;
              *a3 += v19;
            }
            if ( v18 )
              memcpy(a1 + 12, &a4[v19], v18);
            a1[3] = v18;
            return 1;
          }
        }
        else
        {
          if ( (a5 & a1[26]) == 0 )
          {
            v14 = (*(int (__fastcall **)(_DWORD *, int, char *, signed int))(*a1 + 24))(a1, a2, a4, a5);
            if ( v14 )
            {
              *a3 = a5;
              return 1;
            }
            else
            {
              *a3 = 0;
            }
            return v14;
          }
          if ( v12 <= 32 )
          {
            *a3 = 0;
            goto LABEL_24;
          }
        }
        sub_BC328("assertion failed: bl <= (int)sizeof(ctx->buf)", "crypto/evp/evp_enc.c", 351);
      }
    }
    *a3 = 0;
    return a5 == 0;
  }
  else
  {
    sub_D0048(6, 167, 148, (int)"crypto/evp/evp_enc.c", 403);
    return 0;
  }
}
