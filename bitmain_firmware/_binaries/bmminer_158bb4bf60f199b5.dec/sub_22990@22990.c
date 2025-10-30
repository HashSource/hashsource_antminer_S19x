int __fastcall sub_22990(int a1)
{
  int v2; // r2
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v4, 0x800u, "Chain %d PIC reset failed.\n", a1);
    sub_47AB4(3, v4, 0);
  }
  v2 = dword_A0D68 + 12288;
  *(_DWORD *)(dword_A0D68 + 4 * a1 + 4) = 0;
  --*(_BYTE *)(v2 + 647);
  sub_31794(4, a1);
  sub_226C0(7u, "PIC reset failed.\n");
  return -1;
}
