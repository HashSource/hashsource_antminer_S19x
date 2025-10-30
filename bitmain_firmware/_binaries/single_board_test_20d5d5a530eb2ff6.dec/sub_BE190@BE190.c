int __fastcall sub_BE190(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r5
  void *v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r0
  void *v10; // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h] BYREF
  int v12; // [sp+10h] [bp-10h] BYREF
  int v13; // [sp+14h] [bp-Ch] BYREF
  int *v14; // [sp+18h] [bp-8h] BYREF
  _DWORD *v15; // [sp+1Ch] [bp-4h] BYREF

  result = sub_116488(0, &v10, &v12, &v15, a2);
  if ( result )
  {
    sub_B294C(0, &v13, &v14, v15);
    if ( v13 != 16 )
    {
      v4 = 0;
      v5 = 0;
      sub_D0048(5, 108, 105, "crypto/dh/dh_ameth.c", 62);
LABEL_4:
      ASN1_INTEGER_free(v5);
      sub_BFB8C(v4);
      return 0;
    }
    v6 = *(void **)(a1 + 12);
    v7 = *v14;
    v11 = v14[2];
    if ( v6 == &dhx_asn1_meth )
      v4 = sub_BF258(0, &v11, v7);
    else
      v4 = sub_BF210(0, &v11, v7);
    if ( !v4 )
    {
      v5 = 0;
      sub_D0048(5, 108, 104, "crypto/dh/dh_ameth.c", 71);
      goto LABEL_4;
    }
    v8 = sub_B2074(0, &v10, v12);
    v5 = v8;
    if ( !v8 )
    {
      sub_D0048(5, 108, 104, "crypto/dh/dh_ameth.c", 76);
      goto LABEL_4;
    }
    v9 = sub_12700C(v8, 0);
    *(_DWORD *)(v4 + 20) = v9;
    if ( !v9 )
    {
      sub_D0048(5, 108, 109, "crypto/dh/dh_ameth.c", 82);
      goto LABEL_4;
    }
    ASN1_INTEGER_free(v5);
    sub_D9F44(a1, **(_DWORD **)(a1 + 12), v4, *(_DWORD *)(a1 + 12));
    return 1;
  }
  return result;
}
