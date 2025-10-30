int __fastcall sub_45ABC(float *a1, _DWORD *a2, int a3, int a4)
{
  float v4; // s0
  char v9[48]; // [sp+18h] [bp-30h] BYREF

  if ( flt_7050A8 == v4 )
    a3 |= 1u;
  if ( !a3 )
    goto LABEL_7;
  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf(
    "%s : pt_before_send_nonce=================== freq:%f, range[0]:%f trytime:%d\n",
    "sweep_online_mode",
    v4,
    flt_7050A8,
    *a2);
  snprintf(
    byte_6440DC,
    0x100u,
    "pt_before_send_nonce=================== freq:%f, range[0]:%f trytime:%d",
    v4,
    flt_7050A8,
    *a2);
  sub_3CC5C((int)byte_6440DC, v9);
  if ( *a2 == 2 )
    *a2 = 3;
  if ( sub_44428(a1, 0) )
  {
    sub_428C0();
    sub_40D18(*(_DWORD *)dword_705300);
    return -1;
  }
  else
  {
LABEL_7:
    sub_442B4(a1, a4);
    return 0;
  }
}
