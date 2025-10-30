int __fastcall sub_86528(int *a1, char *a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r3

  v4 = sub_10BFCC();
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *a2 && !sub_BBEDC(a2, 58, 1, (int)sub_85670, v4) )
  {
    sub_10BDB4(v5);
    return 0;
  }
  sub_10BDB4(a1[3]);
  v6 = a1[1];
  a1[3] = v5;
  if ( v6 )
    return sub_858D0(a1 + 1, a1 + 2, v5);
  else
    return 1;
}
