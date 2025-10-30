int __fastcall sub_DBDA0(int *a1, int a2, int a3)
{
  int v4; // r5
  int v7; // r4
  int v8; // r2

  v4 = *a1;
  if ( !*a1 )
  {
    v4 = sub_10BFCC(a1);
    *a1 = v4;
    if ( !v4 )
    {
      v8 = 375;
LABEL_7:
      sub_D0048(15, 102, 65, (int)"crypto/ex_data.c", v8);
      return 0;
    }
  }
  v7 = sub_10C010(v4, a2, a3);
  if ( v7 <= a2 )
  {
    while ( 1 )
    {
      ++v7;
      if ( !sub_10BD3C(*a1, 0) )
        break;
      if ( a2 < v7 )
        goto LABEL_8;
    }
    v8 = 382;
    goto LABEL_7;
  }
LABEL_8:
  sub_10C040(*a1, a2, a3);
  return 1;
}
