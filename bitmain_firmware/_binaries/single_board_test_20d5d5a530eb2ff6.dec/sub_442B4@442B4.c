int __fastcall sub_442B4(float *a1, int a2)
{
  float v2; // s0
  char s[48]; // [sp+8h] [bp-30h] BYREF

  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : hm_text sweep_online send nonce,freq:%f\n", "pt_send_nonce", v2);
  snprintf(byte_641DD8, 0x100u, "hm_text sweep_online send nonce,freq:%f", v2);
  sub_3CC5C((int)byte_641DD8, s);
  snprintf(s, 0x10u, "%d", (int)v2);
  sub_2146C("Test freq", s, 0);
  sub_3E2C0();
  sub_4298C(dword_7050BC);
  sub_4176C(a1, *(_DWORD *)(dword_705300 + 4));
  sub_41414((int)a1, *(_DWORD *)(dword_705300 + 4), a2);
  dword_705348 = 0;
  sub_40BE8(*(_DWORD *)dword_705300, dword_6E3468);
  dword_705348 = 1;
  sub_40A88((int)&unk_6E3470, byte_6E4A9C);
  sub_422E4();
  return 0;
}
