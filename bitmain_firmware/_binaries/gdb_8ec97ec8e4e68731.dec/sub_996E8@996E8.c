int __fastcall sub_996E8(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // r4
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r12
  int v7; // lr
  int result; // r0
  int v9; // t1

  if ( a2 <= 0 )
    return 0;
  if ( a4 > 0 )
  {
    v5 = a1 - 1;
    v4 = 0;
  }
  v6 = a1;
  if ( a4 > 0 )
    a2 += (int)v5;
  v7 = *a1;
  if ( a4 <= 0 )
LABEL_21:
    sub_946E0("Received too much data from the target.", a2);
  result = v4;
  while ( 1 )
  {
    if ( v4 )
    {
      *(_BYTE *)(a3 + result) = v7 ^ 0x20;
      v4 = 0;
      ++result;
      if ( (unsigned __int8 *)a2 == v6 )
        break;
      goto LABEL_10;
    }
    if ( v7 == 125 )
      v4 = 1;
    else
      *(_BYTE *)(a3 + result) = v7;
    if ( v7 != 125 )
      ++result;
    if ( (unsigned __int8 *)a2 == v6 )
      break;
LABEL_10:
    v9 = *++v6;
    v7 = v9;
    if ( result >= a4 )
      goto LABEL_21;
  }
  if ( v4 )
    sub_946E0("Unmatched escape character in target response.");
  return result;
}
