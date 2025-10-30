int __fastcall sub_B0A18(int *a1, void **a2, int a3, int a4)
{
  int *v4; // r5
  int v6; // [sp+14h] [bp-20h] BYREF
  _BYTE v7[24]; // [sp+18h] [bp-1Ch] BYREF

  v4 = &v6;
  v6 = 0;
  if ( a1 )
    v4 = a1;
  v7[0] = 0;
  if ( sub_B0394(v4, a2, a3, a4, -1, 0, 0, (int)v7) <= 0 )
    return 0;
  else
    return *v4;
}
