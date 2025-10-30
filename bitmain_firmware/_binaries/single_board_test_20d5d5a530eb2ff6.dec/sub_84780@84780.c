bool __fastcall sub_84780(int a1, int a2, int a3)
{
  int *v3; // r3
  int v4; // r6
  int v6; // r0
  int v7; // r0

  if ( a1 )
    v3 = *(int **)(a1 + 1028);
  else
    v3 = *(int **)(a2 + 192);
  v4 = *v3;
  if ( *v3 )
  {
    v6 = sub_A4D60(a1, a2, a3, 0, 0);
    if ( v6 != 1 )
    {
      sub_D0048(20, 346, v6, "ssl/ssl_cert.c", 293);
      return 0;
    }
    v7 = *(_DWORD *)(v4 + 8);
    if ( v7 )
      return sub_10BD3C(v7, a3) != 0;
    v7 = sub_10BFCC();
    *(_DWORD *)(v4 + 8) = v7;
    if ( v7 )
      return sub_10BD3C(v7, a3) != 0;
  }
  return 0;
}
