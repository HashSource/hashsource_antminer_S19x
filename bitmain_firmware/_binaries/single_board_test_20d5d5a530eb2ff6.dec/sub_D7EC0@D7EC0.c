int __fastcall sub_D7EC0(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r6
  int v6; // r4
  unsigned int v7; // r7
  int v8; // r3
  unsigned int v9; // r0
  int result; // r0
  int v11; // r0

  if ( a1[2] )
  {
    v3 = *a1;
    v6 = *(_DWORD *)(*a1 + 16) & 0x100000;
    if ( v6 )
    {
      v11 = (*(int (**)(void))(v3 + 24))();
      if ( v11 < 0 )
        return 0;
      *a3 = v11;
      return 1;
    }
    else
    {
      v7 = *(_DWORD *)(v3 + 4);
      if ( v7 > 0x20 )
        sub_BC328("assertion failed: b <= sizeof(ctx->buf)", "crypto/evp/evp_enc.c", 438);
      if ( v7 == 1 )
      {
LABEL_7:
        v6 = 1;
        *a3 = 0;
        return v6;
      }
      v8 = a1[23];
      v9 = a1[3];
      if ( (v8 & 0x100) != 0 )
      {
        if ( v9 )
        {
          sub_D0048(6, 127, 138, (int)"crypto/evp/evp_enc.c", 447);
          return v6;
        }
        goto LABEL_7;
      }
      if ( v7 > v9 )
        memset((char *)a1 + v9 + 48, (unsigned __int8)(v7 - v9), v7 - v9);
      result = (*(int (__fastcall **)(_DWORD *, int, _DWORD *, unsigned int))(v3 + 24))(a1, a2, a1 + 12, v7);
      if ( result )
        *a3 = v7;
    }
  }
  else
  {
    sub_D0048(6, 127, 148, (int)"crypto/evp/evp_enc.c", 424);
    return 0;
  }
  return result;
}
