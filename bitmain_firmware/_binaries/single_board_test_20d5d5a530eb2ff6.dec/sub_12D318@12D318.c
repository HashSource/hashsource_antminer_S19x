int __fastcall sub_12D318(_DWORD *a1, _DWORD *a2, void *a3, signed int a4)
{
  int v5; // r4
  int v6; // r5
  _DWORD *v10; // r0
  const void *v11; // r0
  size_t v12; // r2

  if ( *a1 != 16 || !a1[1] || (v10 = (_DWORD *)sub_AD8B0((int)&unk_20FEE4, a1), (v5 = (int)v10) == 0) )
  {
    v5 = 0;
LABEL_3:
    v6 = -1;
    sub_D0048(13, 134, 109, (int)"crypto/asn1/evp_asn1.c", 111);
    goto LABEL_4;
  }
  if ( a2 )
    *a2 = *v10;
  v6 = sub_AE2A8(v10[1]);
  if ( a3 )
  {
    v11 = (const void *)sub_AE2B4(*(_DWORD *)(v5 + 4));
    v12 = a4;
    if ( a4 >= v6 )
      v12 = v6;
    memcpy(a3, v11, v12);
  }
  if ( v6 == -1 )
    goto LABEL_3;
LABEL_4:
  sub_B17C4(v5, (int)&unk_20FEE4);
  return v6;
}
