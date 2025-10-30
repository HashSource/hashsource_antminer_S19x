int __fastcall sub_3481CC(int a1, int a2, unsigned int a3)
{
  int v3; // r10
  int v6; // r7
  int v7; // r9
  int v8; // r4
  int v9; // r1
  char *v10; // r11
  char *v11; // r0

  if ( a2 )
  {
    v3 = a2 - 1;
    v6 = 0;
    v7 = a2 - 1;
    while ( 1 )
    {
      v8 = (v6 + v7) / 2;
      v10 = sub_3481B8((int *)(a1 + 8 * v8));
      if ( v3 == v8 )
        break;
      v11 = sub_3481B8((int *)(8 * v8 + 8 + a1)) - 1;
      if ( (unsigned int)v10 > a3 )
      {
LABEL_8:
        v7 = v8 - 1;
        if ( v6 == v8 )
          return 0;
      }
      else
      {
        v6 = v8 + 1;
        if ( (unsigned int)v11 >= a3 )
          return v9;
      }
    }
    if ( (unsigned int)v10 <= a3 )
      return v9;
    goto LABEL_8;
  }
  return 0;
}
