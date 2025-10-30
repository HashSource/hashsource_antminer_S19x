int __fastcall sub_4ADCC(int a1, int a2, _WORD *a3)
{
  __int16 *v3; // r6
  int v8; // r1
  int v9; // r3
  __int16 v10; // r0
  int v11; // r3

  v3 = a3 + 256;
  if ( (*(&off_B56E4[5 * (__int16)a3[257] + 55] + (__int16)a3[256]))() == 1 )
  {
    v8 = *v3;
    v9 = 2 * (5 * (__int16)a3[257] + v8);
    v10 = *(_WORD *)((char *)&unk_990A0 + v9);
    v11 = *(unsigned __int16 *)((char *)&unk_98F20 + v9 + 224);
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
      sub_4ADCC(a1, a2, a3);
    }
  }
  a3[257] = 0;
  return 0;
}
