int __fastcall sub_8ACDC(_DWORD *a1, int a2)
{
  int result; // r0
  unsigned int v4; // r0
  int v5; // r5
  int v6; // r0

  if ( a2 > 0 )
    return 0;
  v4 = sub_D0760();
  if ( v4 )
  {
    if ( HIBYTE(v4) != 2 )
      return 1;
    return 5;
  }
  if ( sub_8ACD8((int)a1) == 3 )
  {
    v5 = sub_882E0((int)a1);
    if ( sub_B6708(v5, 1) )
      return 2;
    if ( sub_B6708(v5, 2) )
      return 3;
    if ( sub_B6708(v5, 4) )
    {
LABEL_21:
      v6 = sub_B713C(v5);
      if ( v6 == 2 )
        return 7;
      if ( v6 == 3 )
        return 8;
      return 5;
    }
  }
  if ( sub_8ACD8((int)a1) != 2 )
    goto LABEL_9;
  v5 = a1[3];
  if ( sub_B6708(v5, 2) )
    return 3;
  if ( sub_B6708(v5, 1) )
    return 2;
  if ( sub_B6708(v5, 4) )
    goto LABEL_21;
LABEL_9:
  result = sub_8ACD8((int)a1);
  if ( result != 4 )
  {
    if ( sub_8ACD8((int)a1) == 5 )
      return 9;
    if ( sub_8ACD8((int)a1) == 6 )
      return 10;
    if ( sub_8ACD8((int)a1) == 7 )
      return 11;
    if ( (a1[10] & 2) != 0 && !*(_DWORD *)(a1[31] + 224) )
      return 6;
    return 5;
  }
  return result;
}
