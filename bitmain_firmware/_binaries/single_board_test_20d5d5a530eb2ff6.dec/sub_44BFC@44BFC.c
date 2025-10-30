int __fastcall sub_44BFC(float *a1)
{
  int v1; // r5
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  if ( sub_44428(a1, 0) )
  {
    sub_428C0();
    v1 = -1;
    sub_40D18(*(_DWORD *)dword_705300);
  }
  else
  {
    v1 = 0;
    sub_7778C(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 80));
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Set chain baud as %d\n", "pattern_test", *(_DWORD *)(dword_705300 + 80));
    snprintf(byte_642BDC, 0x100u, "Set chain baud as %d", *(_DWORD *)(dword_705300 + 80));
    sub_3CC5C((int)byte_642BDC, v3);
    usleep(0x186A0u);
    sub_40BE8(*(_DWORD *)dword_705300, dword_6E3468);
    sub_428C0();
    sub_40D18(*(_DWORD *)dword_705300);
    sub_40A88((int)&unk_6E3470, byte_6E4A9C);
    sub_422E4();
  }
  return v1;
}
