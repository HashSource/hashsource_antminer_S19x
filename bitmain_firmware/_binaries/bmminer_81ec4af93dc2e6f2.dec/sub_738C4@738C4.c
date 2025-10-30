void *__fastcall sub_738C4(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // r3
  void *v8; // [sp+1Ch] [bp-10h]
  unsigned int v9; // [sp+20h] [bp-Ch]
  void *v10; // [sp+24h] [bp-8h]

  if ( (unsigned int)(a1[3] + a2) <= a1[2] )
    return (void *)a1[4];
  v10 = (void *)a1[4];
  v4 = a1[2] + a2;
  if ( 2 * a1[2] >= v4 )
    v4 = 2 * a1[2];
  v9 = v4;
  v8 = sub_7188C(4 * v4);
  if ( !v8 )
    return 0;
  a1[2] = v9;
  a1[4] = v8;
  if ( !a3 )
    return v10;
  sub_7386C(a1[4], 0, (int)v10, 0, a1[3]);
  sub_718D4(v10);
  return (void *)a1[4];
}
