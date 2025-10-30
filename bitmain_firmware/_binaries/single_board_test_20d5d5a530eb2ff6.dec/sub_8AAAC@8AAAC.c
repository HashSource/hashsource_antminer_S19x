int *__fastcall sub_8AAAC(int *a1, int *a2)
{
  int *result; // r0
  int *v4; // r5
  _DWORD *v5; // r0
  int v6; // r7
  size_t v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r2

  result = (int *)a1[308];
  if ( result != a2 )
  {
    v4 = a2;
    if ( !a2 )
      v4 = (int *)a1[376];
    v5 = sub_8440C(v4[48]);
    v6 = (int)v5;
    if ( !v5 )
      return 0;
    if ( !sub_925AC(v5 + 60, a1[257] + 240) )
    {
      sub_84370(v6);
      return 0;
    }
    sub_84370(a1[257]);
    v7 = a1[276];
    a1[257] = v6;
    if ( v7 > 0x20 )
      return 0;
    v8 = a1[308];
    if ( v8 && v7 == *(_DWORD *)(v8 + 212) && !memcmp(a1 + 277, (const void *)(v8 + 216), v7) )
    {
      a1[276] = v4[53];
      v9 = v4[55];
      v10 = v4[56];
      v11 = v4[57];
      a1[277] = v4[54];
      a1[278] = v9;
      a1[279] = v10;
      a1[280] = v11;
      v12 = v4[59];
      v13 = v4[60];
      v14 = v4[61];
      a1[281] = v4[58];
      a1[282] = v12;
      a1[283] = v13;
      a1[284] = v14;
    }
    sub_89EF8((int)v4);
    sub_89F14(a1[308]);
    result = v4;
    a1[308] = (int)v4;
  }
  return result;
}
