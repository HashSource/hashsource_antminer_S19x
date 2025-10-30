int __fastcall sub_1B6E0(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r3
  int result; // r0
  double v6; // [sp+0h] [bp-18h] BYREF
  char s[12]; // [sp+Ch] [bp-Ch] BYREF

  v2 = a1;
  v3 = 0;
  v6 = (double)sub_30578(a1, a2);
  do
  {
    sprintf(s, "freq_avg%d", ++v3, v4, v6);
    v6 = (double)(int)(v6 * 100.0) / 100.0;
    result = sub_43F2C(v2, s, &v6, 1);
    v2 = result;
  }
  while ( v3 != 16 );
  return result;
}
