int __fastcall sub_49B10(int a1, int a2, _WORD *a3)
{
  __int16 *v3; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r12

  v3 = a3 + 256;
  if ( (*(&off_B46E4[5 * (__int16)a3[257] + 55] + (__int16)a3[256]))() == 1 )
  {
    v8 = *v3;
    v9 = 2 * (5 * (__int16)a3[257] + v8);
    v10 = *(__int16 *)((char *)&unk_97ADC + v9);
    v11 = *(__int16 *)((char *)&unk_9795C + v9 + 224);
    if ( v8 != v10 )
    {
      a3[253] = 0;
      a3[255] = 0;
      a3[258] = 0;
    }
    *v3 = v10;
    if ( v11 )
    {
      a3[257] = v11;
      sub_49B10(a1, a2, a3);
    }
  }
  a3[257] = 0;
  return 0;
}
