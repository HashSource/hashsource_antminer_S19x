void **__fastcall sub_16E8F4(int a1)
{
  int *v1; // r5
  unsigned int v2; // r1
  unsigned int v4; // r0
  unsigned int v5; // t1
  int v7; // r0
  _DWORD *v8; // r0
  int *v9; // r2
  void *v10; // r4
  int v11; // r2
  void *v12; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    return 0;
  v1 = off_21FFE4;
  if ( !off_21FFE4 )
    return 0;
  v2 = *off_21FFE4;
  if ( !*off_21FFE4 )
    return sub_10BFCC();
  while ( 1 )
  {
    v4 = sub_16E8DC(a1, v2, -1);
    if ( v4 != -1 )
      break;
    v5 = v1[1];
    ++v1;
    v2 = v5;
    if ( !v5 )
      return sub_10BFCC();
  }
  v7 = sub_16E8EC(a1, v4);
  v8 = (_DWORD *)sub_10E518(v7, 0);
  if ( !v8 )
    return sub_10BFCC();
  if ( *v8 != 16 )
    return 0;
  v9 = (int *)v8[1];
  v10 = (void *)v9[2];
  v11 = *v9;
  v12 = v10;
  return (void **)sub_B0A18(0, &v12, v11, (int)X509_EXTENSIONS_it);
}
