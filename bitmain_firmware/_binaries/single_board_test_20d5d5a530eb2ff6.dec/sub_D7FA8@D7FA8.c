bool __fastcall sub_D7FA8(_DWORD *a1, int a2, int *a3, char *a4, signed int a5)
{
  int v5; // r4
  unsigned int v10; // r10
  unsigned int v11; // r11
  int v12; // r3
  int v13; // r0
  int v14; // r3
  bool v15; // cc
  _BOOL4 result; // r0
  void *v17; // r0
  int v18; // r11
  int v19; // r2

  v5 = a1[2];
  if ( v5 )
  {
    sub_D0048(6, 166, 148, (int)"crypto/evp/evp_enc.c", 474);
    return 0;
  }
  v10 = *(_DWORD *)(*a1 + 4);
  v11 = (unsigned int)(a5 + 7) >> 3;
  if ( !sub_D8E10(a1, 0x2000) )
    v11 = a5;
  if ( a5 < 0 || !a5 && (sub_D8928(*a1) & 0xF0007) != 7 )
  {
    v5 = a5 == 0;
    *a3 = 0;
    return v5;
  }
  v12 = *a1;
  if ( (*(_DWORD *)(*a1 + 16) & 0x100000) == 0 )
  {
    if ( (a1[23] & 0x100) != 0 )
      return sub_D7AAC(a1, a2, a3, a4, a5);
    if ( v10 > 0x20 )
      sub_BC328("assertion failed: b <= sizeof(ctx->final)", "crypto/evp/evp_enc.c", 512);
    if ( a1[25] )
    {
      if ( (char *)a2 == a4 || sub_D7A88(a2, (int)a4, v10) )
      {
        v19 = 518;
        goto LABEL_34;
      }
      if ( 0x7FFFFFFF - v10 < (-v10 & a5) )
      {
        v5 = 0;
        sub_D0048(6, 166, 184, (int)"crypto/evp/evp_enc.c", 531);
        return v5;
      }
      v17 = (void *)a2;
      v18 = 1;
      a2 += v10;
      memcpy(v17, a1 + 27, v10);
    }
    else
    {
      v18 = 0;
    }
    v5 = sub_D7AAC(a1, a2, a3, a4, a5);
    if ( v5 )
    {
      if ( v10 <= 1 || a1[3] )
      {
        a1[25] = 0;
      }
      else
      {
        *a3 -= v10;
        a1[25] = 1;
        memcpy(a1 + 27, (const void *)(*a3 + a2), v10);
      }
      v5 = 1;
      if ( v18 )
      {
        v5 = 1;
        *a3 += v10;
      }
    }
    return v5;
  }
  if ( v10 == 1 )
  {
    if ( !sub_D7A88(a2, (int)a4, v11) )
    {
      v12 = *a1;
      goto LABEL_8;
    }
    v19 = 496;
LABEL_34:
    sub_D0048(6, 166, 162, (int)"crypto/evp/evp_enc.c", v19);
    return v5;
  }
LABEL_8:
  v13 = (*(int (__fastcall **)(_DWORD *, int, char *, signed int))(v12 + 24))(a1, a2, a4, a5);
  v15 = v13 < 0;
  if ( v13 >= 0 )
  {
    v5 = 1;
    *a3 = v13;
  }
  else
  {
    v14 = 0;
  }
  result = v5;
  if ( v15 )
    *a3 = v14;
  return result;
}
