int __fastcall sub_AE3A8(int a1, int *a2, _DWORD *a3, int a4)
{
  int v8; // r4
  int v9; // r3
  int (__fastcall *v10)(int, _DWORD *, int); // r8
  int v11; // r9
  int v12; // r8
  int v13; // r4
  bool v14; // zf
  int result; // r0
  _DWORD v16[2]; // [sp+Ch] [bp-8h] BYREF

  v16[0] = *a3;
  if ( a2 && (v8 = *a2) != 0 )
  {
    sub_CDDF8(*(_DWORD *)(v8 + 16));
    *(_DWORD *)(v8 + 16) = 0;
  }
  else
  {
    v8 = EVP_PKEY_new();
    if ( !v8 )
    {
      sub_D0048(13, 154, 6, "crypto/asn1/d2i_pr.c", 29);
      return 0;
    }
  }
  if ( !sub_D9CD4(v8, a1) )
  {
    sub_D0048(13, 154, 163, "crypto/asn1/d2i_pr.c", 41);
    goto LABEL_12;
  }
  v9 = *(_DWORD *)(v8 + 12);
  v10 = *(int (__fastcall **)(int, _DWORD *, int))(v9 + 96);
  if ( v10 )
  {
    if ( v10(v8, v16, a4) )
      goto LABEL_19;
    v9 = *(_DWORD *)(v8 + 12);
  }
  if ( !*(_DWORD *)(v9 + 36) )
  {
    sub_D0048(13, 154, 13, "crypto/asn1/d2i_pr.c", 62);
    goto LABEL_12;
  }
  v11 = d2i_PKCS8_PRIV_KEY_INFO(0, v16, a4);
  if ( !v11
    || (v12 = sub_D8E18(), sub_AE5FC(v11), !v12)
    || (sub_DA240(v8), v13 = sub_DA17C(a1), v14 = v13 == sub_DA1A0(v12), v8 = v12, !v14) )
  {
LABEL_12:
    if ( a2 && v8 == *a2 )
      return 0;
    sub_DA240(v8);
    return 0;
  }
LABEL_19:
  result = v8;
  *a3 = v16[0];
  if ( a2 )
  {
    *a2 = v8;
    return v8;
  }
  return result;
}
