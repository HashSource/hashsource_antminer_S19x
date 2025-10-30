int __fastcall sub_1BD40(int a1, int a2)
{
  char *v2; // r5
  int v5; // r4
  int result; // r0
  char v7[16]; // [sp+0h] [bp-10h] BYREF

  v2 = (char *)&unk_241B00;
  v5 = 0;
  do
  {
    sprintf(v7, "chain_rate%d", ++v5);
    result = sub_43D2C(a1, v7, v2, a2);
    a1 = result;
    v2 += 32;
  }
  while ( v5 != 16 );
  return result;
}
