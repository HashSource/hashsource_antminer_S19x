int __fastcall sub_BDF44(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r5
  void *v6; // r1
  int v7; // r2
  int v8; // r0
  void *v9; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF
  int v11; // [sp+10h] [bp-10h] BYREF
  int v12; // [sp+14h] [bp-Ch] BYREF
  int *v13; // [sp+18h] [bp-8h] BYREF
  _DWORD *v14; // [sp+1Ch] [bp-4h] BYREF

  result = sub_AE64C(0, (int *)&v9, &v11, &v14, a2);
  if ( result )
  {
    sub_B294C(0, &v12, &v13, v14);
    if ( v12 == 16 && (v4 = sub_B2074(0, &v9, v11)) != 0 )
    {
      v6 = *(void **)(a1 + 12);
      v7 = *v13;
      v10 = v13[2];
      if ( v6 == &dhx_asn1_meth )
        v5 = sub_BF258(0, &v10, v7);
      else
        v5 = sub_BF210(0, &v10, v7);
      if ( v5 )
      {
        v8 = sub_B8264();
        *(_DWORD *)(v5 + 24) = v8;
        if ( v8 && sub_12700C(v4, v8) )
        {
          if ( sub_BFA94(v5) )
          {
            sub_D9F44(a1, **(_DWORD **)(a1 + 12), v5, *(_DWORD *)(a1 + 12));
            sub_AE254(v4);
            return 1;
          }
        }
        else
        {
          sub_D0048(5, 110, 106, "crypto/dh/dh_ameth.c", 181);
        }
LABEL_5:
        sub_BFB8C(v5);
        sub_AE254(v4);
        return 0;
      }
    }
    else
    {
      v4 = 0;
    }
    v5 = 0;
    sub_D0048(5, 110, 114, "crypto/dh/dh_ameth.c", 195);
    goto LABEL_5;
  }
  return result;
}
