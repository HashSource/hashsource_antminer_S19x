_DWORD *__fastcall d2i_ECPrivateKey(_DWORD *a1, void **a2, int a3)
{
  int v5; // r5
  _DWORD *v6; // r4
  int v7; // r0
  int v8; // r7
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r7
  int v14; // r0
  _DWORD *result; // r0
  int (__fastcall *v16)(_DWORD *); // r3
  void *v17; // [sp+Ch] [bp-8h] BYREF

  v17 = *a2;
  v5 = sub_C343C(0, &v17, a3);
  if ( !v5 )
  {
    sub_D0048(16, 146, 16, "crypto/ec/ec_asn1.c", 1011);
    return 0;
  }
  if ( !a1 || (v6 = (_DWORD *)*a1) == 0 )
  {
    v6 = (_DWORD *)EC_KEY_new();
    if ( !v6 )
    {
      sub_D0048(16, 146, 65, "crypto/ec/ec_asn1.c", 1017);
      goto LABEL_19;
    }
  }
  if ( !*(_DWORD *)(v5 + 8) )
  {
    if ( v6[3] )
      goto LABEL_8;
LABEL_18:
    sub_D0048(16, 146, 16, "crypto/ec/ec_asn1.c", 1032);
    goto LABEL_19;
  }
  sub_C64B8(v6[3]);
  v7 = sub_C4204(*(int **)(v5 + 8));
  v6[3] = v7;
  if ( !v7 )
    goto LABEL_18;
  if ( **(_DWORD **)(v5 + 8) == 1 )
    *(_DWORD *)(v7 + 24) = 1;
LABEL_8:
  v8 = *(_DWORD *)(v5 + 4);
  v6[2] = *(_DWORD *)v5;
  if ( v8 )
  {
    v9 = sub_AE2B4(v8);
    v10 = sub_AE2A8(v8);
    if ( !sub_C5D18(v6, v9, v10) )
      goto LABEL_19;
    sub_C6508(v6[4]);
    v11 = sub_C63F4(v6[3]);
    v6[4] = v11;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v5 + 12);
      if ( !v12 )
      {
        v16 = *(int (__fastcall **)(_DWORD *))(*(_DWORD *)v6[3] + 184);
        if ( !v16 || !v16(v6) )
          goto LABEL_19;
        v6[6] |= 2u;
LABEL_13:
        if ( a1 )
          *a1 = v6;
        sub_C346C(v5);
        result = v6;
        *a2 = v17;
        return result;
      }
      v13 = sub_AE2B4(v12);
      v14 = sub_AE2A8(*(_DWORD *)(v5 + 12));
      if ( sub_C5C24(v6, v13, v14, 0) )
        goto LABEL_13;
      sub_D0048(16, 146, 16, "crypto/ec/ec_asn1.c", 1062);
    }
    else
    {
      sub_D0048(16, 146, 16, "crypto/ec/ec_asn1.c", 1051);
    }
  }
  else
  {
    sub_D0048(16, 146, 125, "crypto/ec/ec_asn1.c", 1044);
  }
LABEL_19:
  if ( !a1 || v6 != (_DWORD *)*a1 )
    sub_C5410(v6);
  sub_C346C(v5);
  return 0;
}
