int *__fastcall sub_20F3B0(int *a1, int *a2)
{
  int v2; // r3
  int *v4; // r6
  bool v5; // zf
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int *v10; // r4

  v2 = *a2;
  v4 = a1;
  if ( *a2 > 0 )
  {
    while ( 1 )
    {
      v6 = ((int (__fastcall *)(int *))loc_15FA88)(v4);
      v10 = (int *)v6;
      if ( !v6 )
        break;
      v4 = (int *)v6;
      v2 = *a2 - 1;
      v5 = *a2 == 1;
      *a2 = v2;
      if ( v2 < 0 || v5 )
        goto LABEL_6;
    }
    v2 = *a2;
    v10 = v4;
  }
  else
  {
    v10 = a1;
  }
LABEL_6:
  if ( v2 < 0 )
  {
    do
    {
      v8 = sub_15D6E0(v10);
      if ( !v8 )
        break;
      v10 = (int *)v8;
      v7 = *a2 + 1;
      *a2 = v7;
    }
    while ( v7 < 0 );
  }
  return v10;
}
