int __fastcall sub_1BC68(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  int v6; // r2
  int result; // r0
  char s[16]; // [sp+4h] [bp-10h] BYREF

  v4 = 11254;
  v5 = 0;
  do
  {
    sprintf(s, "chain_acs%d", ++v5);
    v6 = dword_A0D68 + v4;
    v4 += 97;
    result = sub_43D2C(a1, s, v6, a2);
    a1 = result;
  }
  while ( v5 != 16 );
  return result;
}
