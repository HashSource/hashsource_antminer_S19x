int __fastcall sub_172D78(int a1, int a2, int a3)
{
  int v3; // r5
  _DWORD *v6; // r4
  int v7; // r0
  _DWORD *v8; // r0
  bool v9; // zf
  int v10; // r9
  int v11; // r6
  int v12; // r7
  int v13; // r5
  int v14; // r2
  int v15; // r6
  int v16; // r7
  int v18; // [sp+Ch] [bp-18h] BYREF
  int v19; // [sp+14h] [bp-10h] BYREF
  int v20; // [sp+18h] [bp-Ch]
  int v21; // [sp+1Ch] [bp-8h]

  v3 = *(_DWORD *)(a3 + 0x10);
  v18 = a2;
  if ( v3 && *(_DWORD *)(v3 + 0x10) )
  {
    v6 = sub_E0740((void *)0x18);
    v7 = sub_180414();
    v8 = sub_B655C(v7);
    v9 = v8 == 0;
    if ( v8 )
      v9 = v6 == 0;
    v10 = (int)v8;
    v11 = v9;
    if ( v9
      || (v12 = sub_B70C0((int)v8, a1)) == 0
      || (sub_180420(v10, (char *)&loc_172D00 + 1, (char *)&loc_172BE0 + 1),
          sub_18045C(v10, (char *)&loc_172C10 + 1, (char *)&loc_172CB4 + 1),
          v19 = v12,
          v20 = v11,
          v21 = v11,
          (*(int (__fastcall **)(int, int *, int, int *))(v3 + 0x10))(10, &v18, a3, &v19) <= 0) )
    {
      BIO_vfree_0(v10);
      CRYPTO_free(v6);
      return 0;
    }
    else
    {
      v13 = v21;
      v14 = v11;
      v6[3] = v12;
      v15 = v20;
      v16 = v18;
      v6[1] = a3;
      v6[2] = v15;
      *v6 = v16;
      v6[4] = v13;
      sub_B6ECC(v10, 153, v14, (int)v6);
      return v20;
    }
  }
  else
  {
    sub_D0048(13, 208, 202, (int)"crypto/asn1/bio_ndef.c", 60);
    return 0;
  }
}
