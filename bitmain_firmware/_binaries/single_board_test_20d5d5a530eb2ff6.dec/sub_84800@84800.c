int __fastcall sub_84800(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r3
  _DWORD *v6; // r7

  if ( !a2 )
    return 0;
  v2 = a1 + 5;
  if ( a2 == a1[5] && a1[6] )
  {
    v3 = a1 + 5;
LABEL_20:
    *a1 = v3;
    return 1;
  }
  v3 = a1 + 10;
  if ( a2 == a1[10] )
  {
    if ( a1[11] )
      goto LABEL_20;
    v3 = a1 + 15;
    if ( a2 != a1[15] )
    {
LABEL_5:
      v3 = a1 + 20;
      if ( a2 != a1[20] )
        goto LABEL_6;
      goto LABEL_25;
    }
  }
  else
  {
    v3 = a1 + 15;
    if ( a2 != a1[15] )
      goto LABEL_5;
  }
  if ( a1[16] )
    goto LABEL_20;
  v3 = a1 + 20;
  if ( a2 != a1[20] )
  {
LABEL_6:
    v3 = a1 + 25;
    if ( a2 != a1[25] )
      goto LABEL_7;
    goto LABEL_27;
  }
LABEL_25:
  if ( a1[21] )
    goto LABEL_20;
  v3 = a1 + 25;
  if ( a2 != a1[25] )
  {
LABEL_7:
    v3 = a1 + 30;
    if ( a2 != a1[30] )
      goto LABEL_8;
    goto LABEL_29;
  }
LABEL_27:
  if ( a1[26] )
    goto LABEL_20;
  v3 = a1 + 30;
  if ( a2 != a1[30] )
  {
LABEL_8:
    v3 = a1 + 35;
    if ( a2 != a1[35] )
      goto LABEL_9;
    goto LABEL_31;
  }
LABEL_29:
  if ( a1[31] )
    goto LABEL_20;
  v3 = a1 + 35;
  if ( a2 != a1[35] )
  {
LABEL_9:
    v3 = a1 + 40;
    if ( a2 != a1[40] )
      goto LABEL_10;
LABEL_33:
    if ( a1[41] )
      goto LABEL_20;
    v3 = a1 + 45;
    if ( a2 != a1[45] )
      goto LABEL_11;
    goto LABEL_35;
  }
LABEL_31:
  if ( a1[36] )
    goto LABEL_20;
  v3 = a1 + 40;
  if ( a2 == a1[40] )
    goto LABEL_33;
LABEL_10:
  v3 = a1 + 45;
  if ( a2 == a1[45] )
  {
LABEL_35:
    if ( a1[46] )
      goto LABEL_20;
  }
LABEL_11:
  v6 = a1 + 50;
  while ( !v2[1] || !*v2 || sub_10E66C(*v2, a2) )
  {
    v2 += 5;
    if ( v2 == v6 )
      return 0;
  }
  *a1 = v2;
  return 1;
}
