void __fastcall sub_184A34(_BYTE *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r1
  _DWORD *v4; // r0
  _BYTE v5[24]; // [sp+0h] [bp-18h] BYREF

  if ( !a1 || !*a1 )
    sub_946E0("Requires an argument (inferior id(s) to remove)", a1);
  sub_5ADF4((int)v5, (int)a1);
LABEL_4:
  while ( !v5[0] )
  {
    while ( 1 )
    {
      v3 = sub_5AE34((int)v5, v1, v2);
      v4 = (_DWORD *)dword_487918;
      if ( !dword_487918 )
      {
LABEL_13:
        sub_946B0("Inferior ID %d not known.", v3);
        goto LABEL_4;
      }
      while ( v3 != v4[2] )
      {
        v4 = (_DWORD *)v4[1];
        if ( !v4 )
          goto LABEL_13;
      }
      if ( *v4 )
        break;
      if ( v4[3] )
      {
        sub_946B0("Can not remove active inferior %d.", v3);
        goto LABEL_4;
      }
      sub_1848E4(v4);
      if ( v5[0] )
        return;
    }
    sub_946B0("Can not remove current inferior %d.", v3);
  }
}
