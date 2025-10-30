int *__fastcall sub_594B8(int *a1, int *a2)
{
  int v4; // [sp+Ch] [bp-10h]
  int v5; // [sp+Ch] [bp-10h]
  int *i; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  if ( (int *)*a2 == a1 + 1 || (int *)a2[1] == a1 + 1 )
  {
    i = a2;
  }
  else
  {
    for ( i = (int *)a2[1]; (int *)*i != a1 + 1; i = (int *)*i )
      ;
  }
  if ( (int *)*i == a1 + 1 )
    v7 = i[1];
  else
    v7 = *i;
  *(_DWORD *)(v7 + 8) = i[2];
  if ( i[2] )
  {
    if ( i == *(int **)i[2] )
      *(_DWORD *)i[2] = v7;
    else
      *(_DWORD *)(i[2] + 4) = v7;
  }
  else
  {
    *a1 = v7;
  }
  if ( i != a2 )
  {
    v4 = a2[4];
    a2[4] = i[4];
    i[4] = v4;
    v5 = a2[5];
    a2[5] = i[5];
    i[5] = v5;
  }
  if ( !i[3] )
    sub_591C0(a1, v7);
  sub_59B54(a1);
  return i;
}
