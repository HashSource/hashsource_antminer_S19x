int __fastcall sub_1BA48(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1
  int result; // r0
  double v6; // [sp+0h] [bp-2Ch] BYREF
  char s[36]; // [sp+8h] [bp-24h] BYREF

  v2 = 0;
  do
  {
    ++v2;
    v6 = 0.0;
    v3 = sprintf(s, "chain_rateideal%d", v2);
    v6 = (double)(int)((double)sub_30578(v3, v4) / 1000.0 * 100.0) / 100.0;
    result = sub_43F2C(a1, s, &v6, 1);
    a1 = result;
  }
  while ( v2 != 16 );
  return result;
}
