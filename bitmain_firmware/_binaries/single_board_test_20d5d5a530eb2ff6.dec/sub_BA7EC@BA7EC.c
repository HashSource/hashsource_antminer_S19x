int __fastcall sub_BA7EC(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r4

  if ( a3 < 0 )
  {
    sub_D0048(3, 146, 119, "crypto/bn/bn_shift.c", 155);
    return 0;
  }
  else
  {
    v4 = sub_BA630((int)a1, a2, a3);
    sub_B8ACC(a1);
    return v4;
  }
}
