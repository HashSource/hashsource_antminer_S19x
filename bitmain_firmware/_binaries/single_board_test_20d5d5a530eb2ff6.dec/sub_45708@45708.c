int sub_45708()
{
  int v0; // r2
  float v1; // s16
  double v2; // d8
  double v4; // d8
  char v5[52]; // [sp+10h] [bp-34h] BYREF

  v0 = *(_DWORD *)(dword_705300 + 24) * *(_DWORD *)(dword_705300 + 4);
  v1 = (float)(unsigned int)dword_704F9C / (float)(*(_DWORD *)(dword_705300 + 32) * v0);
  if ( (int)(float)(v1 * 10000.0) < *(_DWORD *)(dword_705300 + 184) )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    v4 = v1;
    printf(
      "%s : warning current nonce_rate:%f  standard nonce_rate:%d \n",
      "check_nonce_rate",
      v4,
      *(_DWORD *)(dword_705300 + 184));
    snprintf(
      byte_643BDC,
      0x100u,
      "warning current nonce_rate:%f  standard nonce_rate:%d ",
      v4,
      *(_DWORD *)(dword_705300 + 184));
    sub_3CC5C((int)byte_643BDC, v5);
    return -1;
  }
  else
  {
    flt_70534C = (float)(unsigned int)dword_704F9C / (float)(*(_DWORD *)(dword_705300 + 32) * v0);
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    v2 = v1;
    printf("%s : nonce_rate:%f\n", "check_nonce_rate", v2);
    snprintf(byte_643CDC, 0x100u, "nonce_rate:%f", v2);
    sub_3CC5C((int)byte_643CDC, v5);
    return 0;
  }
}
