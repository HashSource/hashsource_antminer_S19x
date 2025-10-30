int __fastcall sub_11E22C(unsigned __int8 *a1, int a2, int a3)
{
  int v3; // r1
  unsigned __int8 *v4; // r4
  unsigned int v5; // r2
  unsigned int v6; // t1
  unsigned int v7; // r3
  unsigned int v8; // t1
  unsigned __int8 v9; // r7
  unsigned __int8 v10; // r12

  if ( !a3 )
    return 0;
  v3 = a2 - 1;
  v4 = &a1[a3];
  while ( 1 )
  {
    v6 = *a1++;
    v5 = v6;
    v8 = *(unsigned __int8 *)++v3;
    v7 = v8;
    if ( v5 == v8 )
      goto LABEL_12;
    v9 = v7 + 32;
    v10 = v5 + 32;
    if ( v5 - 65 > 0x19 )
      break;
    v5 = v10;
    if ( v7 - 65 <= 0x19 )
      goto LABEL_11;
    if ( v7 != v10 )
      goto LABEL_7;
LABEL_12:
    if ( a1 == v4 )
      return 0;
  }
  if ( v7 - 65 > 0x19 )
    goto LABEL_7;
LABEL_11:
  v7 = v9;
  if ( v9 == v5 )
    goto LABEL_12;
LABEL_7:
  if ( v7 <= v5 )
    return 1;
  else
    return -1;
}
