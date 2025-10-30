int __fastcall sub_93A50(int *a1)
{
  int v2; // r6
  int v3; // r4
  int v4; // r6
  void *v5; // r0
  void *v6; // t1
  int result; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  v2 = a1[1];
  if ( *a1 != v2 )
  {
    v3 = *a1 - 4;
    v4 = v2 - 4;
    do
    {
      v6 = *(void **)(v3 + 4);
      v3 += 4;
      v5 = v6;
      if ( v6 )
        free(v5);
    }
    while ( v3 != v4 );
    v2 = *a1;
  }
  v8 = 0;
  a1[1] = v2;
  sub_941C0(a1, &v8);
  sub_94088(a1 + 3, a1[5]);
  a1[5] = 0;
  a1[6] = (int)(a1 + 4);
  a1[7] = (int)(a1 + 4);
  a1[8] = 0;
  result = sub_94088(a1 + 9, a1[11]);
  a1[11] = 0;
  a1[14] = 0;
  a1[12] = (int)(a1 + 10);
  a1[13] = (int)(a1 + 10);
  return result;
}
