int __fastcall sub_1B780(int a1)
{
  double v3; // [sp+0h] [bp-2Ch] BYREF
  char v4[32]; // [sp+8h] [bp-24h] BYREF

  strcpy(v4, "total_rateideal");
  v3 = (double)sub_3047C(
                 *(_DWORD *)"total_rateideal",
                 *(_DWORD *)"l_rateideal",
                 *(_DWORD *)"teideal",
                 *(_DWORD *)"eal",
                 0,
                 0);
  return sub_43F2C(a1, v4, &v3, 1);
}
