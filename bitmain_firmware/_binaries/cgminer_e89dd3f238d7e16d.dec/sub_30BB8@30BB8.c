void __fastcall sub_30BB8(int a1)
{
  _DWORD v2[34]; // [sp+14h] [bp-F0h] BYREF
  int v3; // [sp+9Ch] [bp-68h] BYREF
  char v4[64]; // [sp+BCh] [bp-48h] BYREF
  char *v5; // [sp+FCh] [bp-8h]

  v5 = v4;
  sub_2D1C8((unsigned int)v4, a1);
  sub_1EBD8(v2);
  sub_1EC54((int)v2, v4, 0x40u);
  sub_2AF08((void *)(a1 + 128), &v3, 0x20u, "cgminer.c", "calc_midstate", 2319);
  sub_2D2D8();
}
