int __fastcall sub_86584(int *a1, char *a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r3
  int result; // r0
  int v8; // r0
  int v9; // r0

  v4 = sub_10BFCC();
  if ( v4 )
  {
    v5 = v4;
    if ( !*a2 || sub_BBEDC(a2, 58, 1, (int)sub_85670, v4) )
    {
      sub_10BDB4(a1[49]);
      v6 = a1[47];
      a1[49] = v5;
      if ( !v6 )
      {
        v8 = sub_89910(a1);
        if ( v8 )
          a1[47] = sub_10BDE0(v8);
        result = 1;
        if ( !a1[47] )
          return result;
        v5 = a1[49];
      }
      return sub_858D0(a1 + 47, a1 + 48, v5);
    }
    sub_10BDB4(v5);
  }
  if ( !a1[47] )
  {
    v9 = sub_89910(a1);
    if ( v9 )
      a1[47] = sub_10BDE0(v9);
  }
  return 0;
}
