int __fastcall sub_B3A1C(unsigned __int16 *a1, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  if ( sub_B55B4() == 1 && sub_B3824(a1, a2, 0, &v5) )
    return v5;
  else
    return 0;
}
