_DWORD *__fastcall sub_C3A7C(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // r4
  int v5; // r2
  _DWORD *v6; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r0

  if ( a2 )
  {
    v4 = a2;
    if ( *a2 )
    {
      if ( *a2 == 1 )
      {
        v13 = a2[1];
        if ( v13 )
          sub_C33D0(v13);
      }
    }
    else
    {
      ASN1_OBJECT_free(a2[1], a2, a3, 0);
    }
  }
  else
  {
    v4 = (_DWORD *)sub_C3414();
    if ( !v4 )
    {
      sub_D0048(16, 262, 65, "crypto/ec/ec_asn1.c", 540);
      return 0;
    }
  }
  if ( sub_C628C(a1) == 1 )
  {
    v8 = sub_C6284(a1);
    if ( v8 )
    {
      v12 = sub_EAA20(v8);
      if ( v12 && sub_EB278() )
      {
        *v4 = 0;
        v4[1] = v12;
        return v4;
      }
      ASN1_OBJECT_free(v12, v9, v10, v11);
      sub_D0048(16, 262, 167, "crypto/ec/ec_asn1.c", 561);
    }
  }
  else
  {
    *v4 = 1;
    v6 = sub_C347C(a1, 0, v5);
    v4[1] = v6;
    if ( v6 )
      return v4;
  }
  sub_C3428((int)v4);
  return 0;
}
