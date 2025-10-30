int __fastcall sub_DA17C(int a1)
{
  int *v1; // r0
  int v2; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  v1 = (int *)sub_AD928(&v4, a1);
  if ( v1 )
    v2 = *v1;
  else
    v2 = 0;
  sub_CDDF8(v4);
  return v2;
}
