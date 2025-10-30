bool __fastcall sub_13ABD8(int **a1)
{
  char *v2; // r0
  char *v4; // r0
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0

  v2 = sub_EAAB4(0x1ABu);
  if ( (!sub_D99BC((int)v2) || sub_13AB30(a1, 0x1ABu, -1))
    && ((v4 = sub_EAAB4(0x3D6u), !sub_D99DC((int)v4)) || sub_13AB30(a1, 0x3D6u, -1))
    && ((v5 = sub_EAAB4(0x3D7u), !sub_D99DC((int)v5)) || sub_13AB30(a1, 0x3D7u, -1))
    && ((v6 = sub_EAAB4(0x329u), !sub_D99DC((int)v6)) || sub_13AB30(a1, 0x329u, -1))
    && ((v7 = sub_EAAB4(0x32Du), !sub_D99BC((int)v7)) || sub_13AB30(a1, 0x32Du, -1))
    && ((v8 = sub_EAAB4(0x1A7u), !sub_D99BC((int)v8)) || sub_13AB30(a1, 0x1A7u, -1))
    && ((v9 = sub_EAAB4(0x1A3u), !sub_D99BC((int)v9)) || sub_13AB30(a1, 0x1A3u, -1))
    && sub_13ABB0(a1, 0x2Cu, -1)
    && sub_13ABB0(a1, 0x25u, 128)
    && sub_13ABB0(a1, 0x25u, 64)
    && sub_13ABB0(a1, 0x1Fu, -1) )
  {
    return sub_13ABB0(a1, 0x25u, 40) != 0;
  }
  else
  {
    return 0;
  }
}
