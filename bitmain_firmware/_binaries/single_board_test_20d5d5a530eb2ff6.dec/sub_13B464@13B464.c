int __fastcall sub_13B464(_BYTE *a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r6
  _BYTE v6[12]; // [sp+4h] [bp-Ch] BYREF

  if ( a1 )
  {
    v3 = a2;
    v4 = a3;
    sub_13B198((int)v6, (int)a1);
    a3 = v4;
    a2 = v3;
    a1 = v6;
  }
  return sub_13B3F8((int)a1, a2, a3);
}
