int __fastcall sub_AE95C(int *a1, void **a2, int a3, char a4, int a5)
{
  unsigned __int8 *v5; // r4
  int v6; // r5
  bool v7; // r3
  int v8; // r3
  unsigned __int8 *v9; // r3
  char v11; // r0
  size_t v12; // r6
  int v13; // r7
  int v15; // [sp+8h] [bp-2Ch]
  int v17; // [sp+10h] [bp-24h]
  int v18; // [sp+14h] [bp-20h]
  void *src; // [sp+1Ch] [bp-18h] BYREF
  int v20; // [sp+20h] [bp-14h] BYREF
  int v21; // [sp+24h] [bp-10h] BYREF
  unsigned __int8 *v22; // [sp+28h] [bp-Ch] BYREF
  unsigned __int8 *v23; // [sp+2Ch] [bp-8h] BYREF

  v5 = (unsigned __int8 *)*a2;
  v6 = a3;
  v18 = a4 & 1;
  v7 = !(a4 & 1);
  if ( a1 )
    v8 = 0;
  else
    v8 = v7;
  src = *a2;
  if ( v8 )
  {
    *a2 = &v5[a3];
    return 1;
  }
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      if ( v6 != 1 && !*v5 && !v5[1] )
      {
        v9 = v5 + 2;
        src = v5 + 2;
        if ( v18 )
          goto LABEL_34;
        v13 = 0;
        sub_D0048(13, 106, 159, "crypto/asn1/tasn_dec.c", 1027);
        return v13;
      }
      v23 = v5;
      v11 = sub_ADD48(&v23, (int *)&v22, &v20, &v21, v6);
      if ( v11 < 0 )
      {
        v13 = 0;
        sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
        sub_D0048(13, 106, 58, "crypto/asn1/tasn_dec.c", 1036);
        return v13;
      }
      v9 = v23;
      v12 = (v11 & 1) != 0 ? v23 - v5 : (size_t)v22;
      src = v23;
      if ( (v11 & 1) != 0 )
        v12 = v6 - v12;
      if ( (v11 & 0x20) != 0 )
        break;
      if ( !v12 )
        goto LABEL_11;
      v15 = v11 & 0x80;
      if ( a1 )
      {
        v17 = *a1;
        if ( !sub_BAF60(a1) )
        {
          sub_D0048(13, 140, 65, "crypto/asn1/tasn_dec.c", 1066);
          return v15;
        }
        memcpy((void *)(a1[1] + v17), src, v12);
        v9 = (unsigned __int8 *)src;
      }
      v9 += v12;
      src = v9;
      v6 -= v9 - v5;
      if ( v6 <= 0 )
        goto LABEL_27;
LABEL_12:
      v5 = v9;
    }
    if ( a5 > 4 )
    {
      v13 = v11 & 0x80;
      sub_D0048(13, 106, 197, "crypto/asn1/tasn_dec.c", 1043);
      return v13;
    }
    if ( !sub_AE95C(a1, &src, v12, v11 & 1, a5 + 1) )
      return 0;
    v9 = (unsigned __int8 *)src;
LABEL_11:
    v6 -= v9 - v5;
    if ( v6 <= 0 )
      goto LABEL_27;
    goto LABEL_12;
  }
  v9 = v5;
LABEL_27:
  if ( v18 )
  {
    v13 = 0;
    sub_D0048(13, 106, 137, "crypto/asn1/tasn_dec.c", 1053);
    return v13;
  }
LABEL_34:
  *a2 = v9;
  return 1;
}
